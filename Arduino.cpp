
#include <Wire.h> // I2C Library

int LED = 11; // Connect LED to Pin 11 

void setup() {
  // put your setup code here, to run once:
  
  Wire.begin(0x8); // Join I2C bus as a Slave and Not a Master (with Address 8)
  Wire.onReceive(event); // When data are receive it will pass the data to the event function
  pinMode(LED, OUTPUT); // Set LED as OUTPUT
  digitalWrite(LED, LOW); // Turn off the LED when start 

}

void event(int total){ // Event that takes in the total of event 
  while(Wire.available()){ // Loop when the Wire is available
    char c = Wire.read(); // When Wire is available it will read the value and store it in c (receive the byte as a charatecter)
    digitalWrite(LED, c); // Write them to the LED pin
  }
  
}
void loop() {
  // put your main code here, to run repeatedly:
  delay(100); // Delay for  100 Millisecond
}
