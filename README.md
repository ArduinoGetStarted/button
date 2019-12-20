## ezButton Library for Arduino
This library is designed to make it easy to use push button, momentary switches, toggle switch, magnetic contact switch (door sensor)..​. It is easy to use for not only beginners but also experienced users.

__ezButton__ stands for __Easy Button__

Features
----------------------------
* Uses the internal pull-up resistor to avoid the floating value
* Supports debounce to eliminate the chattering phenomenon
* Supports the pressed and released events
* Supports the counting (for FALLING, RISING and BOTH)
* Easy to use with multiple buttons
* All functions are non-blocking 

Available Examples
----------------------------
* 01.SingleButton
* 02.SingleButtonEvents
* 03.SingleButtonDebounce
* 04.SingleButtonAll
* 05.MultipleButtonAll
* 06.ButtonCount

Available Functions
----------------------------
* setDebounceTime()
* getState()
* getStateRaw()
* isPressed()
* isReleased()
* setCountMode()
* getCount()
* resetCount()
* loop()

References
----------------------------
* [ezButton Library Reference](https://arduinogetstarted.com/tutorials/arduino-button-library)
