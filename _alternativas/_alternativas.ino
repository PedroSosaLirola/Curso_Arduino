int edad = 12;

void setup() {
  

Serial.begin(115200);
delay(500);

}

void loop() {
  // put your main code here, to run repeatedly:
if(edad >= 18){
  Serial.println("la persona es mayor de edad ");
}
else{
  Serial.println("La persona es menor de edad");
}
}
