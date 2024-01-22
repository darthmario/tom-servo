#include <Servo.h>
#include "Arduino.h"
#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"
#include <AceButton.h>
using namespace ace_button;
#include <arduino-timer.h>
#include "audiosync.h"

// Constants
const uint8_t BUTTON_PIN = 7;

SoftwareSerial mySoftwareSerial(10, 11); // RX, TX
DFRobotDFPlayerMini myDFPlayer;
AceButton button(BUTTON_PIN);
void playQuote(byte clip);
void handleEvent(AceButton*, uint8_t, uint8_t);
Timer<71> timer;
Servo myServo;

// Variables will change:
byte fileCount;
byte openDeg = 100;
byte closedDeg = 0;
byte randNumber;
int animationCol1;
int animationCol2;

void setup()
{
  mySoftwareSerial.begin(9600);
  Serial.begin(115200);

  if (!myDFPlayer.begin(mySoftwareSerial)) {  //Use softwareSerial to communicate with mp3.
    Serial.println(F("Unable to begin:"));
    Serial.println(F("1.Please recheck the connection!"));
    Serial.println(F("2.Please insert the SD card!"));
    while (true);
  }
  Serial.println(F("DFPlayer Mini online."));
  fileCount =  myDFPlayer.readFileCounts();
  myDFPlayer.volume(30);  //Set volume value. From 0 to 30
  randomSeed(analogRead(A0));
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  button.setEventHandler(handleEvent);
  // setup servos
  myServo.attach(4);
  myServo.write(closedDeg);
}

void loop() {
  button.check();
  timer.tick();
}

void handleEvent(AceButton* /*button*/, uint8_t eventType, uint8_t /*buttonState*/) {
  // get a random number to play

  switch (eventType) {
    case AceButton::kEventPressed:
      randNumber = random(21);
      // cancel all servo timers
      timer.cancel();
      playQuote(randNumber);
      break;
  }
}

// play audio and sync servos
void playQuote(byte clip) {
  //grab the array related to the item on display
  for (int i = 0; i < rows; i++) {
    animationCol1 = pgm_read_word_near(animations[clip][i]+0);
    animationCol2 = pgm_read_word_near(animations[clip][i]+1);   
    if(animationCol1 != 0){
      timer.in(animationCol1, moveServo, animationCol2);
    }
  }
  myDFPlayer.play(clip+1);  //Play the selected mp3
}

bool moveServo(int argument) {
  if (argument == 0) {
    myServo.write(openDeg);
  } else {
    myServo.write(closedDeg);
  }
  return false; // to repeat the action - false to stop
}
