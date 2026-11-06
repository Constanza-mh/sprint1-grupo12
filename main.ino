int sensorSonido = A0;
int ledVerde = 8;
int ledRojo = 9;

int valorSonido = 0;
int limiteRuido = 60;

void setup() {
  pinMode(ledVerde, OUTPUT);
  pinMode(ledRojo, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  valorSonido = analogRead(sensorSonido);

  Serial.println(valorSonido);

  if (valorSonido > limiteRuido) {
    digitalWrite(ledRojo, HIGH);
    digitalWrite(ledVerde, LOW);
  }
  else {
    digitalWrite(ledRojo, LOW);
    digitalWrite(ledVerde, HIGH);
  }

  delay(100);
}
