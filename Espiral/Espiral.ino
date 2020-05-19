int Columnas[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
 
int Filas[] = {12, 11, 10};
int RandFila;     //Variable para fila aleatoria
int RandColumna;  //Variable para columna aleatoria
 
void setup()
{
  int contador;
 
  for (int contador = 0; contador < 9; contador++){
    pinMode(Columnas[contador], OUTPUT); }
 
  for (int contador = 0; contador < 3; contador++){
    pinMode(Filas[contador], OUTPUT); }
}
 
void loop()
{
  RandLed();
}
 
void RandLed()
{
  int cont=0;
  while(cont<3){
    digitalWrite(Filas[cont], HIGH);
    for(int i=0;i<9;i++){
      digitalWrite(Columnas[i], HIGH);
      delay(75);
      digitalWrite(Columnas[i], LOW);
    }
    digitalWrite(Filas[cont], LOW);
    delay(15);
    cont=cont+1;
  }
}
