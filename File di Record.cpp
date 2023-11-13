/** ****************************************************************************************
* 
* @author Leonardo Savino
* @date 12/11/2023
*
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define N 1
#define V 5
#define T 1

struct data {
    int gg;
    int mm;
    int aa;
} typedef data;

struct alunno {
    char cognome[N];
    char nome[N];
    data nascita;
    int voti[V];
} typedef alunno;

void carica(char[]);

void stampa(char[]);


int main()
{
    srand(time(NULL));

    carica("alunni.dat");

    stampa("alunni.dat");
    
}

void carica(char file[])
{

    alunno s1;
    FILE * err1 = fopen(file, "ab");

    for(int i=0; i<T; i++)
    {

        printf("inserisci cognome: ");
        scanf("%s", s1.cognome);

        printf("inserisci nome: ");
        scanf("%s", s1.nome);

        s1.nascita.gg = rand()%30+1;
        s1.nascita.mm = rand()%12+1;
        s1.nascita.aa = rand()%30+1990;

        for(int j=0; j<V; j++) {
            
            s1.voti[j] = rand()%10+1;
        }

        fwrite(&s1, sizeof(alunno), 1, err1);
    }
    fclose(err1);
}




void stampa(char file[])
{
    FILE * err1 = fopen(file, "rb");
    alunno s1;
    for(int i=0; i<T; i++)
    {
        fread(&s1, sizeof(alunno), 1, err1);
        
        printf("cognome: %s\n", s1.cognome);
        printf("nome: %s\n", s1.nome);
        printf("giorno di nascita: %d/%d/%d\n", s1.nascita.gg, s1.nascita.mm, s1.nascita.aa);
        printf("voti-\n");
        for(int j = 0; j<V; j++){
            printf("%d\t", s1.voti[j]);
        }
    }
    
}
