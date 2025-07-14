# define ROJO 12
# define VERDE 13
# define AZUL 14


void setup() {

Serial.begin(115200);
pinMode(ROJO,OUTPUT);
pinMode(VERDE,OUTPUT);
pinMode(AZUL,OUTPUT);

}

void loop() {

// Rojo encendido
Serial.print("Rojo encendido\n");
digitalWrite(ROJO,HIGH);
digitalWrite(VERDE,LOW);
digitalWrite(AZUL,LOW);
delay(1000);
// Verde encendido
Serial.println("Verde encendido");
digitalWrite(VERDE,HIGH);
digitalWrite(ROJO,LOW);
digitalWrite(AZUL,LOW);
delay(1000);
// Azul encendido
Serial.println("Azul encendido");
digitalWrite(AZUL,HIGH);
digitalWrite(ROJO,LOW);
digitalWrite(VERDE,LOW);
delay(1000);

}
