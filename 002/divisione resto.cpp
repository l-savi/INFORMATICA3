/*
file: restoDivisione.c
autore: Leonardo Savino
classe: 3°H
data: 05/10/2022
Restituisci il resto della divisione tra due interi 
Input: n1, n2
Elaborazione: calcolo resto
Output: resto
*/

#include <stdio.h>

int main() 
{
  int n1, n2; //input
  int resto;  //output
  
  printf("Inserisci il primo numero: ");  //leggere primo numero
  scanf("%d", &n1);
  
  printf("Inserisci il secondo numero: ");  //leggere secondo numero
  scanf("%d", &n2);
  
  resto = n1 % n2;  //calcolo resto della divisione
  
  printf("Resto: %d", resto); //scrittura del risultato
  
  return 0;
}

