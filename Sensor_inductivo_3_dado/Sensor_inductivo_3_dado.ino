int led[] = {13,12,11,10,9,8};
int sen = 7;
int i;
int a = 0;
void setup() {
  for(i=0; i<6; i++){
    pinMode(led[i],LOW);
  }
  randomSeed(analogRead(0));
   pinMode(sen,INPUT);
}

void loop() {
  while(digitalRead(sen)==1);
  a = random(1,7);

  for(i=0; i<a; i++){
    digitalWrite(led[i],HIGH);
  }

  delay (5000);

    for(i=0; i<6; i++){
    pinMode(led[i],LOW);
  }
  

}
