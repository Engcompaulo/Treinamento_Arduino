int a=10;
int b=9;
int p=8;
int d=6;
int e=5;
int f=11;
int g=12;
int c=7;
int resp=0;
void setup() {
  pinMode(g,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(p,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(a,OUTPUT);
}

void loop() {
if (resp ==0){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(p,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay(10000);
}
else{
  if (resp == 1){

  digitalWrite(b,HIGH);
  digitalWrite(p,HIGH);
  
  }
    }

  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(p,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);

 /*digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);

  digitalWrite(e,HIGH);
    digitalWrite(p,HIGH);
     digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
  */
  }
