/*/** ****************************************************************************************
* \mainpage switch
*
* @brief Leggi un numero che indica il valore di temperatura, in gradi Celsius 
* e stampa un messaggio come da tabella a lato
* 
* @author Leonardo Savino
* @date 04/11/2022
* @version 1.0 04/11/22 Versione iniziale
*/


#include <stdio.h>

int main() 
{
	int main() 
{
	int num;
	
	printf ("inserisci una temperatura");
	scanf ("%d", &num);
	
	if (num<=10) 
	{
		num = (num>=0 && num<=10);
		printf ("la temperatura e' fredda %d", num);
	}
	
	else 
	if (num<=20)
	{
		num = (num>10 && num<=20);
		printf ("la temperatura e' ideale %d", num);
	}
	else
	if (num<=30)
	{
		num = (num>20 && num<=30);
		printf ("la temperatura e' calda %d", num);
	}
	else 
	if (num>30)
	{
		printf ("la temperatura e' molto calda %d", num);
	}
}
	
	

}
