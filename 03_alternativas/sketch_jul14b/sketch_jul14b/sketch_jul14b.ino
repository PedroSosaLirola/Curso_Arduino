int calificacion = 10;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(500);

if(calificacion < 5){
  Serial.println("El examen esta suspendido");
}
else{
    if(calificacion < 7){
        Serial.println("El examen esta aprobado");

    }
    else{
        if(calificacion < 9){
            Serial.println("El examen es notable");
        }
        else{
          Serial.println("El examen es sobresaliente");
        }
    }
}
}

void loop() {
  // put your main code here, to run repeatedly:

}
