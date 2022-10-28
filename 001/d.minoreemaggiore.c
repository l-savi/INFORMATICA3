/*/** ****************************************************************************************
* \mainpage d_minoreemaggiore.c
*
* @brief Scrivere un programma che, richiesti in ingresso tre valori interi distinti, ne 
* determini il minore e il maggiore.
* 
* 
* @author Leonardo Savino
* @date 28/10/2022
*/


#include <stdio.h>

int main()
{
	
  int a,b,c;	//input
  int max, min;	//output
  	
  printf("inserisci tre interi: ");		//dati richiesti
  scanf("%d%d%d", &a, &b, &c);
    
  if (a>b) {					
  	if (a>c) {									
  		max = a;								
  		if (c>b) {								
  			min = b;							
		  } else {								
		  	min = c;							
		  }										
	  } else {									
	  	max=c;									
	  	min=b;										
	  }											
  } else {						
  	if (b>c) {									
  		max = b;								
  		if (a>c) {								
  			min=c;								
		  } else {								
		  	min=a;								
			}									
	  } else {									
	  	max=c;									
	  	min=a;									
	  }											
  }													
  
  	
	printf("%d, %d", min, max);
	return 0;
}
