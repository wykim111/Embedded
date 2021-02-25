int f(int x)
{
  return x+1;
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  int x = 2;
  int y = f(x);

  Serial.println(y);
}

void loop() {
  // put your main code here, to run repeatedly:

}
