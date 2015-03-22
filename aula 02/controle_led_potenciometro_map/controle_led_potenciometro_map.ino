// controle_led_potenciometro_map.ino
/*codigo parecido com o do blink, mas o delay agora é um valor variavel que vai de 100 a 500, mapeado
de acodo com o valor que vai ser lido pela porta analogica, consequencia de se alterar a resistencia
no potenciometro*/

void setup() {
	pinMode(led, OUTPUT);
}

void loop() {
	int potenciometro = analogRead(A0); // valor a ser lido do potenciometro vai de 0 a 1023
	int intervalo = map (potenciometro, 0, 1023, 100, 500);

	digitalWrite(led, HIGH);
	delay(intervalo);
	digitalWrite(led, LOW);
	delay(intervalo);
}

