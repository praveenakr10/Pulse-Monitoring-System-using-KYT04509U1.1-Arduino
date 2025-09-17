const int pulsePin = A0;  // INT pin connected here
int signal;

void setup() {
  Serial.begin(9600);
}

void loop() {
  signal = analogRead(pulsePin);  // Read the signal from INT
  Serial.println(signal);         // Output to Serial Plotter
  delay(10);                      // Short delay
}
