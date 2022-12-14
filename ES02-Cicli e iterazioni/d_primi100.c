/* * ********************************************** ****************************************
* \mainpage d_primi100.c
*
* @brief Scrivere un programma che stampi tutti i numeri primi compresi tra 1 e 100.
* Un numero è primo quando ha come divisore uno e sé stesso. Quindi è primo gruppo
* numero naturale maggiore di 1 che sia divisibile solamente per 1 e per sé stesso.
*
* @author Leonardo Savino
* @date 09/11/2022
*/

#include  <stdio.h> 

int main ()  
{
    printf ( " \n --Esercizio D Leonardo Savino-- \n\n " );
    
	int i1, i2, c= 1;        

    for (i1= 2 ; i1< 101 ; i1++) {        //tutti i numeri dal 2 al 100
        
        for (i2 = 2 ; i2<i1; i2++) {       //tutti i numeri dal 2 all'indice del primo ciclo
        	
           
            if (i1 % i2 == 0 )   //se i1 è divisibile per un numero diverso da se stesso o 1 metto la variabile di controllo a falso
                c=0;          
            
            
        }

        
       	 	{
				if (c)
            	printf ( " %d e' un numero primo \n " , i1);   // stampo il numero solo se la varibile di controllo è su vero
    		}
        
        c=1;   //riassegno il vero valore valore alla variabile di controllo
    }
}