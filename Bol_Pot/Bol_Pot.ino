// Using a pot meter to adjust the blinking frequency of a led
// Board layout:
// Digital Pin 7 -> 220 Ohm resistor -> Led+ (long side) -> Led- -> GND 
// Analog Pin 5 -> Middle pin of pot meter
// GND -> Left pin of pot meter (as seen with the button pointing towards you)
// 5V -> Right pin of pot meter (as seen with the button pointing towards you)
int ledPin = 7;
int potPin = 5;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Here val is declared inside the scope ( defined by {, and }) of loop. 
  // So the value is forgotten the next time loop is executed. If you want something
  // to be remembered you have to put it outside of this scope (like the ledPin variable)
  int val = analogRead(potPin); // [0..1023] 
  digitalWrite(ledPin, HIGH);
  delay(val);               
  digitalWrite(ledPin, LOW);
  delay(val);               
}

// Exercises: see Bol_Pot_If
