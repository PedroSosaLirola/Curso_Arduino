#define port2_in 2
#define port4_in 4
#define port15_in 15
#define port12_out 12
#define port13_out 13
#define port14_out 14

int valorpot2 = 0;
int valorpot4 = 0;
int valorpot15 = 0;

int valorled12 = 0;
int valorled13 = 0;
int valorled14 = 0;



void setup() {

    Serial.begin(115200);
    delay(1000);

    pinMode(port2_in, INPUT);
    pinMode(port4_in, INPUT);
    pinMode(port15_in, INPUT);
    pinMode(port12_out, OUTPUT);
    pinMode(port13_out, OUTPUT);
    pinMode(port14_out, OUTPUT);
}

void loop() {
  
    valorpot2 = analogRead(port2_in);
    valorpot4 = analogRead(port4_in);
    valorpot15 = analogRead(port15_in);

    valorled12 = map(valorpot2, 0, 4095, 0, 255);
    valorled13 = map(valorpot4, 0, 4095, 0, 255);
    valorled14 = map(valorpot15, 0, 4095, 0, 255);

    analogWrite(port12_out, valorled12);
    analogWrite(port13_out, valorled13);
    analogWrite(port14_out, valorled14);

    
    Serial.print("Rojo: ");
    Serial.print(valorled12);
    Serial.print("Azul: ");
    Serial.print(valorled13);
    Serial.print("Verde: ");
    Serial.print(valorled14);
    Serial.print(",,");
    delay(500);
    
}
