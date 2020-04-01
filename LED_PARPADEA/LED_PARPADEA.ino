int LED = 13;

void setup(){
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);
  
}

void loop(){
  digitalWrite(LED, HIGH);
  delay (5000);
  digitalWrite(LED, LOW);
  delay (2000);
}

