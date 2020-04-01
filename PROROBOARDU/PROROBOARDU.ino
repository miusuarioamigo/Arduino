
const int LED = 2;
void setup() 
{
 pinMode(LED, OUTPUT);
 Serial.begin(9600);
}

void loop() 
{
digitalWrite(LED , LOW);  
int ADC_SHARP = analogRead(A0);
Serial.println(ADC_SHARP);
delay(20);
while (ADC_SHARP <= 250 && ADC_SHARP >= 390)
{
  digitalWrite(LED, HIGH);
  delay(2);
  break;
} 

}
