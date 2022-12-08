/* ***************************************************************************************
* \mainpage d_
*
* @brief Scrivere un programma che stampi tutti i numeri primi compresi tra 1 e 100. 
* Un numero è primo quando ha come divisore uno e sé stesso. Quindi è primo ciascun 
* numero naturale maggiore di 1 che sia divisibile solamente per 1 e per sé stesso.
*
* @autore Leonardo Savino
* @data 07/12/2022
*/

#include <stdio.h>

int main()  
{
    printf("\n--Esercizio D Leonardo Savino--\n\n");

   
    int i1, i2, c=1;        

    for(i1=2; i1<101; i1++) {       
        
        for(i2 = 2; i2<i1; i2++) {   
        	
            
            if(i1 % i2 == 0) 
                c=0;          
            
        }

       
        if(c) 
            printf("%d e' un numero primo \n", i1);
        
       
        c=1;
    }
}