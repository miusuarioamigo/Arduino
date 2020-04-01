#include <Servo.h>

int pulsador = 5;
int nov = 90;
int ser = 0;
Servo Pepe;

void setup(){
  pinMode(pulsador, INPUT);
  Pepe.attach(3);
  Pepe.write(ser);
  delay(2000);
}

void loop(){
  if (digitalRead(pulsador) == LOW){
     ser = 90;
  }
  
}

