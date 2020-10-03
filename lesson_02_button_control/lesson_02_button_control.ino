void setup() {
  pinMode(4,INPUT);
  digitalWrite(4,HIGH);
  digitalWrite(4,LOW);
  

}

void loop() {
  int pinState = digitalRead(4);
  Serial.readln(pinState);
  

}
