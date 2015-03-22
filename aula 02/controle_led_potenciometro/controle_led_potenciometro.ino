// controle_led_potenciometro.ino
#define LED 9
#define POTENCIOMETRO A0


void setup() {
pinMode(LED, OUTPUT);
pinMode(POTENCIOMETRO, INPUT);
}

void loop() {
	// define o intervalo com o qual o led pisca como sendo a leitura do potenciometro
	intervalo = digitalRead(POTENCIOMETRO);
	// se o valor for HIGH, desliga o led (LOW)
	if (digitalRead(lED == HIGH){
		digitalWrite(LED , LOW);
	}
	else {
		digitalWrite(LED, HIGH);
	}

	/*
	o delay vai ser um valor variavel baseado na leitura do potenciometro, controlando
	a frequencia com o qual o led vai piscar
	*/

	delay(intervalo);

}

