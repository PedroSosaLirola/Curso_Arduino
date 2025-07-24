#include<LiquidCrystal_I2C.h>
#include<Wire.h>
#define SDA 13
#define SCL 14
#define ADDR 0x3F // la otra es 0x3F

LiquidCrystal_I2C lcd(ADDR,16,2);

// Aqui vamos a aprender a usar la pantalla LCD


void setup() {
  Wire.begin(SDA,SCL);
  //Wire.beginTransmission(ADDR);

    lcd.init();
    lcd.noBacklight();
    delay(5000);
    lcd.backlight();
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Hola Mundo");
    lcd.setCursor(0,1);
    lcd.print("Pedro Sosa");
}

void loop() {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Temp: xx,xx");
    lcd.print(char(223));
    lcd.print("C");
    lcd.setCursor(0,1);
    lcd.print("Hum: 95%");
    delay(5000);
    }
