void setup() {
Serial.begin(9600);
}

void loop() {
  int leitura = analogRead(A0);
  Serial.println(leitura);
  delay(100);

}
