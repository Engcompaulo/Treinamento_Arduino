// DEFINE "SINÕNIMOS" PARA FACILITAR A PROGRAMAÇÃO
#define LED_VERMELHO 48
#define LED_AMARELO  50
#define LED_VERDE    52
// função de inicialização, é executada apenas uma vez quando o Arduino Liga 
void setup () {
  // Configura os três pinos como saídas digítais
  pinMode(LED_VERMELHO,OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERDE,   OUTPUT);
  
  // Apaga todos os LEDs
  digitalWrite(LED_VERMELHO,LOW);
  digitalWrite(LED_AMARELO, LOW);
  digitalWrite(LED_VERDE,   LOW);
}
// Função de programa, ela s repete infinitamente até o arduino
void loop() {
  //liga o vermelho
  digitalWrite(LED_VERMELHO, HIGH);
  
  // Aguarda 1 segundo
  delay (1000);
  
  // Desliga o vermlho e liga o verde
  digitalWrite(LED_VERMELHO, LOW);
  digitalWrite(LED_VERDE,   HIGH);
  
  // Aguarda 1 segundo
  delay (1000);
  
  //Desliga o verde e liga o amarelo
  digitalWrite(LED_VERDE,   LOW);
  digitalWrite(LED_AMARELO, HIGH);
 
  // Aguarda 1/2 segundo
  delay (500);
  
  //Desliga o amarelo
  digitalWrite(LED_AMARELO, LOW);
  // Aqui no final o programa automaticamente pula pro começo do loop
}
