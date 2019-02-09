#include <Stepper.h>
const int interval = 31500;//wait 31.5 seconds to tighten
const int stepsTightened = 100;  // change this to fit the number of steps per revolution

Stepper myStepper(stepsTightened, 8, 10, 9, 11);

void setup() {
  // put your setup code here, to run once:
   myStepper.setSpeed(20);
   Serial.begin(9600);
}

void loop() {
  //TODO setup full functionality
  // press 'start' button
  //tighten belt
  myStepper.step(-stepsTightened);
  delay(500);
  //release belt
  myStepper.step(stepsTightened);
  //wait interval then repeat
  delay(interval);

}
