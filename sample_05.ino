void setup() {
  pinMode(16, OUTPUT);
  pinMode(17, OUTPUT);
  Serial.begin(9600);
  analogReadResolution(12);
}

void loop() {
  int sensorvalue = analogRead(A2);
  Serial.println(sensorValue);
  int rpm = map(sensorValue, 0, 4095, 0, 255);
  analogWrite(16, rpm);
  analogWrite(17, 0);
}
