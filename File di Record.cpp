/** ****************************************************************************************
* 
* @author Leonardo Savino
* @date 19/11/2023
*
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define N 5
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

int conta(char[], char[]);

void stampaAlt(char[]);

int trova(char[], char[]);

int contaRecord(char[]);

int trovaPrimo(char[], char[]);

int trovaUltimo(char[], char[]);

int contaRecord(char[]);

int modifica  (char[], char[], char[]);

void modificaRecordN(char[], int);


int main()
{
    int r;

    srand(time(NULL));

    carica("alunni.dat");

    stampa("alunni.dat");

    r = conta("alunni.dat", "savino");
    printf("\nsavino: %d\n", r);

    stampaAlt("alunni.dat");

    r = trova("alunni.dat", "savino");
    printf("\nposizione savino: %d\n", r);
    
        r = trovaPrimo("alunni.dat", "savino");
    printf("\nprima posizione savino: %d\n", r);

    r = trovaUltimo("alunni.dat", "savino");
    printf("\nultima posizione savino: %d\n", r);

    r = contaRecord("alunni.dat");
    printf("\ndimensione file: %d record\n", r);


    r = modifica("alunni.dat", "savino", "savi");
    printf("\ncognomi cambiati: %d record\n", r);

    modificaRecordN("alunni.dat", 3);

    stampaAlt("alunni.dat");
    
}

void carica(char file[])
{

    alunno t;
    FILE * err1 = fopen(file, "ab");

    if(err1!=NULL){
        for(int i=0; i<T; i++)
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

            fwrite(&t, sizeof(alunno), 1, err1);
        }
        
    }
    fclose(err1);
}


void stampa(char file[])
{
    FILE * err1 = fopen(file, "rb");
    alunno t;
    if(err1!=NULL){
        while(!feof(err1))
        {
            fread(&t, sizeof(alunno), 1, err1);

            printf("numero matricola: %d\n", t.matricola);
            printf("cognome: %s\n", t.cognome);
            printf("nome: %s\n", t.nome);
            printf("giorno di nascita: %d/%d/%d\n", t.nascita.gg, t.nascita.mm, t.nascita.aa);
            printf("-voti-\n");
            for(int j = 0; j<V; j++){
                printf("%d\t", t.voti[j]);
            }
            printf("\n\n");
        }
    }
    fclose(err1);
}

int conta(char file[], char z[])
{
    FILE * err1 = fopen(file, "rb");

    alunno t;
    int c = 0;

    if(err1 != NULL){
        while(!feof(err1))
        {
            fread(&t, sizeof(alunno), 1, err1);

            if(strcmp(t.cognome, z) == 0) c++;
        }
    }
    fclose(err1);

    return c;
}


void stampaAlt(char file[])
{
    FILE * err1 = fopen(file, "rb");
    alunno t;
    int m = 0, max = 0, min = 10;

    if(err1!=NULL){
        while(!feof(err1))
        {
            fread(&t, sizeof(alunno), 1, err1);
            
            printf("cognome: %s\n", t.cognome);
            for(int j = 0; j<V; j++)
            {
                m+=t.voti[j];

                if(max < t.voti[j]) max = t.voti[j];

                if(min > t.voti[j]) min = t.voti[j];
            }

            m/=V;

            printf("media dei voti: %d\n", m);
            printf("massimo dei voti: %d\n", max);
            printf("minimo dei voti: %d\n", min);

            printf("\n\n");

            m = 0;
            max = 0;
            min = 10;
        }
    }
    fclose(err1);
}

int trova(char file[], char nome[])
{
    FILE * err1 = fopen(file, "rb");

    alunno buffer;
    int c=-1;

    if(err1!=NULL)
        while(!feof(err1))
        {
            fread(&buffer, sizeof(alunno), 1, err1);

            if(strcmp(buffer.cognome, nome)==0) 
            {
                c = ftell(err1) / sizeof(alunno);
            }
        }

    return c;
    fclose(err1);
}


int trovaPrimo(char file[], char nome[])
{
    FILE * err1 = fopen(file, "rb");

    alunno buffer;
    int c=-1;

    if(err1!=NULL)
        while(!feof(err1))
        {
            fread(&buffer, sizeof(alunno), 1, err1);

            if(strcmp(buffer.cognome, nome)==0) 
            {
                c = ftell(err1) / sizeof(alunno);
            }
        }

    return c;
    fclose(err1);
}

int trovaUltimo(char file[], char nome[])
{
    FILE * err1 = fopen(file, "rb");

    alunno buffer;
    int c=-1;

    if(err1!=NULL)
        while(!feof(err1))
        {
            fread(&buffer, sizeof(alunno), 1, err1);

            if(strcmp(buffer.cognome, nome)==0) 
            {
                c = ftell(err1) / sizeof(alunno);
            }
        }

    return c;
    fclose(err1);
}

int contaRecord(char file[])
{
    FILE *err1 = fopen(file, "rb");

    int d = -1;

    if(err1!=NULL)
    {
        fseek(err1, 0, SEEK_END);
        d=ftell(err1);
    }

    return d/sizeof(alunno);

}


int modifica(char file[], char c1[], char c2[])
{
    FILE * err1 = fopen(file, "rb+");
    alunno buffer;
    int c = 0;

    if(err1!=NULL){
        while(!feof(err1))
        {
            fread(&buffer, sizeof(alunno), 1, err1);
            if(strcmp(buffer.cognome, c1)==0)
            {
                strcpy(buffer.cognome, c2);
                fseek(err1, -sizeof(alunno), SEEK_CUR);
                fwrite(&buffer, sizeof(alunno), 1, err1);
                c++;
            }
        }
    }
    fclose(err1);
    return c;
}

void modificaRecordN(char file[], int n)
{
    FILE * err1 = fopen(file, "rb+");
    alunno buffer;

    if(err1!=NULL){      
            
        printf("inserisci cognome: ");
        scanf("%s", buffer.cognome);

        buffer.nascita.gg = rand()%30+1;
        buffer.nascita.mm = rand()%12+1;
        buffer.nascita.aa = rand()%30+1990;

        for(int j = 0; j<V; j++) {
                    
            buffer.voti[j] = rand()%10+1;
        }

        fseek(err1, sizeof(alunno) * (n-1), SEEK_SET);  
        fwrite(&buffer, sizeof(alunno), 1, err1);
            
        
    }
    fclose(err1);
}
