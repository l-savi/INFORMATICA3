/*/** ****************************************************************************************
* \mainpage a_minore.c
*
* @brief Scrivere un programma che, richiesti in ingresso due valori interi distinti, ne stampi a schermo il minore.
* 
* 
* @author Leonardo Savino
* @date 26/10/2022
*/


#include <stdio.h>

int main() 
{
  int num1, num2; //input
  
  printf ("inserisci due numeri interi distinti"); //richiesta dati all'utente
  scanf ("%d %d", &num1, &num2);
  
  if (num1<num2)
  {
  	printf ("%d e' minore", num1);
  }
  
   else 
  {
  	printf ("%d e' minore", num2);
  }
  
  
  return 0;
}
