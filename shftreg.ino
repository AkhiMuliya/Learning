int latchPin=5;
int clockPin=6;
int dataPin=4;

byte leds=0;
void setup() {
 pinMode(latchPin, OUTPUT);
 pinMode(clockPin, OUTPUT);
 pinMode( dataPin, OUTPUT);

}

void loop() {
  leds=0;
  updateShiftRegister();
  delay(500);
  for(int i=0;i<8;i++){
    bitSet(i,leds);
    updateShiftRegister();
    delay(500);
    
    
  }
}
  void updateShiftRegister()
  {
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, LSBFIRST, leds);
    digitalWrite(latchPin, HIGH);
  }
  // put your main code here, to run repeatedly:
