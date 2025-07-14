int dia = 3;
String nombreDia = "";



void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  switch (dia){
    case 1: nombreDia = "Lunes ";
    break;
    case 2: nombreDia = "Martes ";
    break;
    case 3: nombreDia = "Miercoles ";
    break;
    case 4: nombreDia = "Jueves ";
    break;
    
  }
  Serial.println("El dia es " + nombreDia);


}

void loop() {
  // put your main code here, to run repeatedly:

}
