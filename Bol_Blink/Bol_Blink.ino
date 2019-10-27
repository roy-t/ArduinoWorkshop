// A simple blinking lights application to start out with and explain the first few concepts of programming
// Board layout:
// Digital Pin 7 -> 220 Ohm resistor -> Led+ (long side) -> Led- -> GND 
int pin = 7;

void setup() {  
  pinMode(pin, OUTPUT);
}

void loop() {
  digitalWrite(pin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3000);               // wait for three seconds
  digitalWrite(pin, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for one second
}

// Exercises:
// - Can you blink S.O.S.?   (· · · — — — · · ·) https://simple.wikipedia.org/wiki/SOS
// - Can you connect two leds and have them both blink?
// - Can you connect two leds and have them both blink different patterns?
