int led = 6;
int val = 0;
void setup() {
  pinMode(led,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  val = analogRead(0);
  val = map(val, 0, 300, 0, 255);
  val = constrain(val, 0, 255);
  analogWrite(6,val);
  Serial.println(val);
  
}
