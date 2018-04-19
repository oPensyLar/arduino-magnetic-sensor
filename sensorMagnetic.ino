
const int switchPin = 13;

void setup()
{

  pinMode(switchPin, INPUT);
  digitalWrite(switchPin, HIGH); 
  Serial.begin(9600);

}

void loop()
{

  if(digitalRead(switchPin) == LOW)
  {
      Serial.print("Puerta cerrada\r\n");
  }
  
     else
     {
        Serial.print("Puerta abierta\r\n");
     }


  delay(1000);
}
