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


//funzione che trova il MCD tra due numeri
int MCD (int, int);

//funzione di somma
int Somma (int);

//funzione che somma x numeri inseriti
int SommaxInteri (int x);

//funzione che trova il massimo di x interi
int Massimo (int x);

//funzione che restituisce la somma dei divisori del parametro
int SommaDivisori (int x);

//funzione che presi in input base e altezza restituisce l'area
int areaRettangolo (int, int);

int menu (void)


int main ()
{
	int r;
	int num1, num2;
	
	Do
	{
		r=menu();
		switch (r)
		{
		case 0: printf ("uscita dal programma");
				break;
		
		case 1: printf ("inserisci primo numero")
				printf ("inserisci secondo numero")
		}
	}
	
	
	printf ("inserisci due numeri interi");
	scanf ("%d %d", &num1, &num2);
	r=MCD (num1, num2);
	printf ("Il Massimo Comune Divisore e' %d", r);

	
	
    //chiamata funzione sommaDivisori per la prima variabile
    r=SommaDivisori(num1);
    printf("\nSomma dei divisori di %d = %d\n", num1, r);
    
    
    
    //chiamata funzione sommaDivisori per la seconda variabile
    r=SommaDivisori(num2);
    printf("\nSomma dei divisori di %d = %d\n\n", num2, r);



    //chiamata funzione areaRettangolo
    r=areaRettangolo(num1, num2);
    printf("\narea di un rettangolo con base %d e altezza %d = %d\n\n", num1, num2, r);
    
   

}


int MCD (int x, int y){
	
	int c;
	float r;
	if(y>x)
	{
		c=x;
		x=y;
		y=c;
	}
	while (y!=0)
	{
		r = x%y;
		x=y;
		y=r;	
	}
	return x;
}


int SommaDivisori (int x){
		
	int r=0;
	int i;
		
	for (i=1; i<x; i++)
	{
		if (x%i==0)
			r+=i;
	}
	return r;
}


int areaRettangolo (int base, int altezza){

		
		int r;
		
		r = base*altezza;
		
	return r;
}
