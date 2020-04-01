int pausa = 1000;

void setup() {
  //Asignación de las salidas digitales
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

}

void display (int a, int b, int c, int d, int e, int f,int g)
//Función del display
{
  //Se reciben 7 variables y se asignan a cada salida
  digitalWrite (7,a);
  digitalWrite (8,b);
  digitalWrite (9,c);
  digitalWrite (10,d);
  digitalWrite (11,e);
  digitalWrite (12,f);
  digitalWrite (13,g);
  
}

void loop()
{
  display (0,0,0,0,0,0,1); //0
  delay (pausa);
  display (1,0,0,1,1,1,1); //1
  delay (pausa);
  display (0,0,1,0,0,1,0); //2
  delay (pausa);
  display (0,0,0,0,1,1,0); //3
  delay (pausa);
  display (1,0,0,1,1,0,0); //4
  delay (pausa);
  display (0,1,0,0,1,0,0); //5
  delay (pausa);
  display (0,1,0,0,0,0,0); //6
  delay (pausa);
  display (0,0,0,1,1,1,1); //7
  delay (pausa);
  display (0,0,0,0,0,0,0); //8
  delay (pausa);
  display (0,0,0,0,1,0,0); //9
  delay (pausa);
}

