int red=8;
int yellow = 4;
int green = 2;

void setup() {
  pinMode(red,OUTPUT);
   pinMode(yellow,OUTPUT);
    pinMode(green,OUTPUT);

  digitalWrite(red,LOW);
    digitalWrite(yellow,LOW);
      digitalWrite(green,LOW);  

}

void loop() {
  digitalWrite(green,HIGH);
  delay(5000);
  digitalWrite(green,LOW);
  digitalWrite(yellow,HIGH);
  delay(1000);
  digitalWrite(yellow,LOW);
  digitalWrite(red,HIGH);
  delay(4500);
  digitalWrite(red,LOW);
}
