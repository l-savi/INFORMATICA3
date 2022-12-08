/* ***************************************************************************************
* \mainpage f_BinarioDecimale.c
*
* @brief Scrivere un programma che converte un numero binario a 8 bit in un numero decimale. 
* L’utente inserisce le cifre del numero binario un bit alla volta, partendo dal bit 
* più significativo. Il programma dovrà visualizzare il numero decimale corrispondente. 
* Suggerimento: per calcolare le potenze di 2 utilizzare la funzione pow includendo la 
* libreria math.h.
*
* @autore Leonardo Savino
* @data 08/12/2022
*/

#include <stdio.h>     
#include <math.h>

int main()  
{
    printf("\n--Esercizio F Leonardo Savino--\n\n");

   
    int bit, n=0, i=7;

    printf("inserisci 8 bit\n");   

    do{
        scanf("%d", &bit);

        n += pow(2, i) * bit; 

        i--;    
    } while (i>-1);   

    printf("\nConversione in binario = %d\n", n);      
}