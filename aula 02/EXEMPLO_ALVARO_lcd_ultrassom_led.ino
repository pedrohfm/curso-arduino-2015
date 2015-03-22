#include <LiquidCrystal.h>
#define TEMPO_LCD 500
#define TEMPO_LED 1000
#define LED 13
#define TRIGGER 12
#define ECHO 10

unsigned long int tempoAnteriorLed = 0, tempoAnteriorLcd = 0;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(TRIGGER, OUTPUT);
  pinMode(ECHO, INPUT);
  lcd.begin(16, 2);
}

float ultrassom() {
  digitalWrite(TRIGGER, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGGER, HIGH);
  delayMicroseconds(5);
  digitalWrite(TRIGGER, LOW);
  
  float tempo = pulseIn(ECHO, HIGH);
  return (340 * tempo) / 2000000.0;
}

void piscarLed() {
  unsigned long int tempoAtual = millis();
  if (tempoAtual - tempoAnteriorLed >= TEMPO_LED) {
    digitalWrite(LED, !digitalRead(LED));
    tempoAnteriorLed = tempoAtual;
  }
}

void atualizarLcd() {
  unsigned long int tempoAtual = millis();
  if (tempoAtual - tempoAnteriorLcd >= TEMPO_LCD) {
    float distancia = ultrassom();
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("distancia = ");
    lcd.setCursor(0, 1);
    lcd.print(distancia, 2);
    lcd.print("m");
    tempoAnteriorLcd = tempoAtual;  
  }
}

void loop() {
  piscarLed();
  atualizarLcd();
}


