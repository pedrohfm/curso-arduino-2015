// include the library code:
#include <LiquidCrystal.h>
#define trigger 8
#define echo 10
#define led 7

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");

  pinMode(trigger, OUTPUT); // mandamos 5v pro pino
  pinMode(echo, INPUT); // recebemos de volta uma informacao
  pinMode(led, OUTPUT);
  Serial.begin (9600); // inicia serial
}
float(ultrasom){

	digitalWrite(trigger, LOW); // desliga por 2 microsegundos
	delayMicroseconds(2);				
	digitalWrite(trigger, HIGH); // liga por 5 microsegundos, sendo um pulso de 5v por 5 microsegundos
	delayMicroseconds(5);
	digitalWrite(trigger, LOW); // retorna pro estado inicial

	pulseIn(10, HIGH); // recebe do pino 10 echo

	float t = pulseIn(echo, HIGH); // define uma variavel para o tempo 

	float d = ((340.0/10000.0)*t)/2.00; /*calculo da distancia (dividimos por dois pois o pulso do ultrasom
	considera que a onda foi e voltou, e para saber a distancia so precisamos saber a distancia percorrida
	por uma ida ou uma volta )*/
}
void loop() {
	long int tempo_led = 0;
	long int tempo = millis();

	if (tempo > (tempo_led + 1000)){
		digitalWrite(led,!digitalRead(led);
		tempo_led = tempo;
	}
	
	float(ultrasom);

  lcd.setCursor(0, 1);
  // imprime a variavel d, nesse caso a distancia que esta armazenada em d
  lcd.clear();
  lcd.print(d);

}