  int numeros[5];
  int otro[] = {1,2,3,4,5};
// creamos un array de 5 numeros

void setup(){

  Serial.begin(115200);
  delay(5000);
  
  for(int i = 0;i<5; i++){

    numeros[i] = otro[i];
  }

  for(int i=0;i<5; i++){

    Serial.print("numeros: ");
    Serial.println(numeros[i]);
  }
}

void loop(){

}
