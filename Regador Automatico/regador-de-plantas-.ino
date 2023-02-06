int water; //random variable 
void setup() {
  pinMode(3,OUTPUT); //pino de saída para placa de relé, isso enviará sinal para o relé
  pinMode(6,INPUT); //pino de entrada vindo do sensor de solo
}

void loop() { 
  water = digitalRead(6);  // lendo o sinal vindo do sensor de solo
  if(water == HIGH) // se o nível de água estiver cheio, corte o relé
  {
  digitalWrite(3,LOW); // baixo é cortar o relé
  }
  else
  {
  digitalWrite(3,HIGH); //alta para continuar provendo sinal e abastecimento de água
  }
  delay(400); 
}
