/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-button-library
 *
 * This example reads the state if a button with debounce and print it to Serial Monitor.
 */

#include <Button.h>

Button button(7);  // create Button object that attach to pin 7;

void setup() {
  Serial.begin(9600);
  button.setDebounceTime(100); // set debounce time to 100 milliseconds
}

void loop() {
  button.loop(); // MUST call the loop() function first

  int btnState = button.getState();
  Serial.println(btnState);
}