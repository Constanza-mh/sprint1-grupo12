
const int potenciometro = A0;

const int ledVerde = 8;
const int ledAmarillo = 9;
const int ledRojo = 10;

int nivelRuido = 0;

void setup() {
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);
  pinMode(ledRojo, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  nivelRuido = analogRead(potenciometro);

  Serial.println(nivelRuido);

  if (nivelRuido < 341) {
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAmarillo, LOW);
    digitalWrite(ledRojo, LOW);
  }
  else if (nivelRuido < 682) {
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarillo, HIGH);
    digitalWrite(ledRojo, LOW);
  }
  else {
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarillo, LOW);
    digitalWrite(ledRojo, HIGH);
  }

  delay(100);
}
