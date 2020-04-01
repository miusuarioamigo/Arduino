//Bluetooth

int led = 7;
int sta = 0;

void setup() {
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0) {
    sta = Serial.read();
  }

  if(sta == '0'){
    digitalWrite(led,LOW);
    Serial.println("Apagado");
    sta = 0;
  }else if (sta == '1'){
    digitalWrite(led,HIGH);
    Serial.println("Encendido");
    sta = 0;
  }

}
