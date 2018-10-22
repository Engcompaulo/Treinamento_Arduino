int led =7;
void setup() {
  pinMode(led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay (100);
  digitalWrite(led,LOW);
  delay(1000);

}
