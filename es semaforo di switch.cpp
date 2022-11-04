/*/** ****************************************************************************************
* \mainpage switch
*
* @brief Leggi il valore di un numero compreso tra 0 e 2 che corrispondono agli stati di un 
* semaforo e visualizza una parola che lo traduce nel colore corrispondente
* 
* @author Leonardo Savino
* @date 04/11/2022
* @version 1.0 04/11/22 Versione iniziale
*/


#include <stdio.h>

int main() 
{
	int num;
	
	printf ("inserisci numero compreso tra 0 e 2");
	scanf ("%d", &num);
	
	switch (num)
	{
		case 0:
				printf ("e' rosso");
				break;
		case 1: 
				printf ("e' giallo");
				break;
		case 2: 
				printf ("e' verde");
				break;
				
		default: printf ("numero non compreso");
	}

}
