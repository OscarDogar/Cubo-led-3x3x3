int Columnas[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
 
int Filas[] = {12, 11, 10};
bool cont=true;
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
  for(int i=0;i<9;i++){
    digitalWrite(Columnas[i],HIGH);
  RandLed(i);
  }
}

void RandLed(int j)
{
  if(cont){
    for(int i=0;i<3;i++){
      digitalWrite(Filas[i],HIGH);
      delay(100);
      digitalWrite(Filas[i],LOW);
    }
     cont=false;
  }else{
     for(int i=2;i>-1;i--){
      digitalWrite(Filas[i],HIGH);
      delay(100);
      digitalWrite(Filas[i],LOW);
    }
    cont=true;
  }
    digitalWrite(Columnas[j],LOW);
}
