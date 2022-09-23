/*
//File: somma interi
Autore:Leonardo Savino
Classe:3H
data: 21/09/2022

somma di due interi letti da tastiera e stampa a schermo del risultato

Input:due numeri interi
Elaborazione: somma
Output: un numero intero
*/


#include <stadio.h> //printf,scanf

int main()
{
	//dichiariamo le due variabili input
	int num1, num2;
	//e output
	int ris;
	
	//input: due numeri interi
	printf("Iserisci il primo numero ");
	scanf("%d", &num1);
	printf("Iserisci il secondo numero ");
	scanf("%d", &num2);
	//assegniamo le variabili ris il risultato della somma di num1+num2
	ris=num1 + num2
	//Output: un numero intero
	printf("il risultato e %d",ris);
	//termina il programnma
	return 0
}
