/*
autore: Leonardo Savino 
classe: 3H
data: 5/10/2022
Scrivi un programma che visualizza il resto della divisione tra due numeri interi
Input: due num interi
Elaborazione: dividere due numeri interi
Output: resto della divisione
*/

#include <stdio.h>

int main ()
{
	int num1,num2 ; //input
	int resto; //output
	
	printf ("inserisci num1"); //inserire dati input
	scanf ("%d" , &num1); //lettura output
	printf ("inserisci num2"); //inseriredati input
	scanf ("%d" , &num2);
	
	resto = (num1 % num2); //divisione tra i due numeri interi visualizzando il resto
	
	printf ("resto %d, resto %d" ,resto);

}
