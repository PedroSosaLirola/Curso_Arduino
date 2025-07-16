
void setup(){

Serial.begin(115200);
delay(5000);

// bucles WHILE
int limite = 10;
int contador = 0;
pinMode(15,OUTPUT);

while(contador < limite){
  Serial.print("While");
  Serial.println(contador);
  digital.Write(15, HIGH);
  contador ++;
}


}



void loop() {} 




