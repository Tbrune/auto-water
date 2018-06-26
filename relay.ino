int relay = 6;
int sensor = A0;

void setup() {
Serial.begin(9600);
pinMode(relay, OUTPUT);

}

void loop() {
int sensorValue = analogRead(sensor);
Serial.println(sensorValue);
if (sensorValue < 200) {
  digitalWrite(relay, HIGH);
  delay(2000);
  analogRead(sensor);
  Serial.println(sensorValue);
}
else {
  digitalWrite(relay, LOW);
}
delay(1000);

}
