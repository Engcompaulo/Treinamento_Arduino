int liga=8;
void setup() {
  pinMode (liga,OUTPUT);

}

void loop() {
  digitalWrite(liga,HIGH);
  delay(1000);
  digitalWrite(liga,LOW);
  delay(100);
  
}
