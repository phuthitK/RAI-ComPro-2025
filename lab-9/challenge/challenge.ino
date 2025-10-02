// When not pressed the button, Green 5s, Yellow 2s, Red 2s
// When pressed the button, Green 5s, Yellow 2s, Red 5s.


const int redLed = 10;
const int yellowLed = 11;
const int greenLed = 12;
const int buttonPin = 2;

bool pedestrianRequest = false;

void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
  Serial.println("Traffic Light System Started");
}

void countdownPhase(const char* phaseName, int ledPin, int seconds) {
  digitalWrite(ledPin, HIGH);
  Serial.print(phaseName);
  Serial.println(" ON");
  for (int t = seconds; t > 0; t--) {
    Serial.print("  Time left: ");
    Serial.print(t);
    Serial.println("s");
    if (digitalRead(buttonPin) == LOW && strcmp(phaseName, "GREEN") == 0) {
      pedestrianRequest = true; // record button press only during green
    }
    delay(1000);
  }
  digitalWrite(ledPin, LOW);
  Serial.print(phaseName);
  Serial.println(" OFF\n");
}

void loop() {
  // --- Green phase ---
  countdownPhase("GREEN", greenLed, 5);

  if (pedestrianRequest) {
    // --- Yellow phase ---
    countdownPhase("YELLOW", yellowLed, 2);

    // --- Red phase (pedestrian crossing) ---
    countdownPhase("RED", redLed, 5);

    pedestrianRequest = false;  // reset request
  } else {
    // Normal yellow
    countdownPhase("YELLOW", yellowLed, 2);

    // Normal red
    countdownPhase("RED", redLed, 2);
  }
}
