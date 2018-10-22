int led = 7;
int bot = 10;
int led2 = 11;
int estado =0;

void setup() {
    pinMode(led, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(bot,INPUT);

}

void loop() {
 estado = digitalRead(bot);
 if (estado == HIGH){
  digitalWrite(led, HIGH);
 }
 else{
  digitalWrite(led, LOW);
 }
 if (estado == LOW){
  digitalWrite(led2,HIGH);
 }
 else{
  digitalWrite(led2,LOW);
 }

}
