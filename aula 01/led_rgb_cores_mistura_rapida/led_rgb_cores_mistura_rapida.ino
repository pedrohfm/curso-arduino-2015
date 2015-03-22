//variaveis definindo a porta  x a ser usada

int red = 9;
int green = 10;
int blue = 11;

// funcao setup roda quando a placa for resetada ou ligada

void setup() {
  // indica os pins que sao usados como saida
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  //sequencia de teste, mostrando cores uma por uma

  digitalWrite (red, HIGH);
  delay(500);
  digitalWrite (red, LOW);
  digitalWrite (green, HIGH);
  delay(500);
  digitalWrite (red, LOW);
  digitalWrite (green, LOW);
  digitalWrite (blue, HIGH);
  delay(500);
  digitalWrite (blue, LOW);

  delay(500);

  for (int contador = 0; contador < 256; contador++) {
    analogWrite(red, contador);
    analogWrite(green, contador);
    delay(20);
  }

  digitalWrite(red, LOW);
  digitalWrite(green, LOW);
  delay(500);

  for (int contador = 0; contador < 256; contador++) {
    analogWrite(green, contador);
    analogWrite(blue, contador);
    delay(20);
  }

  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  delay(500);

  for (int contador = 0; contador < 256; contador++) {
    analogWrite(red, contador);
    analogWrite(blue, contador);
    delay(20);
  }
  digitalWrite(red, LOW);
  digitalWrite(blue, LOW);
  delay (500);

}
