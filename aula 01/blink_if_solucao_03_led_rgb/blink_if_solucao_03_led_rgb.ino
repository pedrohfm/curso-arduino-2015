unsigned long int inicio = 0, inicioG = 0, inicioB = 0;
int red = 9, green = 10, blue = 11;

void setup() {

  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);

}


void piscaR() {
  if (millis() - inicio >= 1000) { //mede quanto tempo se passou, se for 1000 ou maior executa
    digitalWrite(red, !digitalRead(red));
    /* !digitalRead(led1) esta escrevendo o contrario do digitalRead para o led1
    ou seja, quando o led estiver low, escreva high, quando estiver high, escreva low, a cada 1000ms (1s) */
    inicio = millis(); //comeca a contar de novo a partir do tempo que se passou ate o primeiro "if"
  }
}

void piscaG() {
  if (millis() - inicioG >= 2000) {
    digitalWrite(green, !digitalRead(green));
    inicioG = millis();
  }
}

void piscaB() {
  if (millis() - inicioB >= 4000) {
    digitalWrite(blue, !digitalRead(blue));
    inicioB = millis();
  }
}

void loop() {

  piscaR();
  piscaG();
  piscaB();

}
