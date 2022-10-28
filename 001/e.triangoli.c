/*/** ****************************************************************************************
* \mainpage e.triangoli.c
*
* @brief Scrivere un programma che, lette le misure dei lati di un triangolo, visualizzi se il 
* triangolo è equilatero, isoscele o scaleno [ref]
* 
* 
* @author Leonardo Savino
* @date 28/10/2022
*/


#include <stdio.h>

int main() 
    {
	
           float a,b,c; //input
	
	       printf("Inserisci i valori dei tre lati:\n"); //richiesta dati
	       scanf("%f%f%f", &a,&b,&c);
	
	       if (a==b || b==c || c==a ) 
	       	if (a==b && b==c)
		    	printf("E' un triangolo equilatero");
		    	
		     else
			     printf("E' un triangolo isoscele");
			     
        	else 
	        	printf("E' un triangolo scaleno");

   return 0;
   }
 	
