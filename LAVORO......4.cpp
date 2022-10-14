/*
file: secondi.c
autore: Leonardo Savino
classe: 3°H
data: 05/10/2022
Leggi in input un numero di secondi e trasformali in ora, minuti e secondi 
Input: secondi
Elaborazione: calcolo ore, minuti e secondi
Output: ore, minuti e secondi
*/

#include <stdio.h>

int main() {
  int secondiIniziali;  //input
  int ore, minuti, secondi;  //output
  
  printf("Inserisci il numero di secondi: ");   //richiesta input
  scanf("%d", &secondiIniziali);  //lettura input
  
  minuti = (secondiIniziali - secondiIniziali % 60) / 60; //calcolo minuti totali
  ore = (minuti - minuti % 60) / 60;  //calcolo ore
  secondi = secondiIniziali % 60;   //calcolo minuti effettivi
  minuti = minuti % 60;     //calcolo secondi effettivi
  
  printf("%d secondi = %d h, %d m, %d s", secondiIniziali, ore, minuti, secondi); //stampa il risultato
  
  return 0;
}
