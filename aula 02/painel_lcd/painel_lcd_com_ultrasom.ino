// include the library code:
#include <LiquidCrystal.h>
#define trigger 8
#define echo 10

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");

  pinMode(trigger, OUTPUT); // mandamos 5v pro pino
  pinMode(echo, INPUT); // recebemos de volta uma informacao
  Serial.begin (9600); // inicia serial
}

void loop() {
	digitalWrite(trigger, LOW); // desliga por 2 microsegundos
	delay(2);					
	digitalWrite(trigger, HIGH); // liga por 5 microsegundos, sendo um pulso de 5v por 5 microsegundos
	delay(5);
	digitalWrite(trigger, LOW); // retorna pro estado inicial

	pulseIn(10, HIGH); // recebe do pino 10 echo

	float t = pulseIn(echo, HIGH); // define uma variavel para o tempo 

	float d = ((340.0/10000.0)*t)/2.00; /*calculo da distancia (dividimos por dois pois o pulso do ultrasom
	considera que a onda foi e voltou, e para saber a distancia so precisamos saber a distancia percorrida
	por uma ida ou uma volta )*/

  // define o cursos para coluna 0, linha 1
  // (note: linha 1 corresponde a segunda fila, ja que a contagem comeca com 0):
  lcd.setCursor(0, 1);
  // imprime a variavel d, nesse caso a distancia que esta armazenada em d
  lcd.clear();
  lcd.print(d);

}
