unsigned long int inicio = 0;
int led1 = 13;

void setup() {

  pinMode(led1, OUTPUT);

}

void loop() {

  unsigned long int tempo = millis(); //variavel tempo mede o tempo atual


  if (tempo - inicio >= 1000) { //mede quanto tempo se passou, se for 1000 ou maior executa
      digitalWrite(led1, !digitalRead(led1)); 
      /* !digitalRead(led1) esta escrevendo o contrario do digitalRead para o led1
     ou seja, quando o led estiver low, escreva high, quando estiver high, escreva low, a cada 1000ms (1s) */
      inicio = tempo; //comeca a contar de novo a partir do tempo que se passou ate o primeiro "if"
    }
  }
