#include <Control_Surface.h> // Include the Control Surface library 
#include <MIDIUSB.h> 
#include <MIDIUSB_Defs.h> 
 
USBMIDI_Interface midi; 
 
NoteButton button1 { 
  1, 
  {36, CHANNEL_1} // C4 (MIDI note number 60) on MIDI channel 1 
}; 
 
NoteButton button2 { 
  2, 
  {42, CHANNEL_1} // D4 (MIDI note number 62) on MIDI channel 1 
}; 
 
NoteButton button3 { 
  3, 
  {43, CHANNEL_1} // E4 (MIDI note number 64) on MIDI channel 1 
}; 
 
NoteButton button4 { 
  12, 
  {37, CHANNEL_1} // F4 (MIDI note number 65) on MIDI channel 1 
}; 

NoteButton button5 { 
  13, 
  {38, CHANNEL_1} // F4 (MIDI note number 65) on MIDI channel 1 
}; 
 
void setup() { 
  Control_Surface.begin(); 
} 
 
void loop() { 
  Control_Surface.loop(); 
  delay(10); 
}