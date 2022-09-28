/*
file: areaTriangolo.c
autore: Leonardo Savino
classe: 3°H                                
data: 28/09/2022
calcolo media di tre numeri
Input: num1, num2, num3
Elaborazione: Media
Output: media
*/


#include <stdio.h>

int main() 
{
  int num1, num2, num3;  //input
  int media; //output
  
  printf("Inserisci il primo numero: ");   //leggo num1
  scanf("%d", &num1);
  
  printf("Inserisci il secondo numero: ");   //leggo num2
  scanf("%d", &num2);
  
  printf("Inserisci il terzo numero: ");   //leggo num3
  scanf("%d", &num3);
  
  
  media = (num1 + num2 + num3)/3.0;  //calcolo la media
  
  printf("media = %.2f", media);  //stampa a schermo risultato
}
