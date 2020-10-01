//Slave A2
#include<Wire.h>
#include<Servo.h>
int ledPin=13;
//int servoPin=7;
int x=0;
Servo altServo;
void setup(){
  pinMode(ledPin,OUTPUT);
  //altServo.attach(servoPin);
  Wire.begin(9);
  Wire.onRecieve(recEvent);
}
void recEvent(int bytes){
  x=Wire.read();
}
void loop(){
  if(x=='5'){
    digitalWrite(ledPin,HIGH);
    delay(1000);
    //altServo.write(120);
    //delay(1000);
  }
}
