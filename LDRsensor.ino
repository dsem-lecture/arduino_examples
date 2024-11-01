int pin = A0;       // 변수 pin를 선언하고, A0을 대입

void setup() {                     

Serial.begin(9600);  // 시리얼 통신을 시작하며, 속도는 9600으로 설정.

}

void loop() {                    
            
int val= analogRead(pin);  // val 변수에 pin(A0) 아날로그 값을 저장
Serial.println(val);   // 시리얼 통신을 통해 출력.
delay(1000);     // 1초 동안 딜레이.

}



