#define PHOTO_PIN A1
#define LED_PIN 9
#define DAY_LIGHT 10
void setup() {
Serial.begin(9600);
pinMode(LED_PIN,OUTPUT);

}
int photo_singal;

void loop() {
photo_signal=analogRead(PHOTO_PIN);
Serial.print();
Serial.println(Photo_signal);
delay(500)

}
