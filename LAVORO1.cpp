/*
* \mainpage areaTrapezio.c
*
* @brief  Scrivi un programma che calcola l’area e il perimetro di un trapezio dopo aver letto i dati necessari
* Il progetto accetta solo numeri positivi e interi
* 
* @author Leonardo Savino
* @date 07/10/2022
*/

#include <stdio.h>
#include <math.h>

int main() {
  int baseM, basem, altezza;  //input
  float latoObliquo, diff;  //lavoro
  float area, perimetro;  //output
  
  //lettura dati
  printf("Inserisci il valore della base maggiore: "); 
  scanf("%d", &baseM);
  
  printf("Inserisci il valore della base minore: ");
  scanf("%d", &basem);


  printf("Inserisci il valore dell'altezza: ");
  scanf("%d", &altezza);
  
  area=(baseM+basem)*altezza/2.0; //calcolo area
  
  diff = baseM - basem;       // calcolo perimetro
  latoObliquo = sqrt(pow(diff, 2) + pow(altezza, 2));
  perimetro = baseM + basem + altezza + latoObliquo;
  
  
  //scrittura risultato
  printf("Area = %.2f", area);  
  printf("\nPerimetro = %.2f", perimetro);
  
  return 0;
 }

