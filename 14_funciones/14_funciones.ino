void setup() {
      Serial.begin(115200);
      delay(500);

    

      Serial.print("Longitud: ");
      Serial.println(longitud);
}
void loop() {

}

int longitudCadena(char cadena[]){
    int i = 0;
    while (cadena[i] != '\0'){
    i++;
  }
  return i;

char* invertirCadena(char* cadena){
    int longitud = longitudCadena(cadena);



























































}

}

