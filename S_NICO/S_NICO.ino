 #define led 2

int trigger = 11;
int echo = 9;
float tiempo,distancia;


void setup(){
  Serial.begin(9600);
  pinMode(trigger,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(led,OUTPUT);
}

void loop(){
  digitalWrite (trigger,LOW);
  delayMicroseconds (2);
  digitalWrite(trigger,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger,LOW);

   tiempo = pulseIn(echo,HIGH);

   distancia = tiempo/58;

   if (distancia <= 15){
    digitalWrite(led,HIGH);
   }else{
    digitalWrite(led,LOW);
   }
   Serial.print(distancia);
   Serial.println("cm");
   delay(1000);
}
