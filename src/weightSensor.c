void setup(){
  Serial.begin(9600);//Inicia a comunicaço serial
  pinMode(3,OUTPUT);//Porta PWM do led
}

void loop(){
  int valor;
  valor = analogRead(A0);
  valor = map(valor,0,1024,0,255);
  Serial.println(valor);
  analogWrite(3,valor);
  delay(50);
}
