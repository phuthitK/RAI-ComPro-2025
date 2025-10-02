
int led_pin = 7;
void setup()
{
  pinMode(led_pin, OUTPUT);
}

void loop()
{
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(led_pin, HIGH);
  delay(3000); // Wait for 3s
 
  digitalWrite(led_pin, LOW);
  delay(3000); // Wait for 3s
}