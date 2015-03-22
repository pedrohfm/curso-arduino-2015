unsigned long int inicio = 0;
int led1 = 13;

void setup() {

  pinMode(led1, OUTPUT);

}

void loop() {

  unsigned long int tempo = millis(); //variavel tempo mede o tempo atual


  if (tempo - inicio >= 1000) { //mede quanto tempo se passou, se for 1000 ou maior executa
    if (digitalRead(led1) == HIGH) {  // compara para ver o qual o estado do led se high ou low, quando ele for high, executa
      digitalWrite(led1, !digitalRead(led1))
      inicio = tempo; //comeca a contar de novo a partir do tempo que se passou ate o primeiro "if"
    }
  }
