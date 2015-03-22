// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);
  digitalWrite(12,LOW);
  delay(1000);
  digitalWrite(13, LOW);
  digitalWrite(12,HIGH);
  delay(2000);
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  delay(3000);
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  delay(5000);
}
