/* * **************************************************************************************
* \mainpage b_coppiesomma_15.c
*
* @brief Scrivere un programma che visualizzi tutte le coppie ordinate di numeri naturali
* la cui somma è 15.
*
* @autore Leonardo Savino
* @data 30/11/2022
*/

#include  <stdio.h>       

int  principale ()
{
	int a, b;           //variabili

	printf ( " \n --Esercizio B Leonardo Savino-- \n\n " );

    for (a=1 ; a<8 ; a++)               // iterazione con il primo addendo, il limite è di 8 per non ripetere le stesse somme

        for (b=1 ; b<15 ; b++)         //secondo addendo

            if (a+b==15 )                      // stamoa risultato se la somma e' 15
                printf ( "%d e %d \n" , a, b);
            
            
}