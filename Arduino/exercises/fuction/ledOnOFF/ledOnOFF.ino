const int LED = 13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED,HIGH);
  Serial.println("LED");
  delay(500);
  digitalWrite(LED,LOW);
  delay(500);

}
