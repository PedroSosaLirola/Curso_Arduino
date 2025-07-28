#define velocidad 14 // patilla 1 enable
#define dirpin_1 12
#define dirpin_2 13
#define ledverde 15
#define ledrojo 0
#define ledazul 4
#define paro 0
#define derecha 1
#define izquierda 2
#define poten 5
// FIN ZONA DEFINE


// INICIO ZONA FUNCIONES
// definir funcion leer potenciometro
int leerPot(){
  int poten = 0
  int veloc = 0

  int veloc = map(poten,0,4095,0,255);


}
// definicion de una funcion 
void cambioEstado(int estadoNuevo){
    switch(estadoNuevo){
      case paro:
          Serial.println("Motor Parado");
          analogWrite(velocidad, 0);
          delay(5000);
          break;

      case derecha:
        
        Serial.println("Motor a Derecha");
        analogWrite(velocidad, veloc);
        digitalWrite(dirpin_1, 1),
        digitalWrite(dirpin_2, 0),
        delay(2000);
        break;

      case izquierda:
      
        Serial.println("Motor a Izquierda");
        analogWrite(velocidad, veloc);
        digitalWrite(dirpin_1, 0),
        digitalWrite(dirpin_2, 1),
        delay(2000);
        break;
    }

}
// FIN ZONA FUNCIONES 


void setup(){
  Serial.begin(115200);

  pinMode(velocidad, OUTPUT);
  pinMode(dirpin_1, OUTPUT);
  pinMode(dirpin_2, OUTPUT);
  pinMode(poten, INPUT);
  
}
// FIN ZONA SETUP

// INICIO ZONA LOOP
void loop() {

    cambioEstado(paro);

    cambioEstado(izquierda);
     
    cambioEstado(paro);
      
    cambioEstado(derecha);
     
}
