#define LED_PIN 7
#define TIME_DELAY 100


void setup() {
  pinMode(LED_PIN, OUTPUT);
  
  
}

void loop() {
   digitalWrite(LED_PIN, HIGH);
   delay(TIME_DELAY);
   digitalWrite(LED_PIN, LOW);
   delay(TIME_DELAY);
 
 
}
