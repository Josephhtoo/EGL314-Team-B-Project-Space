#include <Control_Surface.h> // Include the Control Surface library 
#include <MIDIUSB.h> 
#include <MIDIUSB_Defs.h> 
 
USBMIDI_Interface midi; 
 
NoteButton button1 { 
  1, 
  {64, CHANNEL_1} // E4 (MIDI note number 64) on MIDI channel 1 
}; 
 
NoteButton button2 { 
  2, 
  {66, CHANNEL_1} // F#4 (MIDI note number 66) on MIDI channel 1 
}; 
 
NoteButton button3 { 
  3, 
  {67, CHANNEL_1} // G4 (MIDI note number 67) on MIDI channel 1 
}; 
 
NoteButton button4 { 
  4, 
  {69, CHANNEL_1} // A4 (MIDI note number 69) on MIDI channel 1 
}; 
NoteButton button5 { 
  5, 
  {71, CHANNEL_1} // B4 (MIDI note number 71) on MIDI channel 1 
}; 
NoteButton button6 { 
  6, 
  {74, CHANNEL_1} // D5 (MIDI note number 74) on MIDI channel 1 
}; 
NoteButton button7 { 
  7, 
  {76, CHANNEL_1} // E5 (MIDI note number 76) on MIDI channel 1 
}; 
NoteButton button8 { 
  8, 
  {79, CHANNEL_1} // G5 (MIDI note number 79) on MIDI channel 1 
}; 
NoteButton button9 { 
  9, 
  {81, CHANNEL_1} // A5 (MIDI note number 81) on MIDI channel 1 
}; 
NoteButton button10 { 
  10, 
  {83, CHANNEL_1} // B5 (MIDI note number 83) on MIDI channel 1 
}; 
NoteButton button11 { 
  11, 
  {86, CHANNEL_1} // D6 (MIDI note number 86) on MIDI channel 1 
}; 
NoteButton button12 { 
  12, 
  {88, CHANNEL_1} // E6 (MIDI note number 88) on MIDI channel 1 
}; 


void setup() { 
  Control_Surface.begin(); 
} 
 
void loop() { 
  Control_Surface.loop(); 
  delay(10); 
}
