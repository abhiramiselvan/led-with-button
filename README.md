
# LED Control with Button using Arduino

### Introduction to LED Control with Button using Arduino:

Controlling an LED with a button is a fundamental project in the world of Arduino, offering a hands-on experience for beginners in electronics and programming. This project involves interfacing a physical button with an Arduino microcontroller to control the state of an LED. The button serves as an input device, and the LED as an output device, creating a simple but effective interaction.

![t725](https://github.com/abhiramiselvan/led-with-button/assets/144225835/748228ce-a536-4408-95c8-d45bee9ae4c3)

#### Step: 1 - Components
- LED - 1
- Resistor - 220 ohms - 1
- Button - 1
- Breadboard - 1
- Arduino uno + connecting cable - 1 and Ardunio software
- Jumper wires - As we require

![IMG_20231116_103348](https://github.com/abhiramiselvan/led-with-button/assets/144225835/8326dd38-4dda-4e90-a501-f1456ea5a073)


#### Step: 2 - Interfacing the LED with Arduino
- Connect the button and a pull-down resistor to a digital pin on the Arduino.
- Connect the LED and a current-limiting resistor to another digital pin on the Arduino.


#### Arduino programming for LED blinking:

The Arduino code constantly monitors the state of the button. When the button is pressed, it changes the state of the LED. This simple interaction forms the basis for more complex projects.





## Deployment

```bash
int buttonPin = 11;


void setup (){
  pinMode (ledPin, OUTPUT);
  pinMode (buttonPin, INPUT);
 
}

void loop(){
  if (digitalRead (buttonPin) == HIGH) {
   digitalWrite(ledPin, HIGH);
  } else {
  digitalWrite(ledPin, LOW);
  }
   
}

```

#### Outcome:
Pressing the button illuminates the LED, demonstrating a basic input-output relationship in Arduino programming. This project provides a foundation for expanding into more complex circuits and programming logic.

