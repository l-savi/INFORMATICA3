/*
autore: Leonardo Savino 
classe: 3H
data: 3/10/2022
Leggi input con un valore corrispondente a un numero di secondi e lo trasforma in ore, minuti e secondi
Input: secondi
Elaborazione: calcolo ore, minuti e secondi
Output: ore, minuti, secondi
*/

#include <stdio.h>

int main ()
{
	int secondi; //input
	int minuti, ore; //output
	
	printf ("inserisci numero di secondi"); //inserire dati input
	scanf ("%d", &secondi); //lettura output
	
	minuti = (secondi-secondi %60) /60; //calcolo minuti totali
	ore = (minuti - minuti %60) /60; //calcolo ore totali
	secondi=secondi %60; //secondi effettivi, quelli che restano
	minuti=minuti %60; //minuti effettivi, quelli che restano 
	
	printf ("ore %d, minuti %d, secondi %d", ore, minuti, secondi); //stampa risultato
}
