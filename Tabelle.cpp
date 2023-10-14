/** ****************************************************************************************
* 
* @author Leonardo Savino
* @date 13/10/2023
*
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define N 20
#define V 10
#define T 5

struct s_data {
    int gg;
    int mm;
    int aa;
} typedef s_data;

struct s_alunno {
    int matricola;
    char cognome[N];
    char nome[N];
    s_data nascita;
    int voti[V];
} typedef s_alunno;

void caricaTab(s_alunno[]);

void stampaTab(s_alunno[]);

int ricercaCog(s_alunno[], char[]);

int stampaMedia(s_alunno[]);

int studenti10(s_alunno[]);

void caricaTabella (s_alunno[]);
void caricaRecord(s_alunno*);

void stampaTabella(s_alunno[]);
void stampaRecord(s_alunno);

void ordinaTabella(s_alunno[]);




int main()
{
    srand(time(NULL));

    s_alunno tab[T];
    char a[N];
    int r;

    caricaTab(tab);

    stampaTab(tab);

    printf("\n cognome da cercare: ");
    scanf("%s", a);

    r = ricercaCog(tab, a);
    if(r!=-1) printf("\n\ncognome trovato: %s\n\n", tab[r].cognome);
    else printf("cognome non trovato\n\n");

    r = stampaMedia(tab);
    printf("\n %d hanno la media dei voti >= 6\n", r);

    r = studenti10(tab);
    printf("\nstudenti con almeno un 10: %d\n\n", r);

    ordinaTabella(tab);
    stampaTab(tab);
}

void inserimento(s_alunno t[])
{
    for(int i = 0; i<T; i++)
    {
        
        t[i].matricola = i+1;

        printf("inserisci cognome: ");
        scanf("%s", t[i].cognome);

        printf("inserisci nome: ");
        scanf("%s", t[i].nome);

        t[i].nascita.gg = rand()%30+1;
        t[i].nascita.mm = rand()%12+1;
        t[i].nascita.aa = rand()%30+1990;

        for(int j = 0; j<V; j++) {
            
            t[i].voti[j] = rand()%10+1;
        }
    }
}


void stampa(s_alunno t[])
{
    for(int i = 0; i<T; i++)
    {
        printf("numero matricola: %d\n", t[i].matricola);
        printf("cognome: %s\n", t[i].cognome);
        printf("nome: %s\n", t[i].nome);
        printf("giorno di nascita: %d/%d/%d\n", t[i].nascita.gg, t[i].nascita.mm, t[i].nascita.aa);
        printf("-voti-\n");
        for(int j = 0; j<V; j++){
            printf("%d\t", t[i].voti[j]);
        }
        printf("\n\n");
    }
    
}

int ricercaCog(s_alunno t[], char cog[])
{
    for(int i = 0; i<T; i++)
    {
        if(strcmp(t[i].cognome, cog) == 0) return i;
    }
    return -1;
}

int stampaMedia(s_alunno t[])
{
    int c = 0;
    for(int i = 0, m=0; i < T; i++, m=0)
    {
        for(int j = 0; j<V; j++)
            m += t[i].voti[j];
        m /= V;
        if(m>=6) c++;
        printf("\nmedia studente %s: %d", t[i].cognome, m);
    }
    return c;
}

int studenti10(s_alunno t[])
{
    int c = 0;
    for(int i = 0; i<T; i++)
    {
        for(int j = 0; j<V; j++)
            if(t[i].voti[j] == 10){
                c++;
                j = V;
            }
    }
    return c;
}

void ordinaTabella(s_alunno t[])
{
    s_alunno z;
    for(int i = 0; i<T-1; i++)
    {
        for(int j = i+1; j<T; j++)
        {
            if(strcmp(t[i].cognome, t[j].cognome) > 0)
            {
                z = t[i];
                t[i] = t[j];
                t[j] = z;
            }
        }
    }
}

void caricaTabella(s_alunno t[])
{
    for(int i = 0; i<T; i++)
    {
        caricaRecord(&t[i]);
    }
}


void caricaRecord(s_alunno *st1)
{
    printf("inserisci numero di matricola: ");
    scanf("%d", &st1->matricola);

    printf("inserisci cognome: ");
    scanf("%s", st1->cognome);

    printf("inserisci data di nascita\n");
    printf("giorno: ");
    scanf("%d", &st1->nascita.gg);
    printf("mese: ");
    scanf("%d", &st1->nascita.mm);
    printf("anno: ");
    scanf("%d", &st1->nascita.aa);

    printf("inserisci voti\n");
    for(int i = 0; i<V; i++) {
        printf(">>> ");
        scanf("%d", &st1->voti[i]);
    }
}

void stampaTabella(s_alunno t[])
{
    for(int i = 0; i<T; i++)
    {
        stampaRecord(t[i]);
    }
}

void stampaRecord(s_alunno st1)
{
    printf("numero matricola: %d\n", st1.matricola);
    printf("cognome: %s\n", st1.cognome);
    printf("giorno di nascita: %d/%d/%d\n", st1.nascita.gg, st1.nascita.mm, st1.nascita.aa);
    printf("-voti-\n");
    for(int i = 0; i<V; i++){
        printf("%d\t", st1.voti[i]);
    }
}