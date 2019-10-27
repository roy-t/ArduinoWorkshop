// An example of what you can accompish after you've finished Bol_Pot_If
// Board layout:
// Digital Pin 7 -> 220 Ohm resistor -> Led+ (long side) -> Led- -> GND 
// Digital Pin 5 -> 220 Ohm resistor ->  Speaker+ -> Speaker- -> GND
// Analog Pin 5 -> Middle pin of pot meter
// GND -> Left pin of pot meter (as seen with the button pointing towards you)
// 5V -> Right pin of pot meter (as seen with the button pointing towards you)

int speakerPin = 5;
int ledPin = 7;
int potPin = 5;

int e4 = 330;
int ds4 = 311;
int b3 = 247;
int d4 = 294;
int c4 = 262;
int a3 = 220;

int fur_elise[] = { e4, ds4, e4, ds4, e4, b3, d4, c4, a3 };
int lastNoteIndex = -1;
int ledOn = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Read from the potentiometer, we get a number between 0 and 1023 (inclusive)
  int val = analogRead(potPin); // [0..1023] 

  // We have 9 notes, so we divide 1024 in 9 to find the size of a 1/9th part on the potentiometer
  // We divide what we read by this part to see in which of the nine parts the potentiometer is
  int index = val / (1024 / 9);

  // Because 9 divided by 1024 is not a whole number index could can be 0 to 9, inclusive.
  if (index < 9)
  {
    // Select the note and play it
    int frequency = fur_elise[index];
    tone(speakerPin, frequency);

    // If the note has changed since last time we checked (someone used the potentiometer
    if (index != lastNoteIndex) {
      // If the led was previously off, turn it on, and vice-versa and remember if the led is on or off
      if (ledOn == 0) {
        ledOn = 1;
        digitalWrite(ledPin, HIGH);
      } else {
        ledOn = 0;
        digitalWrite(ledPin, LOW);
      }
    }

    // Remembe what note we played so we can check next time if it was changed
    lastNoteIndex = index;
  } else {
    // Turn everything off
    noTone(speakerPin);
    digitalWrite(ledPin, LOW);
  }  
}
