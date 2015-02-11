/*
 The circuit:
 * Potentiometer attached to analog input 0
 * center pin of the potentiometer to the analog pin
 * one side pin (either one) to ground
 * the other side pin to +5V
 * LED anode (long leg) attached to digital output 11
 * LED cathode (short leg) attached to ground1
 
 */

int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 11;      // select the PWM pin for the LED 
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);  
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);    
  sensorValue = 255 * (sensorValue/1023.0);
  analogWrite(ledPin, sensorValue);  
  delay (10);
}
