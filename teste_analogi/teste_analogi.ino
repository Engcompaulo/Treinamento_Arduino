int entra=A0;
int led=7;
void setup() {
 pinMode(led,OUTPUT);
 pinMode(entra,INPUT);
 

}

void loop() {
  int resp = analogRead(entra);
 resp = map(resp, 0, 1023, 0, 255);

  analogWrite(9, resp);

}
