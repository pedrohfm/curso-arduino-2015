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
  delay(2000);
  digitalWrite (red, LOW);
  digitalWrite (green,HIGH);
  delay(2000);
  digitalWrite (red, LOW);
  digitalWrite (green,LOW);
  digitalWrite (blue,HIGH);
  delay(2000);
  digitalWrite (blue,LOW);

}
