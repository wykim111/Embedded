const int buttonPin = 2;
const int ledPin = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonInput = digitalRead(buttonPin);

  if(buttonInput == HIGH)
  {
    for(int t_high = 0; t_high <=255;t_high++)
    {
      analogWrite(ledPin,t_high);
      delay(4);
    }
  }
  else
  {
    analogWrite(ledPin,0);
  }

}
