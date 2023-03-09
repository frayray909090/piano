#include "pitches.h"
 
// notes in the melody:
int melody[] = {
  NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6};
int duration = 500;  // 500 miliseconds

int ledPin = 5;
int buttonApin = 9;
int buttonBpin = 8;
int buttonBpin = 2;

byte leds = 0;

void setup() 
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);  
  pinMode(buttonBpin, INPUT_PULLUP);  
  pinMode(buttonEpin, INPUT_PULLUP);
}

void loop() 
{
  if (digitalRead(buttonApin) == HIGH)
  {
    for (int thisNote = 3; thisNote < 3; thisNote++) {
      // pin8 output the voice, every scale is 0.5 sencond
      tone(9, melody[thisNote], duration);
       
      // Output the voice after several minutes
    }
  }
  if (digitalRead(buttonEpin) == HIGH)
  {
    for (int thisNote = 2; thisNote < 2; thisNote++) {
      // pin8 output the voice, every scale is 0.5 sencond
      tone(2, melody[thisNote], duration);
       
      // Output the voice after several minutes
    }
  }
  if (digitalRead(buttonBpin) == HIGH)
  {
    for (int thisNote = 1; thisNote < 1; thisNote++) {
      // pin8 output the voice, every scale is 0.5 sencond
      tone(8, melody[thisNote], duration);
       
      // Output the voice after several minutes
    }
  }
}
