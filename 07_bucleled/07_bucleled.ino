#define led 2

void setup() {
  Serial.begin(115200);
  delay(1000);
  pinMode(led, OUTPUT);
}

void loop() {}
