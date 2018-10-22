#define pinVRx A2
#define pinVRy A1
#define pinSW 5 

void setup() {
  pinMode(pinVRx,INPUT);  
  pinMode(pinVRy,INPUT);
  pinMode(pinSW,INPUT);
  Serial.begin(9600);
}

void loop() {
  int valorVRx = analogRead(pinVRx);
  int valorVRy = analogRead(pinVRy);
  bool statusSW = analogRead(pinSW);

  Serial.print("Valor VRX: ");
  Serial.print(valorVRx);
  Serial.print(" Valor VRy: ");
  Serial.print(valorVRy);

  if (statusSW){
    Serial.println(" Botao: [Solto]");
  }  else{
     Serial.println(" Butao: [Apertado] ");
  }
  }




