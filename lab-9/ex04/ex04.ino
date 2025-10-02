
int sensorValue = 0;

int outputValue = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(7, OUTPUT);
  
  digitalWrite(7, LOW);
}

void loop()
{
  // read the analog in value:
  sensorValue = analogRead(A0);
 
  if (sensorValue > 1023 / 2){
  	digitalWrite(7, HIGH);
  }
  else digitalWrite(7, LOW);
  // change the analog out value:
  


 
}