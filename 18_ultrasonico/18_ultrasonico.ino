#define trg 13
#define echo 14
#define led 15
#define max_dist 700 // en cm

float distancia = 0.0;
float timeOut = max_dist * 60;
int velSonido = 340; // metros segundo
int valorLed = 0;

void setup() {
  Serial.begin(115200);
  pinMode(trg, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {

  distancia = getSonar();
  valorLed = 255 - map(distancia, 0, 300, 0, 255);
  analogWrite(led, valorLed);
  Serial.println("Distancia: " + String(distancia));
  delay(5000); 
}

float getSonar(){
    unsigned long int pingTime = 0;
    float dist = 0.0;
    digitalWrite(trg, HIGH);
    delayMicroseconds(10);
    digitalWrite(trg, LOW);

    // la funcion pulseIn detecta en echo 
    pingTime = pulseIn(echo, HIGH, timeOut);
    Serial.println("tiempo de envio: " + String(pingTime));
    dist = (float) pingTime * velSonido / 2 / 10000;
    return dist;

}