void setup()
{
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  digitalWrite(8, HIGH);

  tone (7, 262, 200); // toca o buzzer em Dó, em 262Hz

  delay(200); // deixa o buzzer tocando em 262Hz, e o led ativado por 200 milisegundos

  digitalWrite(8, LOW);

  tone (7, 330, 200); // toca o buzzer em Mi, em 330Hz

  delay(200); // deixa o buzzer tocando em 330Hz, e o led apagado por 200 milisegundos

}
