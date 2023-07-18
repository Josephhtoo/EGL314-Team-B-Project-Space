#include <Control_Surface.h> // Include the Control Surface library 
#include <MIDIUSB.h> 
#include <MIDIUSB_Defs.h> 
 
USBMIDI_Interface midi; 
 
NoteButton button1 { 
  1, 
  {48, CHANNEL_1} // C3 (MIDI note number 48) on MIDI channel 1 
}; 
 
NoteButton button2 { 
  2, 
  {50, CHANNEL_1} // D3 (MIDI note number 50) on MIDI channel 1 
}; 
 
NoteButton button3 { 
  3, 
  {52, CHANNEL_1} // E3 (MIDI note number 52) on MIDI channel 1 
}; 
 
NoteButton button4 { 
  4, 
  {54, CHANNEL_1} // F#3 (MIDI note number 54) on MIDI channel 1 
}; 
NoteButton button5 { 
  5, 
  {55, CHANNEL_1} // G3 (MIDI note number 55) on MIDI channel 1 
}; 
NoteButton button6 { 
  6, 
  {57, CHANNEL_1} // A3 (MIDI note number 57) on MIDI channel 1 
}; 
NoteButton button7 { 
  7, 
  {59, CHANNEL_1} // B3 (MIDI note number 59) on MIDI channel 1 
}; 
NoteButton button8 { 
  8, 
  {62, CHANNEL_1} // D4 (MIDI note number 62) on MIDI channel 1 
}; 
NoteButton button9 { 
  9, 
  {64, CHANNEL_1} // E4 (MIDI note number 64) on MIDI channel 1 
}; 

void setup() { 
  Control_Surface.begin(); 
} 
 
void loop() { 
  Control_Surface.loop(); 
  delay(10); 
}
