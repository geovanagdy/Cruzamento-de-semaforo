/*
Cruzamento de ruas e sem�foro de pedestres
Elaborado por: Geovana Soares Godoy
Data: 03/09/2020
Vers�o 1.0
Descri��o: Simula dois sem�foros de 3 fases em um cruzamento de ruas, juntamente com dois sem�foros de pedestre de duas fases.

********PINAGEM********
Sem�foro 1 	Sem�foro 2		Sem�foro 3		Sem�foro 4
12 - vermelho	9 - vermelho    6 - vermelho    4 - vermelho
11 - amarelo	8 - amarelo	5 - verde		3 - verde
10 - verde		7 - verde

*/
void setup() //inicia o arduino e � executado uma vez
{
  pinMode(12, OUTPUT);	//define o pino 12 como sa�da
  pinMode(4, OUTPUT);	     //define o pino 4 como sa�da
  pinMode(5, OUTPUT);	     //define o pino 5 como sa�da
  pinMode(7, OUTPUT);	     //define o pino 7 como sa�da
  pinMode(8, OUTPUT);	     //define o pino 8 como sa�da
  pinMode(6, OUTPUT);	     //define o pino 6 como sa�da
  pinMode(3, OUTPUT); 	//define o pino 3 como sa�da
  pinMode(9, OUTPUT); 	//define o pino 9 como sa�da
  pinMode(10, OUTPUT);	//define o pino 10 como sa�da
  pinMode(11, OUTPUT);	//define o pino 11 como sa�da
}

void loop() //inicia ap�s o setup e repete-se como um loop
{
  digitalWrite(12, HIGH);	//define a entrada 12 como alta
  digitalWrite(4, HIGH);	//define a entrada 4 como alta
  digitalWrite(5, HIGH);	//define a entrada 5 como alta
  digitalWrite(7, HIGH);	//define a entrada 7 como alta
  delay(3000);	//espere por 3000 milisegundos
  digitalWrite(7, LOW);	//define a entrada 7 como baixa
  digitalWrite(8, HIGH);	//define a entrada 8 como alta
  delay(2000);	//espere por 2000 milisegundos
  digitalWrite(8, LOW);	//define a entrada 8 como baixa
  digitalWrite(12, LOW);	//define a entrada 12 como baixa
  digitalWrite(5, LOW);	//define a entrada 5 como baixa
  digitalWrite(4, LOW);	//define a entrada 4 como baixa
  digitalWrite(6, HIGH);	//define a entrada 6 como alta
  digitalWrite(3, HIGH);	//define a entrada 3 como alta
  digitalWrite(9, HIGH);	//define a entrada 9 como alta
  digitalWrite(10, HIGH);	//define a entrada 10 como alta
  delay(3000);	//espere por 3000 milisegundos
  digitalWrite(10, LOW);	//define a entrada 12 como baixa
  digitalWrite(11, HIGH);	//define a entrada 11 como alta
  delay(2000);	//espere por 2000 milisegundos
  digitalWrite(11, LOW);	//define a entrada 11 como baixa
  digitalWrite(9, LOW);	//define a entrada 9 como baixa
  digitalWrite(3, LOW);	//define a entrada 3 como baixa
  digitalWrite(6, LOW);	//define a entrada 6 como baixa
}