double num;
double num1;
double num2;

void setup()
{
    pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(5, OUTPUT);

  Serial.begin(9600);
  Serial.flush();
  while(Serial.available()>0)Serial.read();

  num1 = 255;

}


void loop()
{

    num = Serial.read();
    if ((num > -1)) {
      if ((num == 70)) {
        digitalWrite(9,HIGH);
        digitalWrite(10,LOW);
        analogWrite(11,num1);
        digitalWrite(6,HIGH);
        digitalWrite(7,LOW);
        analogWrite(5,num1);
        Serial.println(String("adelante"));
      }

      if ((num == 66)) {
        digitalWrite(9,LOW);
        digitalWrite(10,HIGH);
        analogWrite(11,num1);
        digitalWrite(6,LOW);
        digitalWrite(7,HIGH);
        analogWrite(5,num1);
        Serial.println(String("atras"));
      }

      if ((num == 82)) {
        digitalWrite(9,HIGH);
        digitalWrite(10,LOW);
        analogWrite(11,num1);
        digitalWrite(6,LOW);
        digitalWrite(7,HIGH);
        analogWrite(5,num1);
        Serial.println(String("derecha"));
      }

      if ((num == 76)) {
        digitalWrite(9,LOW);
        digitalWrite(10,HIGH);
        analogWrite(11,num1);
        digitalWrite(6,HIGH);
        digitalWrite(7,LOW);
        analogWrite(5,num1);
        Serial.println(String("izquierda"));
      }

      if ((num == 83)) {
        digitalWrite(9,LOW);
        digitalWrite(10,LOW);
        analogWrite(11,num1);
        digitalWrite(6,LOW);
        digitalWrite(7,LOW);
        analogWrite(5,num1);
        Serial.println(String("parar"));
      }

      if ((num == 71)) {
        digitalWrite(9,HIGH);
        digitalWrite(10,LOW);
        analogWrite(11,num1);
        digitalWrite(6,HIGH);
        digitalWrite(7,LOW);
        analogWrite(5,num1);
        Serial.println(String("adelante izquierda"));
      }

      if ((num == 73)) {
        digitalWrite(9,LOW);
        digitalWrite(10,HIGH);
        analogWrite(11,num1);
        digitalWrite(6,LOW);
        digitalWrite(7,LOW);
        analogWrite(5,num1);
        Serial.println(String("adelante derecha"));
      }

      if ((num == 72)) {
        digitalWrite(9,LOW);
        digitalWrite(10,LOW);
        analogWrite(11,num1);
        digitalWrite(6,LOW);
        digitalWrite(7,HIGH);
        analogWrite(5,num1);
        Serial.println(String("atras derecha"));
      }

      if ((num == 74)) {
        digitalWrite(9,LOW);
        digitalWrite(10,LOW);
        analogWrite(11,num1);
        digitalWrite(6,HIGH);
        digitalWrite(7,LOW);
        analogWrite(5,num1);
        Serial.println(String("atras izquierda"));
      }

      if ((num == 113)) {
        num1 = 255;
        Serial.println(String("maxima velocidad"));
      }

      if (((num >= 48) && (num <= 57))) {
        num2 = (num - 48);
        num1 = map(num2, 0,9,60,225);
        Serial.println(String("velocidad")+String(num2));
      }
    }
}
