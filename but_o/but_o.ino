//acende e apaga led com um butão
int led= 7;
int but = 9;
int ligado = 0; //armazena o estado do pido de entrada
void setup() {
 pinMode (led,OUTPUT);
 pinMode (but, INPUT);

}

void loop() {
  ligado = digitalRead(but);
  //verifica se esta liagdo
  if (ligado == HIGH)
    digitalWrite(led,HIGH);
  
  else
    digitalWrite(led,LOW);
  

}
