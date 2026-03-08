const int buttonPin = 10; // the number of the push button pin
const int ledPin =  13; // the number of the LED pin

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  if (digitalRead(buttonPin) == 0) {
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(1000);  
  }
}