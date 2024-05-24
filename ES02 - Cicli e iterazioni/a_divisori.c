/* /** ******************************************************************************************
* \mainpage a_divisori.c
*
* @brief Scrivere un programma che, richiesto un numero intero, visualizzi tutti i suoi divisori.
* 
*
* @author Leonardo Savino
* @date 07/12/2022
*/
#include  <stdio.h> 
int main()
{
	int n, c;          // dichiaro le variabili
	
	printf ( " \n --Esercizio A Leonardo Savino-- \n\n " );
	
	printf ( "Inserisci un numero:" );	// richiesta input 
	scanf ( "%d" , &n);
	
	for (c = 2 ; c < n; c++)		
	{
		if (n%c == 0 )								 // controllo se l'indice e' un divisore
			printf ( "%d e' un divisore \n" , c);		
	}	
}
