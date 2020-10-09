int buttonPin = 4;
int ledPin = 6;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  int val = digitalRead(buttonPin);
  digitalWrite(ledPin, val);
  Serial.print(val);
  delay(1000);
}
