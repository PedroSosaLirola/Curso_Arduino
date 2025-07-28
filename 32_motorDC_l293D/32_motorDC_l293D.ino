#define velocidad 14 // patilla 1 enable
#define dirpin_1 12
#define dirpin_2 13


void setup() {
  Serial.begin(115200);

  pinMode(velocidad, OUTPUT);
  pinMode(dirpin_1, OUTPUT);
  pinMode(dirpin_2, OUTPUT);
}

void loop() {

  digitalWrite(velocidad, HIGH);
  digitalWrite(dirpin_1, 1),
  digitalWrite(dirpin_2, 0),
  delay(2000);
  digitalWrite(velocidad, LOW); // apagamos motor
  delay(2000);
  
   digitalWrite(velocidad, HIGH);
  digitalWrite(dirpin_1, 0),
  digitalWrite(dirpin_2, 1),
  delay(2000);
  digitalWrite(velocidad, LOW); // apagamos motor
  delay(2000);
 
}
