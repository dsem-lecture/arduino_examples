int sensorPin = A0;     // 조도 센서가 연결된 핀
int ledPin = 11;         // LED가 연결된 핀
int sensorValue = 0;    // 센서에서 읽은 값 저장
int ledBrightness = 0;  // LED 밝기 저장

void setup() {
  pinMode(ledPin, OUTPUT);  // LED 핀을 출력으로 설정
  Serial.begin(9600);       // 시리얼 통신 시작 (디버깅용)
}

void loop() {
  sensorValue = analogRead(sensorPin);  // 조도 센서 값 읽기
  Serial.println(sensorValue);          // 센서 값 출력 (디버깅용)
  
  // 센서 값에 따라 LED 밝기 조절
  // 주위가 어두울수록 LED가 더 밝게 켜짐
  ledBrightness = map(sensorValue, 155, 1023, 0, 255); // 이 부분이 수정됨
  analogWrite(ledPin, ledBrightness);
  
  delay(100);  // 짧은 지연
}



