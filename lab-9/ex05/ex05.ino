// C++ code
int led[4] = {10,11,12,13};
void setup() {
  
   
    for (int i = 0; i < 4; i++){
  	pinMode(led[i],OUTPUT);
    digitalWrite(led[i],LOW);
  }

  }



void loop() {
  
  for (int j = 3; j >= 0; j--){
  	digitalWrite(led[j],HIGH);
    delay(500);
  }
  for (int k = 0; k <4; k++){
  	digitalWrite(led[k],LOW);
    delay(500);
  }
  
}