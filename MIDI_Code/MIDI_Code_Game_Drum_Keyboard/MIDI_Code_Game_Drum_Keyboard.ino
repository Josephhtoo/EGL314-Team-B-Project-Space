#include <Control_Surface.h> // Include the Control Surface library  
#include <MIDIUSB.h>  
#include <MIDIUSB_Defs.h>  
  
USBMIDI_Interface midi;  
  
NoteButton button1 {  
  1,  
  {36, CHANNEL_1} // C2 (MIDI note number 36) on MIDI channel 1  
};  
  
NoteButton button2 {  
  2,  
  {42, CHANNEL_1} // F#2 (MIDI note number 42) on MIDI channel 1  
};  
  
NoteButton button3 {  
  3,  
  {43, CHANNEL_1} // G2 (MIDI note number 43) on MIDI channel 1  
};  
  
NoteButton button4 {  
  12,  
  {37, CHANNEL_1} // C#2 (MIDI note number 37) on MIDI channel 1  
};  
 
NoteButton button5 {  
  13,  
  {38, CHANNEL_1} // D2 (MIDI note number 38) on MIDI channel 1  
};  
  
void setup() {  
  Control_Surface.begin();  
}  
  
void loop() {  
  Control_Surface.loop();  
  delay(10);  
}