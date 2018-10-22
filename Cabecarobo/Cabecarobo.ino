const int b=5;
const int c=6;
int i;
void setup() {
  pinMode (b,OUTPUT);
  pinMode (c,OUTPUT);

}

void loop() {
 digitalWrite(b,HIGH);
 digitalWrite(c,HIGH);
 delay(3000);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 delay(100);
 digitalWrite(b,HIGH);
 digitalWrite(c,HIGH);
 delay(100);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 delay(50); 

 /*digitalWrite(b,HIGH);
 delay(300);
 digitalWrite(c,HIGH);
 delay(100);
 digitalWrite(c,LOW);
 delay(100); */
}
