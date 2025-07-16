#define doce_azul 12
#define trece_verde 13
#define quince_rojo 15

  int azul = 0;
  int rojo = 0;
  int verde = 0;


void setup() {

  Serial.begin(115200);
  delay(1000);

  pinMode(doce_azul, OUTPUT);
  pinMode(trece_verde, OUTPUT);
  pinMode(quince_rojo, OUTPUT);
  
  for(;;){ 
      rojo = random(0,255);
      verde = random(0,255);
      azul = random(0,255);
            
      analogWrite(doce_azul, azul);
      analogWrite(trece_verde, verde);
      analogWrite(quince_rojo, rojo);

      Serial.println(azul);

      delay(1000);
  }
}

void loop() {
}
