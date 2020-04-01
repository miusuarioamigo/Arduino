int pin = 7;

void setup(){
  pinMode(pin,INPUT);
  Serial.begin(9600);
}

void loop(){
  if (digitalRead(pin)==LOW){
    Serial.println("Metal");
  }
  else
  {
    Serial.println("NA DE NA");
  }

  delay (2000);
}

