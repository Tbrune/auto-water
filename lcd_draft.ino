#include <LiquidCrystal.h>

int relay = 6;
int sensor = A0;
int led = 3;

void setup() {
Serial.begin(9600);
pinMode(relay, OUTPUT);
pinMode(led, OUTPUT);
pinMode(sensor, INPUT);
}
void loop()
{
  int sensorValue = analogRead(sensor); // Initialize sensor
  sensorValue = map(sensorValue, 0, 1023, 0, 255); // map sensor value to LCD, convert values.
Serial.print("Moisture Level: ");
Serial.println(sensorValue);
delay(1000);
if (sensorValue < 40) {   // Once threshold is crossed, relay will turn on the water pump
  digitalWrite(relay, HIGH);
  digitalWrite(led, HIGH);
  delay(2000);
  Serial.print("Moisture Level: ");
  Serial.println(sensorValue);
  delay(500);
  
  Serial.print("Moisture Level: ");
  Serial.println(sensorValue);
}
else{
  digitalWrite(relay, LOW);
  digitalWrite(led, LOW);
}
}
