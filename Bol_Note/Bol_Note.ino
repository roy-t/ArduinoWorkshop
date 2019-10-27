// The starting point for generating musical notes
// Board layout:
// Digital Pin 5 -> 220 Ohm resistor ->  Speaker+ -> Speaker- -> GND

int pin = 5;

// The 4th A on a full-sized piano has a frequency of 440Hz.
// See the file Piano_Frequencies.png for more information
int a4 = 440;

void setup() {  
  pinMode(pin, OUTPUT);
}

void loop() {
  tone(pin, a4);
  delay(200);  
  noTone(pin);    
  delay(400);
}

// Exercises
// - Can you play a few different notes?
// - Can you compose a recognizable part of a song?
// - Can you combine the led from the previous exercise to create light effects for each note that is played?
