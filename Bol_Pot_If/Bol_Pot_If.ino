// Final exercise, combines all hardware used in the workshop
// Board layout:
// Digital Pin 7 -> 220 Ohm resistor -> Led+ (long side) -> Led- -> GND 
// Digital Pin 5 -> 220 Ohm resistor ->  Speaker+ -> Speaker- -> GND
// Analog Pin 5 -> Middle pin of pot meter
// GND -> Left pin of pot meter (as seen with the button pointing towards you)
// 5V -> Right pin of pot meter (as seen with the button pointing towards you)

int speakerPin = 5;
int ledPin = 7;
int potPin = 5;

int a4 = 440;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int val = analogRead(potPin); // [0..1023] 
   
  if ( val > 512) {
    noTone(speakerPin);
    digitalWrite(ledPin, HIGH);      
  } else {
    digitalWrite(ledPin, LOW);  
    tone(speakerPin, a4);
  }   

  delay(100);
}

// Exercises: 
// - Can you make it possible to only have a short range on the potentiometer where the speaker is on, 
//   and a longer range where the led is on?
// - Can you make it possible to also have a range on the potentiometer that turns everything off?

// - Go wild, here's some inspiration:
//    - Add a song and more lights and turn on different lights based on the frequency of the note
//    - Speed up/slow down the song using the potentiometer
//    - Create a DJ station
//      - Create a song that is played by the speaker
//      - Use the potentiometer to select the current note to be played
//      - Create accompanying light effects for the led(s)
