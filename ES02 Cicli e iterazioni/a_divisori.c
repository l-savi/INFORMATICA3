/* /** ******************************************************************************************
* \mainpage a_divisori.c
*
* @brief Scrivere un programma che, richiesto un numero intero, visualizzi tutti i suoi divisori.
* 
*
* @autore Leonardo Savino
* @data 07/12/2022
*/
#include  <stdio.h> 
int main()
{
	int num, c;
	
	printf ("Inserisci un numero:");	// richiesta input
	scanf ( "%d" ,&num);
	
	for (c=2; c<num; c++)
		{
	
	 		if (num%c==0)								     // controllo se l'indice e' un divisore
			printf ("e' un divisore %d" , &num);
		}
}
