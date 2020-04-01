int LEDA = 2;
int LEDb = 3;
int LEDc = 4;

void setup(){
  pinMode(LEDA, OUTPUT);
  pinMode(LEDb, OUTPUT);
  pinMode(LEDc, OUTPUT);
  
  digitalWrite(LEDA, LOW);
  digitalWrite(LEDb, LOW);
  digitalWrite(LEDc, LOW);
  
}

void loop(){
  digitalWrite(LEDA, HIGH);
  delay (5000);
  digitalWrite(LEDA, LOW);
 
}

