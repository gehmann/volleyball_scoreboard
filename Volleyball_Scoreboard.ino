#include <Adafruit_NeoPixel.h>

#define pin1 10
#define pin2 16
#define pin3 14
#define pin4 15
#define pinV 3
#define pinH 2

int RH = 255;
int GH = 0;
int BH = 0;

int score = 0;

char buffer1 [50];

String scoreString = "";

int scoreH = 0;
int scoreV = 0;

int countH = 0;
int countV = 0;

boolean printScore = false;
boolean count1 = false;
int quickPress = 51;

int RV = 0;
int GV = 0;
int BV = 255;

int brightness = 255;

Adafruit_NeoPixel Pixels1(24, pin1, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel Pixels2(24, pin2, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel Pixels3(24, pin3, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel Pixels4(24, pin4, NEO_GRB + NEO_KHZ800);


class LEDDISP
{
    int num;
    int pin;
    int R;
    int G;
    int B;

    Adafruit_NeoPixel *pixels;

  public:

    LEDDISP(Adafruit_NeoPixel *p, int br, int r, int g, int b)
    {
      pixels = p;
      pixels->begin();
      pixels->setBrightness(br);
      R = r;
      G = g;
      B = b;
    }

    void setNum(int n)
    {
      num = n;
      switch (num)
      {
        case 0:
          pixels->clear();
          pixels->show();
          pixels->setPixelColor(0, pixels->Color(R, G, B));
          pixels->setPixelColor(1, pixels->Color(R, G, B));
          pixels->setPixelColor(2, pixels->Color(R, G, B));
          pixels->setPixelColor(3, pixels->Color(R, G, B));
          pixels->setPixelColor(4, pixels->Color(R, G, B));
          pixels->setPixelColor(5, pixels->Color(R, G, B));
          pixels->setPixelColor(6, pixels->Color(R, G, B));
          pixels->setPixelColor(7, pixels->Color(R, G, B));
          pixels->setPixelColor(8, pixels->Color(R, G, B));
          pixels->setPixelColor(15, pixels->Color(R, G, B));
          pixels->setPixelColor(16, pixels->Color(R, G, B));
          pixels->setPixelColor(17, pixels->Color(R, G, B));
          pixels->setPixelColor(18, pixels->Color(R, G, B));
          pixels->setPixelColor(19, pixels->Color(R, G, B));
          pixels->setPixelColor(20, pixels->Color(R, G, B));
          pixels->setPixelColor(21, pixels->Color(R, G, B));
          pixels->setPixelColor(22, pixels->Color(R, G, B));
          pixels->setPixelColor(23, pixels->Color(R, G, B));
          pixels->show();

          break;

        case 1:
          pixels->clear();
          pixels->show();
          pixels->setPixelColor(0, pixels->Color(R, G, B));
          pixels->setPixelColor(1, pixels->Color(R, G, B));
          pixels->setPixelColor(2, pixels->Color(R, G, B));
          pixels->setPixelColor(21, pixels->Color(R, G, B));
          pixels->setPixelColor(22, pixels->Color(R, G, B));
          pixels->setPixelColor(23, pixels->Color(R, G, B));
          pixels->show();
          break;

        case 2:
          pixels->clear();
          pixels->show();
          pixels->setPixelColor(0, pixels->Color(R, G, B));
          pixels->setPixelColor(1, pixels->Color(R, G, B));
          pixels->setPixelColor(2, pixels->Color(R, G, B));
          pixels->setPixelColor(3, pixels->Color(R, G, B));
          pixels->setPixelColor(4, pixels->Color(R, G, B));
          pixels->setPixelColor(5, pixels->Color(R, G, B));
          pixels->setPixelColor(9, pixels->Color(R, G, B));
          pixels->setPixelColor(10, pixels->Color(R, G, B));
          pixels->setPixelColor(11, pixels->Color(R, G, B));
          pixels->setPixelColor(12, pixels->Color(R, G, B));
          pixels->setPixelColor(13, pixels->Color(R, G, B));
          pixels->setPixelColor(14, pixels->Color(R, G, B));
          pixels->setPixelColor(15, pixels->Color(R, G, B));
          pixels->setPixelColor(16, pixels->Color(R, G, B));
          pixels->setPixelColor(17, pixels->Color(R, G, B));
          pixels->setPixelColor(18, pixels->Color(R, G, B));
          pixels->setPixelColor(19, pixels->Color(R, G, B));
          pixels->setPixelColor(20, pixels->Color(R, G, B));
          pixels->show();
          break;

        case 3:
          pixels->clear();
          pixels->show();
          pixels->setPixelColor(0, pixels->Color(R, G, B));
          pixels->setPixelColor(1, pixels->Color(R, G, B));
          pixels->setPixelColor(2, pixels->Color(R, G, B));
          pixels->setPixelColor(3, pixels->Color(R, G, B));
          pixels->setPixelColor(4, pixels->Color(R, G, B));
          pixels->setPixelColor(5, pixels->Color(R, G, B));
          pixels->setPixelColor(9, pixels->Color(R, G, B));
          pixels->setPixelColor(10, pixels->Color(R, G, B));
          pixels->setPixelColor(11, pixels->Color(R, G, B));
          pixels->setPixelColor(12, pixels->Color(R, G, B));
          pixels->setPixelColor(13, pixels->Color(R, G, B));
          pixels->setPixelColor(14, pixels->Color(R, G, B));
          pixels->setPixelColor(21, pixels->Color(R, G, B));
          pixels->setPixelColor(22, pixels->Color(R, G, B));
          pixels->setPixelColor(23, pixels->Color(R, G, B));
          pixels->setPixelColor(18, pixels->Color(R, G, B));
          pixels->setPixelColor(19, pixels->Color(R, G, B));
          pixels->setPixelColor(20, pixels->Color(R, G, B));
          pixels->show();
          break;

        case 4:
          pixels->clear();
          pixels->show();
          pixels->setPixelColor(0, pixels->Color(R, G, B));
          pixels->setPixelColor(1, pixels->Color(R, G, B));
          pixels->setPixelColor(2, pixels->Color(R, G, B));
          pixels->setPixelColor(6, pixels->Color(R, G, B));
          pixels->setPixelColor(7, pixels->Color(R, G, B));
          pixels->setPixelColor(8, pixels->Color(R, G, B));
          pixels->setPixelColor(9, pixels->Color(R, G, B));
          pixels->setPixelColor(10, pixels->Color(R, G, B));
          pixels->setPixelColor(11, pixels->Color(R, G, B));
          pixels->setPixelColor(12, pixels->Color(R, G, B));
          pixels->setPixelColor(13, pixels->Color(R, G, B));
          pixels->setPixelColor(14, pixels->Color(R, G, B));
          pixels->setPixelColor(21, pixels->Color(R, G, B));
          pixels->setPixelColor(22, pixels->Color(R, G, B));
          pixels->setPixelColor(23, pixels->Color(R, G, B));
          pixels->show();

          break;

        case 5:
          pixels->clear();
          pixels->show();
          pixels->setPixelColor(6, pixels->Color(R, G, B));
          pixels->setPixelColor(7, pixels->Color(R, G, B));
          pixels->setPixelColor(8, pixels->Color(R, G, B));
          pixels->setPixelColor(3, pixels->Color(R, G, B));
          pixels->setPixelColor(4, pixels->Color(R, G, B));
          pixels->setPixelColor(5, pixels->Color(R, G, B));
          pixels->setPixelColor(9, pixels->Color(R, G, B));
          pixels->setPixelColor(10, pixels->Color(R, G, B));
          pixels->setPixelColor(11, pixels->Color(R, G, B));
          pixels->setPixelColor(12, pixels->Color(R, G, B));
          pixels->setPixelColor(13, pixels->Color(R, G, B));
          pixels->setPixelColor(14, pixels->Color(R, G, B));
          pixels->setPixelColor(21, pixels->Color(R, G, B));
          pixels->setPixelColor(22, pixels->Color(R, G, B));
          pixels->setPixelColor(23, pixels->Color(R, G, B));
          pixels->setPixelColor(18, pixels->Color(R, G, B));
          pixels->setPixelColor(19, pixels->Color(R, G, B));
          pixels->setPixelColor(20, pixels->Color(R, G, B));
          pixels->show();
          break;

        case 6:
          pixels->clear();
          pixels->show();
          pixels->setPixelColor(9, pixels->Color(R, G, B));
          pixels->setPixelColor(10, pixels->Color(R, G, B));
          pixels->setPixelColor(11, pixels->Color(R, G, B));
          pixels->setPixelColor(12, pixels->Color(R, G, B));
          pixels->setPixelColor(13, pixels->Color(R, G, B));
          pixels->setPixelColor(14, pixels->Color(R, G, B));
          pixels->setPixelColor(3, pixels->Color(R, G, B));
          pixels->setPixelColor(4, pixels->Color(R, G, B));
          pixels->setPixelColor(5, pixels->Color(R, G, B));
          pixels->setPixelColor(6, pixels->Color(R, G, B));
          pixels->setPixelColor(7, pixels->Color(R, G, B));
          pixels->setPixelColor(8, pixels->Color(R, G, B));
          pixels->setPixelColor(15, pixels->Color(R, G, B));
          pixels->setPixelColor(16, pixels->Color(R, G, B));
          pixels->setPixelColor(17, pixels->Color(R, G, B));
          pixels->setPixelColor(18, pixels->Color(R, G, B));
          pixels->setPixelColor(19, pixels->Color(R, G, B));
          pixels->setPixelColor(20, pixels->Color(R, G, B));
          pixels->setPixelColor(21, pixels->Color(R, G, B));
          pixels->setPixelColor(22, pixels->Color(R, G, B));
          pixels->setPixelColor(23, pixels->Color(R, G, B));
          pixels->show();
          break;

        case 7:
          pixels->clear();
          pixels->show();
          pixels->setPixelColor(0, pixels->Color(R, G, B));
          pixels->setPixelColor(1, pixels->Color(R, G, B));
          pixels->setPixelColor(2, pixels->Color(R, G, B));
          pixels->setPixelColor(3, pixels->Color(R, G, B));
          pixels->setPixelColor(4, pixels->Color(R, G, B));
          pixels->setPixelColor(5, pixels->Color(R, G, B));
          pixels->setPixelColor(21, pixels->Color(R, G, B));
          pixels->setPixelColor(22, pixels->Color(R, G, B));
          pixels->setPixelColor(23, pixels->Color(R, G, B));
          pixels->show();
          break;

        case 8:
          pixels->clear();
          pixels->show();
          pixels->setPixelColor(0, pixels->Color(R, G, B));
          pixels->setPixelColor(1, pixels->Color(R, G, B));
          pixels->setPixelColor(2, pixels->Color(R, G, B));
          pixels->setPixelColor(9, pixels->Color(R, G, B));
          pixels->setPixelColor(10, pixels->Color(R, G, B));
          pixels->setPixelColor(11, pixels->Color(R, G, B));
          pixels->setPixelColor(12, pixels->Color(R, G, B));
          pixels->setPixelColor(13, pixels->Color(R, G, B));
          pixels->setPixelColor(14, pixels->Color(R, G, B));
          pixels->setPixelColor(3, pixels->Color(R, G, B));
          pixels->setPixelColor(4, pixels->Color(R, G, B));
          pixels->setPixelColor(5, pixels->Color(R, G, B));
          pixels->setPixelColor(6, pixels->Color(R, G, B));
          pixels->setPixelColor(7, pixels->Color(R, G, B));
          pixels->setPixelColor(8, pixels->Color(R, G, B));
          pixels->setPixelColor(15, pixels->Color(R, G, B));
          pixels->setPixelColor(16, pixels->Color(R, G, B));
          pixels->setPixelColor(17, pixels->Color(R, G, B));
          pixels->setPixelColor(18, pixels->Color(R, G, B));
          pixels->setPixelColor(19, pixels->Color(R, G, B));
          pixels->setPixelColor(20, pixels->Color(R, G, B));
          pixels->setPixelColor(21, pixels->Color(R, G, B));
          pixels->setPixelColor(22, pixels->Color(R, G, B));
          pixels->setPixelColor(23, pixels->Color(R, G, B));
          pixels->show();
          break;

        case 9:
          pixels->clear();
          pixels->show();
          pixels->setPixelColor(0, pixels->Color(R, G, B));
          pixels->setPixelColor(1, pixels->Color(R, G, B));
          pixels->setPixelColor(2, pixels->Color(R, G, B));
          pixels->setPixelColor(9, pixels->Color(R, G, B));
          pixels->setPixelColor(10, pixels->Color(R, G, B));
          pixels->setPixelColor(11, pixels->Color(R, G, B));
          pixels->setPixelColor(12, pixels->Color(R, G, B));
          pixels->setPixelColor(13, pixels->Color(R, G, B));
          pixels->setPixelColor(14, pixels->Color(R, G, B));
          pixels->setPixelColor(3, pixels->Color(R, G, B));
          pixels->setPixelColor(4, pixels->Color(R, G, B));
          pixels->setPixelColor(5, pixels->Color(R, G, B));
          pixels->setPixelColor(6, pixels->Color(R, G, B));
          pixels->setPixelColor(7, pixels->Color(R, G, B));
          pixels->setPixelColor(8, pixels->Color(R, G, B));
          pixels->setPixelColor(18, pixels->Color(R, G, B));
          pixels->setPixelColor(19, pixels->Color(R, G, B));
          pixels->setPixelColor(20, pixels->Color(R, G, B));
          pixels->setPixelColor(21, pixels->Color(R, G, B));
          pixels->setPixelColor(22, pixels->Color(R, G, B));
          pixels->setPixelColor(23, pixels->Color(R, G, B));
          pixels->show();
          break;

      }
    }

    void dispOff()
    {
      pixels->clear();
      pixels->show();
    }

};

LEDDISP LED1(&Pixels1, brightness, RH, GH, BH);
LEDDISP LED2(&Pixels2, brightness, RH, GH, BH);
LEDDISP LED3(&Pixels3, brightness, RV, GV, BV);
LEDDISP LED4(&Pixels4, brightness, RV, GV, BV);
//LEDDISP LED2;
//LEDDISP LED3;
//LEDDISP LED4;


class LEDDISPLAY
{
    int digits;
    int num;
    int num1;
    int num2;
    int num3;
    int num4;
    int displaying = 1;
    int decimal = 0;
    LEDDISP *Digit1;
    LEDDISP *Digit2;
    LEDDISP *Digit3;
    LEDDISP *Digit4;


  public:
    LEDDISPLAY()
    {

    }

    void setDigits(LEDDISP *D1, LEDDISP *D2, LEDDISP *D3, LEDDISP *D4)
    {
      Digit1 = D1;
      Digit2 = D2;
      Digit3 = D3;
      Digit4 = D4;
    }

    void DisplayNum(double n)
    {
//      if (n < 100)
//      {
//        decimal = 2;
//        num = n * 100;
//      }
//      else if (n >= 100 && n < 1000)
//      {
//        decimal = 1;
//        num = n * 10;
//      }
//      else
//      {
//        decimal = 0;
//        num = n;
//      }
      num = n;
      //Serial.println(num);
      num1 = (num / 1U) % 10;
      num2 = (num / 10U) % 10;
      num3 = (num / 100U) % 10;
      num4 = (num / 1000U) % 10;
      Digit1->setNum(num1);
      Digit2->setNum(num2);
      Digit3->setNum(num3);
      Digit4->setNum(num4);
    }

    void updateDisplay()
    {

    }

    void displayOff()
    {
      Digit1->dispOff();
      Digit2->dispOff();
      Digit3->dispOff();
      Digit4->dispOff();
    }
};



LEDDISPLAY LEDDisplay1;
int count = 0;
int number = 0;


void setup() {
  // put your setup code here, to run once:


  Serial.begin(9600);

  LEDDisplay1.setDigits(&LED1, &LED2, &LED3, &LED4);

  pinMode(pinV, INPUT_PULLUP);
  pinMode(pinH, INPUT_PULLUP);
  LEDDisplay1.DisplayNum(score);


}


void loop() {
  // put your main code here, to run repeatedly:
//
//  LED1.setNum(9);
//  LED2.setNum(9);
//  LED3.setNum(9);
//  LED4.setNum(9);
//  delay(1000);
//  LED1.setNum(8);
//  LED2.setNum(8);
//  LED3.setNum(8);
//  LED4.setNum(8);
//  delay(1000);
//  LED1.setNum(7);
//  LED2.setNum(7);
//  LED3.setNum(7);
//  LED4.setNum(7);
//  delay(1000);
//  LED1.setNum(6);
//  LED2.setNum(6);
//  LED3.setNum(6);
//  LED4.setNum(6);
//  delay(1000);
//  LED1.setNum(5);
//  LED2.setNum(5);
//  LED3.setNum(5);
//  LED4.setNum(5);
//  delay(1000);
//  LED1.setNum(4);
//  LED2.setNum(4);
//  LED3.setNum(4);
//  LED4.setNum(4);
//  delay(1000);
//  LED1.setNum(3);
//  LED2.setNum(3);
//  LED3.setNum(3);
//  LED4.setNum(3);
//  delay(1000);
//  LED1.setNum(2);
//  LED2.setNum(2);
//  LED3.setNum(2);
//  LED4.setNum(2);
//  delay(1000);
//  LED1.setNum(1);
//  LED2.setNum(1);
//  LED3.setNum(1);
//  LED4.setNum(1);
//  delay(1000);
//  LED1.setNum(0);
//  LED2.setNum(0);
//  LED3.setNum(0);
//  LED4.setNum(0);
//  delay(1000);

//
//for(int i = 0; i < 9999; i++)
//{
//  LEDDisplay1.DisplayNum(i);
//  delay(100);
//}

//if(digitalRead(pinV) == 0)
//{
//  scoreV = scoreV + 1;
//  score = score + 100;
//  LEDDisplay1.DisplayNum(score);
//  delay(500);
//  if(digitalRead(pinV) == 0)
//  {
//    delay(1500);
//    if(digitalRead(pinV) == 0)
//    {
//      if(digitalRead(pinH) == 0)
//      {
//        score = 0;
//        scoreV = 0;
//        scoreH = 0;
//      }
//      else
//      {
//        score = score - 200;
//        scoreV = scoreV - 2;
//      }
//      LEDDisplay1.DisplayNum(score);
//      delay(1000);
//      
//    }
//  }
//  scoreString = sprintf(buffer1, "%02d#%02d", scoreV, scoreH); 
//  Serial.println(buffer1);
//}
if(digitalRead(pinV) == 0)
{
  
  delay(50);
  countV = 0;
  while(digitalRead(pinV) == 0)
  {
    delay(5);
    countV = countV + 1;
    if(countV >= 400)
    {
      if(digitalRead(pinH) == 0)
      {
        score = 0;
        scoreH = 0;
        scoreV = 0;
        printScore = true;
      }
      else
      {
        score = score - 100;
        scoreV = scoreV - 1;
        printScore = true;
      }
      break;
    }
  }

  if(countV <= 100)
  {
    score = score + 100;
    scoreV = scoreV + 1;
    quickPress = 0;
    count1 = true;
  }
  LEDDisplay1.DisplayNum(score);
  scoreString = sprintf(buffer1, "%02d#%02d", scoreV, scoreH); 
  if(printScore)
  {
    Serial.println(buffer1);
  }
  while(digitalRead(pinH) == 0 || digitalRead(pinV) == 0)
  {
    delay(10);
  }
  delay(50);
}

if(digitalRead(pinH) == 0)
{
  
  delay(50);
  countH = 0;
  while(digitalRead(pinH) == 0)
  {
    delay(5);
    countH = countH + 1;
    if(countH >= 400)
    {
      if(digitalRead(pinV) == 0)
      {
        score = 0;
        scoreH = 0;
        scoreV = 0;
        printScore = true;
      }
      else
      {
        score = score - 1;
        scoreH = scoreH - 1;
        printScore = true;
      }
      break;
    }
  }

  if(countH <= 100)
  {
    score++;
    scoreH = scoreH + 1;
    quickPress = 0;
    count1 = true;
  }
  LEDDisplay1.DisplayNum(score);
  scoreString = sprintf(buffer1, "%02d#%02d", scoreV, scoreH); 
  //Serial.println(buffer1);
  while(digitalRead(pinH) == 0 || digitalRead(pinV) == 0)
  {
    delay(10);
  }
  delay(50);
}
delay(5);
if(count1)
{
  quickPress++;
}

if(quickPress == 80)
{
  printScore = true;
  count1 = false;
  quickPress++;
}

if(printScore)
{
  Serial.println(buffer1);
  printScore = false;
}

}
