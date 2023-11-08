/** ****************************************************************************************
* 
* @author Leonardo Savino
* @date 08/11/2023
*
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Scrivi  un  programma  che  esegue  la  copia  di  un  file  di  testo.
//Il  programma  legge  carattere per carattere il contenuto del file in.txt e lo ricopia nel file out.txt. 
void copiaFile(char[], char[]);



int main(int argc, char *argv[])
{
    if (argc != 3) {
        printf("Utilizzo: %s [input_file] [output_file]\n", argv[0]);
        return 1;
 	   }

 	  char *input_file = argv[1];
  	  char *output_file = argv[2];


    copiaFile(input_file, output_file);
}


void copiaFile(char fIn[], char fOut[])
{
    // apro file In e Out
    FILE * puntIn = fopen(fIn, "r");
    FILE * puntOut = fopen(fOut, "w");

    char c; 

    // finché il file In non è finito
    while(!feof(puntIn))
    {
        c = getc(puntIn);

        //copio prossimo carattere in Out
        if (c!=EOF) putc(c, puntOut);
    }

    fclose(puntIn);
    fclose(puntOut);
}


