/*
//File: area triangolo
Autore:Leonardo Savino
Classe:3H
data: 26/09/2022

calcola l'area del triangolo 

Input: base, altezza
Elaborazione: calcolo area triangolo
Output: area
*/


#include <stdio.h> //printf,scanf

int main()
{
	//dichiariamo le due variabili input
	float base,altezza;//input
	float area; //output
	int ris;
	
	
	printf("Inserisci il valore base: "); //leggo valore base
	scanf("%f", &base);
	printf("Inserisci il valore altezza ");
	scanf("%f", &altezza);
	area= base*altezza / 2; //calcolo area 
	
	
	//Output: un numero intero
	printf ("il risultato e %f", area); //stampa a schermo risultato
	//termina il programnma
	return 0;
}

