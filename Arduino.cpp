#include <Wire.h>

int LED = 13;
void setup() {
  // put your setup code here, to run once:
  // Join I2C bus as a Slave and Not a Master (with Addres 8)
  Wire.begin(0x8);
  Wire.onReceive(receiveEvent);
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);

}

void receiveEvent(int total){
  while(Wire.available()){
    char c = Wire.read();
    digitalWrite(LED, c);
  }
  
}
void loop() {
  // put your main code here, to run repeatedly:
  delay(100);
}
