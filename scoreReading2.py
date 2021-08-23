#!/usr/bin/env python

from subprocess import call
import serial
import time

global previousScoreVisitor
previousScoreVisitor = "0"
global previousScoreHome 
previousScoreHome = "0"

# Converts the 4 digit string from arduino to 2	string scores
def scoreBoard(number):
	#print("Scoreboard: " + number) #For testing
	
	# splits the score into 2 elements of a list
	seperateScore = number.split('#', 1)
	
	visitorTeam = seperateScore[0]
	homeTeam = seperateScore[1]
	
	# Checks to see if scores are < 10 and will remove the 0 in front
	if visitorTeam[0] == "0":
		visitorTeam = visitorTeam[1]
	if homeTeam[0] == "0":
		homeTeam = homeTeam[1]
	
	print("Visitor Team: " + visitorTeam)
	print("Home Team: " + homeTeam)
	
	textToSpeech(visitorTeam, homeTeam)
	
	
def textToSpeech(visitorTeam, homeTeam):
	# Declare the global variables in function to be changed
	global previousScoreVisitor
	global previousScoreHome
	
	# Will be used to save previous score to see which score changed to serve first
	if (visitorTeam == "0" and homeTeam =="1") or (visitorTeam == "1" and homeTeam == "0") or (visitorTeam == "0" and homeTeam == "0"):
		previousScoreVisitor = visitorTeam
		previousScoreHome = homeTeam
		print("Previous Scores: " + previousScoreVisitor + " and " + previousScoreHome)
	else:
		print("Previous Scores: " + previousScoreVisitor + " and " + previousScoreHome)
		
	#Text required to write to the command prompt to allow text to speech to work
	cmd_beg= 'pico2wave '
	language = '-l en-US -w lookdave.wav '
	cmd_end = ' && aplay lookdave.wav'


	# Puts the score in parenthesis for the terminal command
	# Compares score with previous to see which score is read first
	if(visitorTeam > previousScoreVisitor):
		score = "\"" + visitorTeam + " serving " + homeTeam + "\""
	else: 
		score = "\"" + homeTeam + " serving " + visitorTeam + "\""
	
	readScore = cmd_beg + language + score + cmd_end
	print(readScore)
	call("/usr/bin/amixer set 'Capture' 60%", shell = True)
	time.sleep(0.5)
	# Will check score to play specific wav files
	
	#call("/home/pi/Documents/volume.sh", shell = True)
	if (visitorTeam == "23" and homeTeam == "19") or (visitorTeam == "19" and homeTeam == "23"):
		call("omxplayer -o local /home/pi/Documents/scoreWAV/2319.wav", shell = True)
	elif(visitorTeam == "4" and homeTeam == "10") or (visitorTeam == "10" and homeTeam == "4"):
		call("omxplayer -o local /home/pi/Documents/scoreWAV/104.mp3", shell = True)
	elif(visitorTeam == "4" and homeTeam == "20") or (visitorTeam == "20" and homeTeam == "4"):
		call("omxplayer -o local /home/pi/Documents/scoreWAV/420.mp3", shell = True)
	elif(visitorTeam == "11" and homeTeam == "9") or (visitorTeam == "9" and homeTeam == "11"):
		call("omxplayer -o local /home/pi/Documents/scoreWAV/911.mp3", shell = True)
	elif((int(visitorTeam) >= 25 or int(homeTeam) >= 25) and ((int(visitorTeam) - int(homeTeam) >= 2 or int(homeTeam) - int(visitorTeam) >= 2))):
		if(visitorTeam > homeTeam):
			call("omxplayer -o local /home/pi/Documents/scoreWAV/win1.mp3", shell = True)
		else:
			call("omxplayer -o local /home/pi/Documents/scoreWAV/AJ.wav", shell = True)
	elif(visitorTeam == "0" and homeTeam == "0"):
		call("omxplayer -o local /home/pi/Documents/scoreWAV/ready.wav", shell = True)
	else:
		call([readScore], shell = True)
	time.sleep(0.5)
	call("/usr/bin/amixer set 'Capture' 90%", shell = True)
	#call("volume.sh 90%", shell = True)
	
	# Assigns the scores to global variables to compare to later
	previousScoreVisitor = visitorTeam
	previousScoreHome = homeTeam

if __name__ == '__main__':
	try:
		ser = serial.Serial('/dev/ttyACM0', 9600, timeout=1)
	except:
		ser = serial.Serial('/dev/ttyACM1', 9600, timeout=1)
		
	ser.flush()
	scoreBoard("00#00")
	while True:
		number = ser.readline().decode('utf-8').rstrip()
		
		if number != '':
			print(number)
			scoreBoard(number)
