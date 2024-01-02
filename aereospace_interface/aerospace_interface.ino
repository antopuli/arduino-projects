
int switchState = 0; // it will store the value of the 2nd digital pin

void setup() {
  
  pinMode(3, OUTPUT); // green LED
  pinMode(4, OUTPUT); // red LED
  pinMode(5, OUTPUT); // red LED
  pinMode(2, INPUT); // BUTTON

}

void loop() {

  switchState = digitalRead(2); // read the value of the 2nd digital pin and store it in the switchState variable

  if (switchState == LOW) {

    // green led turns on, others turns off
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW); 
    digitalWrite(5, LOW);
    
  } 
  
  else {

    // green led turns off, others start blinking
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    delay(250);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(250);
    
  }
  
}
