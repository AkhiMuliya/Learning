int sensorPin=A0;
int ledPin=8;
int buzzPin=12 ;
int sensorState;
void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(ledPin,OUTPUT);
  pinMode(buzzPin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  sensorState=analogRead(sensorPin);
  
  if(sensorState>300){
    digitalWrite(ledPin,HIGH);
    digitalWrite(buzzPin,HIGH);
    Serial.println("Flame detected");
  }
  else{
    digitalWrite(ledPin,LOW);
    digitalWrite(buzzPin,LOW);
    Serial.println("No flame detected");
  }
 
}
