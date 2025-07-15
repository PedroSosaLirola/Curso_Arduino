#define trece 13
#define dos 2
#define cuatro 4

void setup() {
Serial.begin(115200);
delay(1000);
  
pinMode(trece, INPUT);
pinMode(dos, OUTPUT);
pinMode(cuatro, OUTPUT);



}

void loop() {

  digitalWrite(cuatro, HIGH);
  digitalWrite(dos, LOW);
  
} 




