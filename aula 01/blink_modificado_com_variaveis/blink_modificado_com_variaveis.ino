int led1 = 13; //variaveis definindo a porta  13 a ser usada
int led2 = 12; //variaveis definindo a porta 12  a ser usada


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led1, HIGH);
  digitalWrite(led2,LOW);
  delay(1000);
  digitalWrite(led1, LOW);
  digitalWrite(led2,HIGH);
  delay(1000);
  
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  delay(2000);
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  delay(2000);
  
  digitalWrite(led1, HIGH);
  digitalWrite(led2,LOW);
  delay(3000);
  digitalWrite(led1, LOW);
  digitalWrite(led2,HIGH);
  delay(3000);
  
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  delay(500);
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  delay(500);
  
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  delay(500);
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  delay(500);

}
