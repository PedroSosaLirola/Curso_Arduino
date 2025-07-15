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
  digitalWrite(2,HIGH);
  delay(1000);

  int nota = 5;
  String calif = "";

  switch(nota){
    case 1:
    case 2:
    case 3:
    case 4:
    calif = "Suspendido";
    break;
    case 5 ... 6:
    calif = "Aprobado";
    break;
    default:
    calif = "error";
    break;
    

  }

Serial.println("El dia es " + calif);


}

void loop() {
  // put your main code here, to run repeatedly:

}
