int led1 = 13; //variaveis definindo a porta  x a ser usada
int led2 = 9; //variaveis definindo a porta x a ser usada



// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  digitalWrite (led1, HIGH);
  
  for (int contador = 0; contador < 256; contador++) {
    analogWrite(led2, contador);
    delay(20);
  }
  
  delay(1000);
  
  digitalWrite (led1, LOW);

  for (int contador = 255; contador >= 0 ; contador = contador - 1) {
    analogWrite(led2, contador);
    delay(20);
  }

  delay(1000);



}
