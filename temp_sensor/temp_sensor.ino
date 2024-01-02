// stores the value of the analog pin where the temperature sensor is installed
const int sensorPin = A0;

// stores the temperature of the environment
const float baselineTemp = 19.0;

void setup() {

  // opens a serial port
  Serial.begin(9600); 

  // sets digital pins to output and give them the low value
  for(int pinN = 2; pinN < 5; pinN++) {
    pinMode(pinN, OUTPUT);
    digitalWrite(pinN, LOW);
  }

}

void loop() {

  // reads the value of the analog pin where the temperature sensor is located and print it to the serial monitor
  int sensorVal = analogRead(sensorPin);
  Serial.print("Sensor Value: ");
  Serial.print(sensorVal);

  // calculates the voltage on the pin and print it to the serial monitor
  // the sensorVal is given as a 10 bit result, so it can assume 1024 values
  // the voltage is between 0V and 5V
  float voltage = (sensorVal/1024.0) * 5.0; 
  Serial.print(", Volts: ");
  Serial.print(voltage);

  // calculates the temperature in Celsius and print it to the serial monitor
  float temperature = (voltage - .5) * 100;
  Serial.print(", degrees C: ");
  Serial.println(temperature);

  // according to the temperature variations, the leds are turned on or off
  if(temperature < baselineTemp+2) {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  } else if (temperature >= baselineTemp+2 && temperature < baselineTemp+4) {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  } else if (temperature >= baselineTemp+4 && temperature < baselineTemp+6) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  } else if (temperature >= baselineTemp+6) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
  }

  // delays the loop execution
  delay(1);

}
