int sensorPin = A0; // 아날로그 입력 핀 A0에 연결된 센서
int sensorValue = 0; // 읽은 값을 저장할 변수

void setup() {
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensorPin); // 아날로그 값을 읽습니다.
  Serial.println(sensorValue); // 시리얼 모니터에 값을 출력합니다.
  delay(100); // 100ms 대기합니다.
}






