/* ***************************************************************************************
* \mainpage e_fattorialeNumero.c
*
* @brief Si scriva un programma che calcoli il fattoriale di un numero intero N dato dalla 
* tastiera. Si ricordi che il fattoriale di un numero n (simbolo n!) viene calcolato 
* con la seguente formula: n! = n ·(n–1)·(n–2)· ... ·2 ·1.
*
* @autore Leonardo Savino
* @data 08/12/2022
*/

#include <stdio.h>

int main()  
{
    printf("\n--Esercizio E Leonardo Savino-\n\n");

    
    int n, i;        

    printf("Inserisci un numero: ");  
    scanf("%d", &n);

    if(n>0) {                  
        for(i=n-1; i>0; i--) {
            n *= i;         
        }

        printf("\nIl fattoriale del numero inserito e' %d\n\n", n);    
    }
    else {
        printf("\nNon e' possibile calcolare il fattoriale di un numero negativo\n\n");   
    }
}