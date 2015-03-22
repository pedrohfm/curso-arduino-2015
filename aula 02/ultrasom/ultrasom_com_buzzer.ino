// ultrasom.ino
#define trigger 12
#define echo 10
#define buzzer 13

void setup() {
pinMode(trigger, OUTPUT); // mandamos 5v pro pino
pinMode(echo, INPUT); // recebemos de volta uma informacao
pinMode(buzzer, OUTPUT);
Serial.begin (9600); // inicia serial
}

void loop() {
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

	Serial.println(d); // imprime no serial monitor o valor da variavel d, distancia

	delay(500); // delay para nao imprimir muito rapido (imprime, espera 500 ms, imprime, espera 50ms etc...)

	if(d < 10.0 ){ //se variavel d estiver armazenando valor menor que 10 o buzzer toca na frequencia 300 
	    tone(buzzer, 300, 500); // toca na frequencia 300 por 500 ms 
	} else {
	    digitalWrite(buzzer, LOW); // se nao for menor que 10, buzzer nao recebe energia e fica desligado
	}
	delay(500);

}






