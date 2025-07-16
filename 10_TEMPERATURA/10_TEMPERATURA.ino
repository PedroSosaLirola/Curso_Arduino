#include <DHT.h>
#define DHTPIN 13
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);
float temp = 0.0;
float hum = 0.0;


void setup() {
  
  Serial.begin(115200);
  dht.begin();
  delay(5000);

  pinMode(13, INPUT);
  pinMode(12, OUTPUT);
}

void loop() {

  temp = dht.readTemperature();
  hum = dht.readHumidity();
  digitalWrite(12,HIGH);
  delay(100);
  digitalWrite(12, LOW);

  Serial.print("temperatura: ");
  Serial.println(temp);

  Serial.println("Humedad: " + String(hum));
  delay(3000);

}
