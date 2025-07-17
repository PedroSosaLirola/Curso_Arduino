#define port13_out_zum 13
#define port4_in_pot 4

int valorpot = 0;
int valorled = 0;

void setup() {

  Serial.begin(115200);
  pinMode(port13_out_zum, OUTPUT);
  pinMode(port4_in_pot, INPUT);
}

void loop() {

  // rango lectura 0 - 4096 a rango 0 - 255

  valorpot = analogRead(port4_in_pot);
  delay(500);
  valorled = map(valorpot, 0, 4095, 0, 1000);
  Serial.print(valorpot);
  Serial.print(" , ");
  Serial.print(valorled);
  Serial.print(";;");
  digitalWrite(port13_out_zum, HIGH);
  delay(valorled);
  digitalWrite(port13_out_zum, LOW);
  delay(valorled);
}
