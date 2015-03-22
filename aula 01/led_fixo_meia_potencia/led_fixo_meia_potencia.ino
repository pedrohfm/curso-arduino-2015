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

  analogWrite(led2, 127);

}
