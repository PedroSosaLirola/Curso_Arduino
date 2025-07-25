#include <ESP32Servo.h>
#define pinServo 15

// defino el manejador clase Servo
Servo miServo;

void setup() {
  miServo.setPeriodHertz(100);
  miServo.attach(pinServo,500,2500);
    // 500 son microsegundos para posicion 0
    // 2500 son microsegundos para posicion 180
}
void loop() {
  
 
}
