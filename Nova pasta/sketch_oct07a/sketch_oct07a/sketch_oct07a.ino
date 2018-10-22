#define LED_VERMELHO 3
#define LED_AMARELO  6
#define LED_VERDE    10

void setup() {
 pinMode (LED_VERMELHO, OUTPUT);
 pinMode (LED_AMARELO, OUTPUT);
 pinMode (LED_VERDE, OUTPUT);
 digitalWrite (LED_VERMELHO, LOW);
 digitalWrite (LED_AMARELO, LOW);
 digitalWrite (LED_VERDE, LOW);

}

void loop() {
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
