int led = 6; 
int sen = A1; //entrada analógica del sensor (divisor)
int valsen = 0; //para almacenar el valor entrada del sensor
void setup() {
  pinMode(led,OUTPUT);
  digitalWrite(led,LOW);
  Serial.begin(9600);
}

void loop() {
  valsen= analogRead(sen);
  Serial.println(valsen);

  valsen = valsen * 255 / 1023;

  analogWrite(led, valsen);
}
