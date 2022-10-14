/*
file: equazione3Grado.c
autore: Leonardo Savino
classe: 3°H
data: 05/10/2022
calcola il risultato di -ax^3 + bx^2 - cx + d leggendo dall'utente i valori di a, b, c, d e x
Input: a, b, c, d, x
Elaborazione: calcolo risultato
Output: risultato equazione
*/

#include <stdio.h>
#include <math.h>

int main() {
  float a, b, c, d, x;  //input
  float risultato;      //output
  
  printf(" risoluzione equazione -ax^3 + bx^2 - cx + d\n");   //stampa descrizione
  
  printf("Inserisci il valore di a: ");   //lettura primo coefficiente
  scanf("%f", &a);

  printf("Inserisci il valore di b: ");   //lettura secondo coefficiente
  scanf("%f", &b);
  
  printf("Inserisci il valore di c: ");   //lettura terzo coefficiente
  scanf("%f", &c);
  
  printf("Inserisci il valore di d: ");   //lettura quarto coefficiente
  scanf("%f", &d);
  
  printf("Inserisci il valore di x: ");   //lettura valore di x
  scanf("%f", &x);
  
  risultato = (-a*(pow(x,3)) + b*(pow(x,2)) - c*x + d); //calcolo del risultato
  
  printf("\n Il risultato e' %.2f", risultato);   //scrittura del risultato
  
  return 0;
}
