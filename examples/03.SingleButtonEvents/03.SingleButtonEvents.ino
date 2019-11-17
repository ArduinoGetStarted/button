/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-button-library
 *
 * This example detects the pressed and released events of a button without debounce.
 */

#include <Button.h>

Button button(7);  // create Button object that attach to pin 7;

void setup() {
  Serial.begin(9600);
}

void loop() {
  button.loop(); // MUST call the loop() function first

  if(button.isPressed())
    Serial.println("The button is pressed");

  if(button.isReleased())
    Serial.println("The button is released");
}