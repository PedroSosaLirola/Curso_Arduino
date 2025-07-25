#define pin 15


void setup(){

}

void loop() {
  // put your main code here, to run repeatedly:
  pinMode(pin, OUTPUT);
  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW);
  delay(500);

}
