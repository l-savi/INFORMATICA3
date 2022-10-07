/*
mainpage <nome del progetto>

@brief <leggi 4 num coefficienti di un polinomio-ax3+bx2-cx3+d e valuta il suo valore in un puntox>
<specifiche del progetto>
<specifiche del collaudo>
 
@author <Leonardo Savino>
@date <7/10/2022> 
*/

#include <stdio.h>
#include <math.h>

int main ()
{
	float a, b, c ,d, x;   //input
	float risultato; //output
	
	printf ("risoluzione equazione ax3 + bx2 - cx3 + d\n"); //stampa descrizione
	
	printf("Inserisci il valore di a: ");   //lettura del primo coefficiente
    scanf("%f", &a);

    printf("Inserisci il valore di b: ");   //lettura del secondo coefficiente
    scanf("%f", &b);
  
    printf("Inserisci il valore di c: ");   //lettura del terzo coefficiente
    scanf("%f", &c);
  
    printf("Inserisci il valore di d: ");   //lettura del quarto coefficiente
    scanf("%f", &d);
  
    printf("Inserisci il valore di x: ");   //lettura del valore di x
    scanf("%f", &x);
  
    risultato = (-a*(pow(x,3)) + b*(pow(x,2)) - c*x + d); //calcolo risultato
  
    printf("\n Il risultato e' %.2f", risultato);   //scrittura del risultato
  
    return 0;
}































































