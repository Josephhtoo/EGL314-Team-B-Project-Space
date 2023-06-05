#include <Control_Surface.h> // Include the Control Surface library 
#include <MIDIUSB.h> 
#include <MIDIUSB_Defs.h> 
 
USBMIDI_Interface midi; 
 
NoteButton button1 { 
  5, 
  {60, CHANNEL_1} // C4 (MIDI note number 60) on MIDI channel 1 
}; 
 
NoteButton button2 { 
  6, 
  {62, CHANNEL_1} // D4 (MIDI note number 62) on MIDI channel 1 
}; 
 
NoteButton button3 { 
  7, 
  {64, CHANNEL_1} // E4 (MIDI note number 64) on MIDI channel 1 
}; 
 
NoteButton button4 { 
  8, 
  {65, CHANNEL_1} // F4 (MIDI note number 65) on MIDI channel 1 
}; 
NoteButton button5 { 
  9, 
  {67, CHANNEL_1} // F4 (MIDI note number 65) on MIDI channel 1 
}; 
NoteButton button6 { 
  10, 
  {69, CHANNEL_1} // F4 (MIDI note number 65) on MIDI channel 1 
}; 
NoteButton button7 { 
  11, 
  {71, CHANNEL_1} // F4 (MIDI note number 65) on MIDI channel 1 
}; 
void setup() { 
  Control_Surface.begin(); 
} 
 
void loop() { 
  Control_Surface.loop(); 
  delay(10); 
}
