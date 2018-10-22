//Feito por: JonasBR
//Canal: youtube.com/jonasbr1

//Você pode enviar esse codigo para seu arduino sem algum circuito conectado nele

//Variaveis
int a;
int b;

void setup() {
  Serial.begin(9600); //Configurando porta Serial
}

void loop() {

  a = 0; //Atribui um valor para a

  
  //map(variavel, MIN, MAX, NOVO MIN, NOVO MAX);
  b = map(a, 0, 50, 0, 5);
  


  Serial.print("Valor a: ");
  Serial.println(a);
  Serial.print("Valor b: ");
  Serial.println(b);

p:
  goto p;

}
