
int switchState = 0;

void setup() {

  // configuro i pin digitali come ingresso o come uscita
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);

}

void loop() {

  // leggo lo stato del pin di ingresso
  switchState = digitalRead(2);

  if (switchState == LOW) {
    // imposto i valori dei pin di uscita se switchState è uguale a LOW
    digitalWrite(3, HIGH); // LED VERDE
    digitalWrite(4, LOW); // LED ROSSO
    digitalWrite(5, LOW); // LED ROSSO
  } else {
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    delay(250);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(250);
  }
}
