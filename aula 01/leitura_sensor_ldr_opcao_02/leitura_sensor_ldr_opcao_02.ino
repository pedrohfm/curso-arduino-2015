int red = 9;
unsigned long int inicio = 0;

void setup() {
  pinMode(red, OUTPUT);

}
void ldr () {
  int leitura = analogRead(A0);
  if (leitura <= 400) {
    digitalWrite(red, HIGH);
  }
  else {
    digitalWrite(red, LOW);
  }

}
void ldr() {
  if (millis() - inicio >= 2000) {
    digitalWrite(red, !digitalRead(red));
    inicio = millis();
  }
}
void loop() {
  ldr();
  

}
