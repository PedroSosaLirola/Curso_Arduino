#define velocidad 14 // patilla 1 enable
#define dirpin_1 12
#define dirpin_2 13
#define ledverde 15
#define ledrojo 0
#define ledazul 4

#define derecha 1
#define izquierda 2
#define paro 0


// definicion de una funcion 
void cambioEstado(int estadoNuevo){
    switch(estadoNuevo){

      case paro:
          analogWrite(velocidad, 0);
          delay(3000);
  
      case derecha:
        analogWrite(velocidad, 110);
        digitalWrite(dirpin_1, 1),
        digitalWrite(dirpin_2, 0),
        delay(2000);

      case izquierda:

        analogWrite(velocidad, 110);
        digitalWrite(dirpin_1, 0),
        digitalWrite(dirpin_2, 1),
        delay(2000);
    }

}

void setup(){
  Serial.begin(115200);

  pinMode(velocidad, OUTPUT);
  pinMode(dirpin_1, OUTPUT);
  pinMode(dirpin_2, OUTPUT);

}
void loop() {

  // digitalWrite(velocidad, HIGH);
  analogWrite(velocidad, 110);
  digitalWrite(dirpin_1, 1),
  digitalWrite(dirpin_2, 0),
  delay(2000);

  analogWrite(velocidad, 0); // apagamos motor
  delay(3000);
  
  // digitalWrite(velocidad, HIGH);
  analogWrite(velocidad, 110);
  digitalWrite(dirpin_1, 0),
  digitalWrite(dirpin_2, 1),
  delay(2000);
  
  analogWrite(velocidad, 0); // apagamos motor
  delay(3000);
}
