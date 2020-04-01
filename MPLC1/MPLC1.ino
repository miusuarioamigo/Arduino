#include <FuzzyRule.h>
#include <FuzzyComposition.h>
#include <Fuzzy.h>
#include <FuzzyRuleConsequent.h>
#include <FuzzyOutput.h>
#include <FuzzyInput.h>
#include <FuzzyIO.h>
#include <FuzzySet.h>
#include <FuzzyRuleAntecedent.h>

Fuzzy* fuzzy = new Fuzzy();

int count = 0, readPot, output;
float RPM;

void setup() {
  Serial.begin(9600);

  FuzzyInput* pot = new FuzzyInput(1);

  FuzzySet* baja = new FuzzySet(0,155,310);
  pot->addFuzzySet(baja);

  FuzzySet* mediabaja = new FuzzySet(240,310,400)
  pot->addFuzzySet(mediabaja);

  FuzzySet* media = new FuzzySet(310,500,690);
  pot->addFuzzySet(media);

  FuzzySet* mediaalta = new FuzzySet(550,690,830);
  pot->addFuzzySet(mediaalta);

  FuzzySet* alta = new FuzzySet(690,855,1020);
  pot->addFuzzySet(alta);

  fuzzy->addFuzzyInput(pot);
  FuzzyOutput* velocidad = new FuzzyOutput(1);

  FuzzySet* lento = new FuzzySet(0,39,77);
  pot->addFuzzySet(lento);

  FuzzySet* mediolento = new FuzzySet(59,77,100);
  pot->addFuzzySet(mediolento);

  FuzzySet* medio = new FuzzySet(77,124,171);
  pot->addFuzzySet(medio);

  FuzzySet* mediorapido = new FuzzySet(137,171,206);
  pot->addFuzzySet(mediorapido);

  FuzzySet* rapido = new FuzzySet(171,213,254);
  pot->addFuzzySet(rapido);

  fuzzy->addFuzzyOutput(velocidad);

  //IF pot=baja THEN velocidad = lento

  FuzzyRuleAntecedent* ifPotBaja=new FuzzyRuleAntecedent();
  ifPotBaja->joinSingle(baja);
  FuzzyRuoleConsequent* thenVelocidadLento = new FuzzyRuleConsequent();
  thenVelocidadLento->addOutput(lento);
  FuzzyRule* Regla01 = new FuzzyRule(1,ifPotBaja,thenvelocidadLento);

  fuzzy->addFuzzyRule(Regla01);

  //If pot = mediabaja THEN velocidad = mediolento

  FuzzyRuleAntecedent* ifPotMediaBaja=new FuzzyRuleAntecedent();
  ifPotBaja->joinSingle(mediabaja);
  FuzzyRuoleConsequent* thenVelocidadMedioLento = new FuzzyRuleConsequent();
  thenVelocidadMedioLento->addOutput(mediolento);
  FuzzyRule* Regla02 = new FuzzyRule(1,ifPotMediaBaja,thenvelocidadMedioLento);

  fuzzy->addFuzzyRule(Regla02);

  //If pot = media THEN velocidad = medio

  FuzzyRuleAntecedent* ifPotMedia=new FuzzyRuleAntecedent();
  ifPotBaja->joinSingle(media);
  FuzzyRuoleConsequent* thenVelocidadMedio = new FuzzyRuleConsequent();
  thenVelocidadMedio->addOutput(medio);
  FuzzyRule* Regla03 = new FuzzyRule(1,ifPotMedia,thenvelocidadMedio);

  fuzzy->addFuzzyRule(Regla03);

  //If pot = mediaalta THEN velocidad = mediorapido

  FuzzyRuleAntecedent* ifPotMediaAlta=new FuzzyRuleAntecedent();
  ifPotBaja->joinSingle(mediaalta);
  FuzzyRuoleConsequent* thenVelocidadMedioVeloz = new FuzzyRuleConsequent();
  thenVelocidadMedioVeloz->addOutput(mediorapido);
  FuzzyRule* Regla04 = new FuzzyRule(1,ifPotMediaAlta,thenvelocidadMediorapido);

  fuzzy->addFuzzyRule(Regla04);

  //If pot = alta THEN velocidad = rapido

  FuzzyRuleAntecedent* ifPotAlta=new FuzzyRuleAntecedent();
  ifPotBaja->joinSingle(alta);
  FuzzyRuoleConsequent* thenVelocidadrapido = new FuzzyRuleConsequent();
  thenVelocidadMedioVeloz->addOutput(rapido);
  FuzzyRule* Regla05 = new FuzzyRule(1,ifPotAlta,thenvelocidadrapido);

  fuzzy->addFuzzyRule(Regla05);

  attachInterrupt(0,conteo,RISING);
  
}

void loop() {
  readPot = analogRead(A0);
  fuzzy->setInput(1,readPot);
  fuzzy->fuzzify();
  output = fuizzy->defuzzify(1);

  analogWrite(3,output);

  //Retardo para el conteo de las RPM. Durante 100ms se cuentan todos los
  //pulsos del encoder y se calculan las RPM

  delay(100);
  RPM=9.375*count;

  /*Para la conversión de pulsos por cada 100ms a RPM
   * RPM = 10 (conviertiendo a HZ)=60(para convertir a minutos)/64(el número
   * de ranuras del encoder).
   * DEPENDE DEL MOTOR Y ENCODER QUE OCUPES VATO!
   */

   Serial.print("Potenciometro: ");
   //Se imprime lectura del POT
   Serial.print(readPot);
   Serial.print(" ");
   Serial.print("Velocidad: ");
   Serial.print(RPM);
   Serial.print(" RPM *n'");

   count=0;
   

}

void conteo()
{
  count++;
}
