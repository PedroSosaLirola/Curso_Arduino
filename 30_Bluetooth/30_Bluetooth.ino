# include<BluetoothSerial.h>
BluetoothSerial serialBT;
#include <ESP32Servo.h>
#define pinServo 15

Servo miServo;


  miServo.setPeriodHertz(100);
  miServo.attach(pinServo,500,2500);

void setup() {
    Serial.begin(115200);
    serialBT.begin("BT_Pedro");
    Serial.println("Listo para unirse");
}

void loop() {
  if(Serial.available()){           //si hay algo en el monitor
    serialBT.write(Serial.read());
  }  
  if(serialBT.available()){
      Serial.write(serialBT.read());
  }
}
  miServo.write(i);
  delay(30);
  }
}
