# volleyball_scoreboard

Code to power a custom scoreboard for volleyball. An Arduino ProMicro controls the Neopixel power 7 segment displays and keeps score. It is connected to a Raspberry Pi over USB and sends it the score. The Pi then uses Pico text to speech to read the score over a speaker. A phone can also be connected to the Pi over bluetooth and stream music through the same speaker. The Pi reduces the volume of the music when reading a score. 
