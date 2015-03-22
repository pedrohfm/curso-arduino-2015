int red = 9;

void setup() {
  pinMode(red, OUTPUT);

}
void ldr () {
  int leitura = analogRead(A0);
  if (leitura <= 400) { // sala esta escura
    digitalWrite(red, HIGH); // acende led
  }
  else {
    digitalWrite(red, LOW); // apaga led
  }
    
}

void loop() {
  ldr();
  
}
