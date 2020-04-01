#include <Servo.h>

//#define MOTOR 11
Servo servo;
int led = 10;
int estado;
int pulso;


void setup() {
  //servo.attach(6);
  //analogWrite(led,0);
  pinMode(led, OUTPUT);
  digitalWrite(led,LOW);
  servo.attach(11);
  servo.write(1);

  Serial.begin(9600);
  Serial.println("VALORES ENTRE 0 Y 180");
  
  }

void loop() {
  if(Serial.available() >= 1){
    estado = Serial.parseInt();
    pulso = estado;
  }
   if(estado <= 180){
      servo.write(pulso);  
    }else{
      digitalWrite(led,HIGH);
      delay(500);
      digitalWrite(led,LOW);
    }
}
