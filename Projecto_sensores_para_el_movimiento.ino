void setup()
{


  pinMode(A0, INPUT);
  Serial.begin(9600);
  Serial.flush();
  while(Serial.available()>0)Serial.read();

}


void loop()
{

    if (((analogRead(A0) > 0) && (analogRead(A0) < 600))) {
      Serial.println(String("Negro"));
    }

    if (((analogRead(A0) > 600) && (analogRead(A0) < 900))) {
      Serial.println(String("Blanco"));
    }

}
