void setup() {
  pinMode(16, OUTPUT);
  pinMode(17, OUTPUT);
}

void loop() {
  clockwise1();
  delay(1000);
  clockwise2();
  delay(1000);
  clockwise3();
  delay(1000);
}

void clockwise1() {
  analogWrite(16, 0);
  analogWrite(17, 0);
}

void clockwise2() {
  analogWrite(16, 128);
  analogWrite(17, 0);
}

void clockwise3(){
  analogWrite(16, 255);
  analogWrite(17, 0);
}
