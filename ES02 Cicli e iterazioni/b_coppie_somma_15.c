/* ***************************************************************************************
* \mainpage c_
*
* @brief Scrivere un programma per calcolare la media aritmetica di una serie di numeri
* inserito da tastiera. L'introduzione del valore 0 indica il termine del caricamento
* dei dati.
*
* @autore Leonardo Savino
* @data 07/12/2022
*/

#include <stdio.h>

int main() 
{
    printf("\n--Esercizio C Leonardo Savino--\n\n");

	int n, c=0, somma=0;    
    float media=0;

    do 
    {                                           
        printf("Insersici un numero: ");
        scanf("%d", &n);

        media += n;

        if(n!=0) 
            c++;                                
    } while (n!=0);                         

    media /= c;                 //calcolo media

    printf("\nLa media dei numeri e' %.2f\n", media);
}