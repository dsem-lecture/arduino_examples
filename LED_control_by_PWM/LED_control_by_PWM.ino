int brightness = 0;    // LED 밝기 초기값
int fadeAmount = 5;    // 밝기 변화량

void setup() {
  pinMode(9, OUTPUT);  // 디지털 핀 9번을 출력 모드로 설정
}

void loop() {
  analogWrite(9, brightness);  // 핀 9번에 PWM 신호로 밝기 설정

  brightness += fadeAmount;    // 밝기 증가

  // 밝기가 최대값(255) 또는 최소값(0)에 도달했을 때 방향 전환
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;  // 밝기 변화 방향 반전
  }

  delay(30);  // 30ms 대기 후 다음 루프 실행
}