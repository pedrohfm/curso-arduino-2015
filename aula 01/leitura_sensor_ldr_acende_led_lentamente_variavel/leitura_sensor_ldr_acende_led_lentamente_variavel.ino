int led = 9;

void setup() {
  pinMode(led, OUTPUT);

}
void ldr () {
  int leitura = analogRead(A0);
  int pwm = map(leitura, 300, 800, 255, 0);
  analogWrite(led, pwm);
    
}

void loop() {
  ldr();
  
}
