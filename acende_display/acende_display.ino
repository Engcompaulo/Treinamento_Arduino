#define a 4
#define b 5
#define c 6
#define d 7
#define e 8
#define f 9
#define g 10
#define h 11
int i; 
void setup() {
  for(i=4;i<12;i++){
    pinMode(i,OUTPUT);
  }

}

void loop() {
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);  
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);  
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);  
  digitalWrite(h,HIGH);  
  delay(1000);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);  
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);  
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);  
  digitalWrite(h,LOW);
  delay(1000);

  //numero 1
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);  
  delay(1000);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);  
  delay(1000);

  //numero 2
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);  
  digitalWrite(e,HIGH);  
  digitalWrite(g,HIGH);  
  digitalWrite(h,HIGH);  
  delay(1000);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);  
  digitalWrite(e,LOW);  
  digitalWrite(g,LOW);  
  digitalWrite(h,LOW);
  delay(1000);
 
  //numero 3
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);  
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);  
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);  
  digitalWrite(h,HIGH);  
  delay(1000);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);  
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(g,LOW);  
  digitalWrite(h,LOW);
  delay(1000);











  
}
