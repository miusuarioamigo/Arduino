#include <Servo.h>

//#define MOTOR 11
Servo servo;
int led = 10;
int estado = 0;
int pulso=0;

void setup() {
  //servo.attach(6);
  //analogWrite(led,0);
  pinMode(led,OUTPUT);
  digitalWrite(led,LOW);
  Serial.begin(9600);
  servo.attach(11);
  servo.write(0);
  }

void loop() {
  if (Serial.available () > 0){
      estado = Serial.read();
      //Serial.print("Pulse 1 o 0");
  }

  if (estado == '1'){
    digitalWrite(led,HIGH);
    delay(500);
    servo.write(90);
    //delay(1000);
    
  }else if(estado == '2'){
    digitalWrite(led,HIGH);
    delay(500);
    servo.write(180);
    //delay(1000);
  }else{
    servo.write(0);
    digitalWrite(led,LOW);
   // delay(500);
  }
      

}
