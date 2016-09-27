#include "pitches.h"

// notes in the melody:
int melody1[] = {NOTE_D5,NOTE_D5,NOTE_A5,0,NOTE_D5,NOTE_D5,NOTE_A5,0,NOTE_D5,NOTE_D5,NOTE_A5};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {15,15,15,8,15,15,15,8,15,15,15};

void setup() {
   // iterate over the notes of the melody:
   for (int thisNote = 0; thisNote < 11; thisNote++) {

     // to calculate the note duration, take one second 
     // divided by the note type.
     //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
     int noteDuration = 1000/noteDurations[thisNote];
     tone(A0, melody1[thisNote],noteDuration);

     // to distinguish the notes, set a minimum time between them.
     // the note's duration + 30% seems to work well:
     int pauseBetweenNotes = noteDuration * 1.1;
     delay(pauseBetweenNotes);
     // stop the tone playing:
     noTone(A0);
   }
}

void loop() {
   // no need to repeat the melody.
      // iterate over the notes of the melody:
   /*for (int thisNote = 0; thisNote < 12; thisNote++) {

     // to calculate the note duration, take one second 
     // divided by the note type.
     //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
     int noteDuration = 1000/noteDurations[thisNote];
     tone(8, melody[thisNote],noteDuration);

     // to distinguish the notes, set a minimum time between them.
     // the note's duration + 30% seems to work well:
     int pauseBetweenNotes = noteDuration * 1.25;
     delay(pauseBetweenNotes);
     // stop the tone playing:
     noTone(8);
   }*/
}
