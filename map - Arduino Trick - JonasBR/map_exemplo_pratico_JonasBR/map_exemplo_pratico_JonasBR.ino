//Criado por: JonasBR
//Canal: youtube.com/jonasbr1

//Variaveis
int vp; //Valor do potenciometro
int nl; //Numero do LED

void setup() {
  
  //Declarando como entrada as portas dos LEDs
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

  //Declarando comno saida a porta do potenciometro
  pinMode(A0, INPUT);
}

void loop() {
  
 vp = analogRead(A0); //Guarda a leitura da porta do potenciometro (A0), na variavel vp

 nl = map(vp, 0, 1023, 2, 5); //Mapeia a variavel vp, e guarda o mapeamento em nl.
                              //O vp agora é diretamente proporcional ao nl. (Max e Min do vp: 0 e 1023; Max e Min do nl: 2 e 5)
                              //Nota: Escolhi o valor 2 a 5 para o nl, pois, essas são as portas dos LEDs

//Desliga todos os LEDs
 digitalWrite(2, LOW);
 digitalWrite(3, LOW);
 digitalWrite(4, LOW);
 digitalWrite(5, LOW);

 //Liga somente o LED que está na porta nl, que irá variar de 2 a 5 conforme a leitura do potenciometro
 digitalWrite(nl, HIGH);
}
