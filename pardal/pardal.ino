   int o1 = 2;
   int o2 = 3;
   int la1 = 4;
   int lv2 = 5;
   int lv3 = 6;
   int la4 = 7;
   int lv5 = 8;
   int lv6 = 9;

void setup() {
    pinMode(o1, OUTPUT);
    pinMode(o2, OUTPUT);
    pinMode(la1, OUTPUT);
    pinMode(lv2, OUTPUT);
    pinMode(lv3, OUTPUT);
    pinMode(la4, OUTPUT);
    pinMode(lv5, OUTPUT);
    pinMode(lv6, OUTPUT);

}

void loop() {
    digitalWrite(o1, HIGH);
    digitalWrite(o2, HIGH);
    delay(2000);    
    digitalWrite(o1, LOW);
    digitalWrite(o2, LOW);
    delay(100);
    digitalWrite(o1, HIGH);
    digitalWrite(o2, HIGH);
    delay(100);    
    digitalWrite(o1, LOW);
    digitalWrite(o2, LOW);
    delay(100);

    digitalWrite(o1, HIGH);
    digitalWrite(o2, HIGH);
    
    digitalWrite(la1, HIGH);
    digitalWrite(la4, HIGH);

    delay(1000);
    digitalWrite(la1, LOW);
    digitalWrite(la4, LOW);
    delay(1000);

    digitalWrite(o1, HIGH);
    digitalWrite(o2, HIGH);
    delay(2000);    
    digitalWrite(o1, LOW);
    digitalWrite(o2, LOW);
    delay(100);
    digitalWrite(o1, HIGH);
    digitalWrite(o2, HIGH);
    delay(100);    
     
    
    digitalWrite(lv2, HIGH);
    digitalWrite(lv3, HIGH);
    digitalWrite(lv5, HIGH);
    digitalWrite(lv6, HIGH);
    delay(1000);
    digitalWrite(lv2, LOW);
    digitalWrite(lv3, LOW);
    digitalWrite(lv5, LOW);
    digitalWrite(lv6, LOW);
    delay(1000);

    digitalWrite(o1, HIGH);
    digitalWrite(o2, HIGH);
    delay(2000);    
    digitalWrite(o1, LOW);
    digitalWrite(o2, LOW);
    delay(100);
    digitalWrite(o1, HIGH);
    digitalWrite(o2, HIGH);
    delay(100); 

   

}
