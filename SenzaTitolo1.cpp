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

#define N 20
#define V 10
#define T 5

struct data {
    int gg;
    int mm;
    int aa;
} typedef data;

struct alunno {
    int matricola;
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

    alunno t;
    FILE * fp = fopen(file, "ab");

    for(int i = 0; i<T; i++)
    { 
        t.matricola = i+1;

        printf("inserisci cognome: ");
        scanf("%s", t.cognome);

        printf("inserisci nome: ");
        scanf("%s", t.nome);

        t.nascita.gg = rand()%30+1;
        t.nascita.mm = rand()%12+1;
        t.nascita.aa = rand()%30+1990;

        for(int j = 0; j<V; j++) {
            
            t.voti[j] = rand()%10+1;
        }

        fwrite(&t, sizeof(alunno), 1, fp);
    }
    fclose(fp);
}




void stampa(char file[])
{
    FILE * fp = fopen(file, "rb");
    alunno t;
    for(int i = 0; i<T; i++)
    {
        fread(&t, sizeof(alunno), 1, fp);

        printf("numero matricola: %d\n", t.matricola);
        printf("cognome: %s\n", t.cognome);
        printf("nome: %s\n", t.nome);
        printf("giorno di nascita: %d/%d/%d\n", t.nascita.gg, t.nascita.mm, t.nascita.aa);
        printf("voti-\n");
        for(int j = 0; j<V; j++){
            printf("%d\t", t.voti[j]);
        }
        printf("\n\n");
    }
    
}