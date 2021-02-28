/*
 * pullUp - pullDown 저항 개념
 * 
 * pullUp  : 저항이 5V와 연결되어 있고, 스위치를 누르지 않아도 아두이노 핀은 5V를 가지고 있음. 스위치를 누르면 5V가 GND로 가기 떄문에 아두이노 핀은 0V를 가지고 있습니다.
 * 
 * pullDown  : 스위치가 5V와 연결되어 있고, 스위치를 누르지 않으면 아두이노핀은 0V를 가지고 있음. 스위치를 누르면 5V가 GND로 가기 떄문에 아두이노 핀은 5V를 가지고 있습니다.
 */

const int digitalPin = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  pinMode(digitalPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int digitalValue = digitalRead(digitalPin);
  Serial.println(digitalValue);

}
