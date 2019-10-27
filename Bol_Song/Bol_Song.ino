// Learning about arrays and for loops so you can play a song
// Board layout:
// Digital Pin 5 -> 220 Ohm resistor ->  Speaker+ -> Speaker- -> GND

int pin = 5;

int e4 = 330;
int ds4 = 311;
int b3 = 247;
int d4 = 294;
int c4 = 262;
int a3 = 220;

// Create an array (list) of notes
int fur_elise[] = { e4, ds4, e4, ds4, e4, b3, d4, c4, a3 };

void setup() {  
  pinMode(pin, OUTPUT);
}

void loop() {
  for (int i = 0; i < 9; i++) {
    // Arrays start at zero. You can read it as
    // 'give me the position of the start of the list, then go X items forward'
    // so fur_elise[0] is the first not (e4) while fur_else[5] is the 6th note (b3).   
    tone(pin, fur_elise[i]);
    delay(200);
  
    noTone(pin);
    delay(200);    
  }  

  delay(2000);
}

// Exercises:
// - Can you compose a different song?
// - In most songs not every note has the same length, can you change the code so that different notes have different lengths?
// (Hint: you will need to create another array of the same length as your song to store the note duration information).
