// C++ code
//

#define LdVm 13
#define LdAm 10
#define LdVd 8
//semaforo 2
#define LdVm2 6
#define LdAm2 4
#define LdVd2 2
void setup()
{
  pinMode(LdVm, OUTPUT);
  pinMode(LdAm, OUTPUT);
  pinMode(LdVd, OUTPUT);
  //semaforo dois
  pinMode(LdVm2, OUTPUT);
  pinMode(LdAm2, OUTPUT);
  pinMode(LdVd2, OUTPUT);
}

void loop()
{
  digitalWrite(LdVm, HIGH);
  
  digitalWrite(LdVm2, HIGH);
  delay(1000);
  
  digitalWrite(LdVm, LOW);
  
  digitalWrite(LdVd, HIGH);
  delay(3000);
  
  digitalWrite(LdVd, LOW);
  
  digitalWrite(LdAm, HIGH);
  delay(1000);
  
  digitalWrite(LdAm, LOW);
  
  digitalWrite(LdVm, HIGH);
  delay(1000);
  
  digitalWrite(LdVm2, LOW);
  
  digitalWrite(LdVd2, HIGH);
  delay(3000);
  
  digitalWrite(LdVd2, LOW);
  
  digitalWrite(LdAm2, HIGH);
  delay(1000);
  digitalWrite(LdAm2, LOW);
}