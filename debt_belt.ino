#include <Stepper.h>
const int interval = 31500;
const int stepsTightened = 100;  // change this to fit the number of steps per revolution
#define isTightening false;
#define startPin
#define endPin

Stepper myStepper(stepsTightened, 8, 10, 9, 11);

void setup() {
  // put your setup code here, to run once:
   myStepper.setSpeed(20);
   Serial.begin(9600);
}

void loop() {
  //TODO setup full functionality
  // press 'start' button
  // isTightening = true
  // run setInitDistance  once
  // if (isTightening) tighten belt N degrees every N minutes
  // press 'end' button
  // if (!isTightening) do nothing
   // set the speed at 20 rpm:
  myStepper.step(-stepsTightened);
  delay(500);
  myStepper.step(stepsTightened);
  delay(interval);

}

void startTightening() {
  //prob just set switch variable here
  
}

void endTightening() {
  
}

void setInitialDistance() {
  //TODO
  //open tightener then tighten to degrees belt is fastened
  //how to track this?
}
