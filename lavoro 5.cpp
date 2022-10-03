/*
file:
autore: Leonardo Savino 
classe: 3H
data: 3/10/2022
calcolo area e perimetro del rombo, l'area del rettangolo avente le diagonali per lati, l'area di un quadrato che ha per lato il lato del rombo 
*/

#include <stdio.h>
#include <math.h>
int main ()


{
	float lato, d1; //input, lato, diagonale minore
	float d2; //calcolo diagonale maggiore
	float perimetro_rombo, area_rombo; area_rettangolo; area_quadrato; //output 
	
	printf ("inserisci il valore del lato del rombo"); //scanf del valore del lato
	scanf ("%d , &lato");
	printf ("inserisci il valore della diagonale del rombo"); //scanf del valore della diagonale 
	scanf ("%d, &diagonale1");
	
	perimetro_rombo = (lato *4); //calcolo del perimetro
	d2 = 2* (sqrt(lato*lato - (d1/2)*(d2/2))); //calcolo del diagonale maggiore del rombo
	
	area_rombo (d1*d2)/d2; //calcolo area del rombo
	
	area_rettangolo d1*d2; //calcolo area rettangolo
	
	area_quadrato lato*lato //calcola area quadrato
	
	return 0
	}
   
	

