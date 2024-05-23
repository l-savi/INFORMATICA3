/** ****************************************************************************************
* 
* @author Leonardo Savino
* @date 30/09/2023
*
*/

#include <stdio.h>
#include <string.h>

#define C 20
#define R 10


void caricaStr(char[][C]);					//nella funzione si chiedano all’utente R stringhe di lunghezza massima C-1


void stampaStr(char[][C]);					//stampa sul monitor le stringhe seguite dalla loro lunghezza. Curare la visualizzazione su monitor


int piuLunga(char[][C]);					// la funzione restituisce l’indice della riga dove è memorizzata la stringa più lunga e visualizza nel main la stringa


void scambia(char[][C], int, int);			/*nella funzione si scambiano tra di loro le stringhe di indice k e t .  
                                        	Eseguita la funzione la stringa della riga k+1 (indice k)  si trovi nella riga t+1 e quella della riga t+1 si trovi nella riga k+1 */


int primaAlfabeto(char[][C]);				// la funzione restituisce l’indice della stringa che è la prima in ordine alfabetico


void ordina(char[][C]);                     // terminata l’esecuzione della funzione, tutte le stringhe sono in ordine alfabetico


int main() {
    char stmat[R][C];
    int k;

    caricaStr(stmat);

    stampaStr(stmat);

    k = piuLunga(stmat);
    printf("\n\n\nparola piu'lunga = %d\n\n", k+1);

    scambia(stmat, 2, 3);
    stampaStr(stmat);

    k = primaAlfabeto(stmat);
    printf("\n\nprima parola in ordine alfabetico: %s\n\n", stmat[k]);

    ordina(stmat);
    stampaStr(stmat);


}


void caricaStr(char stmat[][C])
{
    for(int i = 0; i<R; i++)
    {
        printf("\n\ninserisci stringa %d (max 19 caratteri): ", i+1);
        scanf("%s", stmat[i]);
    }
}


void stampaStr(char stmat[][C])
{
    int l;
    printf("\n\n");
    for(int i = 0; i<R; i++)
    {
        l = strlen(stmat[i]);
        printf("\n\nstringa %d: ", i+1);
        printf("%s\nlunghezza: %d", stmat[i], l);
    }
    printf("\n\n");
}


int piuLunga(char stmat[][C])
{
    int max = 0;
    for(int i = 1; i<R; i++)
    {
        if(strlen(stmat[i])>strlen(stmat[max])) max = i;
    }
    return max;
}


void scambia(char stmat[][C], int k, int t)
{
    char x[C];
    strcpy(x, stmat[k]);
    strcpy(stmat[k], stmat[t]);
    strcpy(stmat[t], x);
}


int primaAlfabeto(char stmat[][C])
{
    int prima = 0;

    for(int i = 1; i<R; i++)
    {
        if(strcmp(stmat[prima], stmat[i]) > 0) prima = i;
    }
 
    return prima;
}


void ordina(char stmat[][C])
{
    for(int i = 0; i<R-1; i++)
    {
        for(int j = i+1; j<R; j++)
        {
            if(strcmp(stmat[i], stmat[j]) > 0)
            {
                scambia(stmat, i, j);
            }
        }
    }
}
