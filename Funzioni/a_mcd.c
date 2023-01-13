/*/** ****************************************************************************************
* \mainpage a_mcd.c
*
* @brief scrivere una funzione che prende in input due numeri interi e restituisce il loro
* massimo comune divisore (MCD) utilizzando l'algoritmo di Euclide.
*  
* 
* 
* @author Leonardo Savino
* @date 13/1/2023
* @version 1.0 26/10/22 Versione iniziale
*/
#include <stdio.h>
#include <limits.h>


int MassimoComuneDivisore (int,int);
int Somma (int);
int SommaxInteri (int x);
int Massimo (int x);
int SommaDivisori (int x);
int areaRettangolo (int,int);


int main ()
{
	int r;
	int num1, num2;
	
	printf ("inserisci due numeri interi");
	scanf ("%d %d", &num1, &num2);
	r=MassimoComuneDivisori (num1, num2);
	printf ("Il Massimo Comune Divisore è %d", r);
}


int MassimoComuneDivisore (int x, int y){
	
		int c;
		float r;
	
			if (y>x) 
			{	c=x;
				x=y;
				y=c;
			}
					while (x!=0)
					{
						r = x%y;
						x=y;
						y=r;	
					}
	return x;
}
