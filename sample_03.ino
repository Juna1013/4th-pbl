// 起動時の1回のみ実行
void setup() {
  pinMode(16, OUTPUT);
  pinMode(17, OUTPUT);
}

// 繰り返し実行
void loop() {
  clockwise();
  delay(1000);
  stopMoter();
  delay(1000);
  anticlockwise();
  delay(1000);
  stopMotor();
  delay(1000);
}

// モーターの正回転
void clockwise() {
  digitalWrite(16, HIGH);
  digitalWrite(17, LOW);
}

// モータの逆回転
void anticlockwise() {
  digitalWrite(16, LOW);
  digitalWrite(17, HIGH);
}

// モーターの停止
void stopMtor(){
  digitalWrite(16, LOW);
  digitalWrite(17, LOW);
}
