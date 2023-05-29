// C++ code
//

int estado = 0;  // Esta variable es para el boton

void setup()
{
  pinMode(5, INPUT); //Esto es para el boton 
  pinMode(4, OUTPUT); // Esto es para el led
}

void loop()
{
 estado = digitalRead(5); //la variable es igual al boton
  
  if (estado == HIGH)
  {
    digitalWrite(4, HIGH); // EL led se prende
  }
  else
  {
    digitalWrite(4, LOW); // El led se apaga
  }
  
}
