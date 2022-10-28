/*/** ****************************************************************************************
* \mainpage b_uguali.c
*
* @brief Scrivere un programma che, richiesti due numeri interi qualsiasi, segnali se i due 
* numeri sono uguali; in caso contrario indichi il minore e il maggiore.
* 
* 
* @author Leonardo Savino
* @date 26/10/2022
* @version 1.0 26/10/22 Versione iniziale
*/


#include <stdio.h>

int main() 
{
	int num1, num2; //input
	
	printf ("inserisci due numeri interi qualsiasi");
	scanf ("%d %d", & num1, &num2);
	
	if(num1 == num2)
	{
		printf ("%d sono uguali", num1==num2);
	}
	else if (num1>num2)
	{
		printf ("%d maggiore\n", num1);
		printf ("%d minore", num2);
	} 
	else if (num2>num1)
	{
		printf ("%d minore\n", num1);
		printf ("%d maggiore", num2);
	}
	
	return 0;
}
