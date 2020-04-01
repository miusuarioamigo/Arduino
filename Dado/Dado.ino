//DADO CON PULSADOR
int led[]= {13,12,11,10,9,8};
int bot = 7;
int i;
int a = 0;
void setup() {
 for(i=0; i<6; i++){
  pinMode (led[i], OUTPUT);
  digitalWrite(led[i], LOW);
 }
  pinMode (bot, INPUT);
  randomSeed(analogRead(0)); //para generar numeros aleatorios diferentes
  //analogRead es para fijar el valor a partir del cuál generaŕá el número aleatorio
}

void loop() {
  while(digitalRead(bot)==1);
    a = random(1,7); //genera un número aleatorio, en este caso se agregan primero el menor numero que se quiere generar y seguido el mayor limite en este caso queremos mostrar el 6 como maximo por ello se pone 7
    //otra forma de hacer seria a = random(6) + 1 así si, por ejemplo da 1 el numero saliente seria 2 y etc.

for(i=0; i<a; i++){
  digitalWrite(led[i], HIGH);  //Para iluminar los N led primeros
}

delay (5000);

 for(i=0; i<6; i++){
  pinMode (led[i], OUTPUT);
  digitalWrite(led[i], LOW);
 }

}
