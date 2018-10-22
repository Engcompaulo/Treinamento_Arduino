
#define LED_VERMELHO 3
#define LED_AMARELO  6
#define LED_VERDE    10

void setup() {
  // put your setup code here, to run once:
 pinMode (LED_VERMELHO, OUTPUT);
 pinMode (LED_AMARELO, OUTPUT);
 pinMode (LED_VERDE, OUTPUT);
 
 digitalWrite (LED_VERMELHO, LOW);
 digitalWrite (LED_AMARELO, LOW);
 digitalWrite (LED_VERDE, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite (LED_VERMELHO, HIGH);
 delay(1000);
 digitalWrite (LED_VERMELHO, LOW);
 digitalWrite (LED_VERDE, HIGH);
 delay(1000);
 digitalWrite (LED_VERDE LOW);
 digitalWrite (LED_AMARELO, HIGH);
 delay(500);
 digitalWrite (LED_AMARELO, LOW);

}
