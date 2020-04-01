int i;

void setup(){
  for(i=10; i>=3; i--){
    pinMode(i,OUTPUT);
    digitalWrite(i,LOW);
    
  }
}

void loop(){
  for(i=10; i>=3; i--){
    digitalWrite(i,HIGH);
    delay(25);
    digitalWrite(i,LOW);
  }

   for(i=3; i<=10; i++){
    digitalWrite(i,HIGH);
    delay(25);
    digitalWrite(i,LOW);
  }
}
  

  
