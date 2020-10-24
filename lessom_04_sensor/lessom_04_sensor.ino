#define LINE_PIN A2
void setup() {
 serial.begin(9600);
}

void loop() {
  int dara = analogRead(LINE_PIN);
  if (data > 50){
      serial.println("White ");
    } else {
      serial.println(data);
      
    }
serial.begin(9600);
delay(100)

}
