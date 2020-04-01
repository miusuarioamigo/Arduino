int sen = 7;
int led= 12;
int led2= 13;
int e = LOW;

void setup(){
  pinMode(sen,INPUT);
  pinMode(led,OUTPUT);
  digitalWrite(led,LOW);
  pinMode(led2,OUTPUT);
  digitalWrite(led2,LOW);
  Serial.begin(9600);
}

void loop(){
  if (digitalRead(sen)==LOW){
    digitalWrite(led, HIGH);
    digitalWrite(led2, HIGH);
    Serial.println("Metal");
  }
    else
  {
    digitalWrite(led,LOW);
    digitalWrite(led2,LOW);
    Serial.println("NA DE NA");
  }

}


