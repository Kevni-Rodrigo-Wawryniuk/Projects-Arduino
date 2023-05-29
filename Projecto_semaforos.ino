// C++ code
//
void setup()
{
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT); 
  pinMode(2, OUTPUT);
}
void semaforoBasico()
{
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(4, LOW);
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(1000);
  
}

void semaforoIntermadio()
{
  digitalWrite(2, LOW);
  digitalWrite(4, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(4, LOW);
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(1000);
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  delay(1000);
}
void semaforoAvanzado()
{
  digitalWrite(4, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(4, LOW);
  digitalWrite(2, HIGH);
  delay(1000);
  
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(1000);
  
  digitalWrite(3, LOW);
  delay(500);
  
  digitalWrite(3, HIGH);
  delay(500);
  digitalWrite(3, LOW);
  delay(500);
  
  digitalWrite(3, HIGH);
  delay(500);
  digitalWrite(3, LOW);
  delay(500);
  
  digitalWrite(3, HIGH);
  delay(500);
  digitalWrite(3, LOW);
  delay(500);
 
  //3
  
  digitalWrite(3, HIGH);
  delay(250);
  digitalWrite(3, LOW);
  delay(250);
  
  digitalWrite(3, HIGH);
  delay(250);
  digitalWrite(3, LOW);
  delay(250);
  
  digitalWrite(3, HIGH);
  delay(250);
  digitalWrite(3, LOW);
  delay(250);
  
  digitalWrite(3, HIGH);
  delay(250);
  digitalWrite(3, LOW);
  delay(250);
  
  digitalWrite(3, HIGH);
  delay(250);
  
  digitalWrite(3, LOW);
  digitalWrite(2, HIGH);
  
  delay(1000);
  digitalWrite(2, LOW);
} 

void loop()
{
  //semaforoBasico();
  //semaforoIntermadio();
  //semaforoAvanzado();
}
