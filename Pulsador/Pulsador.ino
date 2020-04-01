int pulsador = 10;
int led = 8;
int edo = LOW;
void setup() {
  pinMode(pulsador, INPUT);
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);
}

void loop() {
 while(digitalRead(pulsador) == LOW); //al entrar 1 es porque cambia el estado y se ha hecho una pulsación
 //al hacer lo anterior (cambiar de edo por la pulsación) cambiara de línea a la siguiente...
  edo = digitalRead(led); //lee el dato enviado a esa entrada
 digitalWrite(led,!edo); //"!" sirve para negar la variable
  while(digitalRead(pulsador) == HIGH); //para evitar error por rebote del pulsador 
}
