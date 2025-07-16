#define LED_ROJO 15
#define LED_VERDE 12

void setup() {

pinMode(LED_ROJO, OUTPUT);
pinMode(LED_VERDE, OUTPUT);

}

void loop() {
  for(int i = 0; i <= 255; i++ ){
      analogWrite(LED_ROJO, i);
      analogWrite(LED_VERDE, 255 - i);
      delay(5);
  }
  delay(500);
  for(int i = 0; i <= 255; i++ ){
      analogWrite(LED_ROJO, 255 - i);
      analogWrite(LED_VERDE, i);
      delay(5);
  }
  delay(500);
}
