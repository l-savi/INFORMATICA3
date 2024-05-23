/** ****************************************************************************************
* \mainpage a_divisoreNumero.c
*
* @brief programma che utilizza funzioni
* 
* @author Leonardo Savino
* @date 03/03/2023
*/

#include <stdio.h>
#include <stdlib.h>


/**
 * @brief Stampa a schermo tanti numeri della sequenza di fibonacci
 *        quanto è il parametro x
 *
 * @param x base
 * @return void
 */
void fibonacci(int);
void fibonacciTest(void);

/**
 * @brief Scrivere la funzione int pari_dispari(in numero), attraverso 
 *        sottrazioni successive determinare se il numero passato alla 
*         funzione è pari o dispari, restituire 0 se il numero è pari, 1 se dispari.
 *
 * @param x base
 * @return 1 se dispari, 0 se pari
 */
int pariDispari(int);
void pariDispariTest(void);

/**
 * @brief Scrivere una funzione che prende in input un numero 
 *        intero e determina se è un numero amico.
 *
 * @param x base
 * @return void
 */
int numAmici(int);
void numAmiciTest(void);

/**
 * @brief Calcola la somma di tutti i divisori del parametro
 *        
 * @param a numero
 * @return la somma dei divisori del numero
 */
int sommaDivisori(int);

/**
 * @brief Funzione menu
 */
 int menu(void);

int r;                   //variabile globale che contiene i risultati delle funzioni

int main()
{
    int c=1;

    while(c)
    {
        
        r = menu();

        switch(r)
        {
            case 1: 
                fibonacciTest();
                break;
            case 2: 
                numAmiciTest();
                break;
            case 3: 
                pariDispariTest();
                break;
            case 0:
                c = 0;
                break;
            default: 
                printf("\nhai sbagliato a digitare\n");
        }



        printf("\n\nPremi invio per continuare...");    
        getchar();
        getchar();
        system("clear");
    }

}

int menu()
{
    int r;

    printf("\nInserisci il numero corrispondente alle funzione da utilizzare\n");
    printf("\n1 - Sequenza di Fibonacci");
    printf("\n2 - Numeri Amici");
    printf("\n3 - Pari o Dispari");
    printf("\n0 - Esci");
    printf("\n\n. . . ");

    scanf("%d", &r);

    printf("\n\n");

    return r;
}


void fibonacci(int x)
{
    int a=0, b=1;                 //sono i due numeri precendenti della sequenza

    printf("%d\t%d\t", a,b);      //stampo i primi due numeri della sequenza

    for(int i = 0; i<x-2; i++)    //ciclo fino a x-2 perchè i primi due numeri li ho già stampati
    {
        if(a>b)
        {
            b+=a;
            printf("%d\t", b);
        }
        else 
        {
            a+=b;
            printf("%d\t", a);
        }
    }
}

void fibonacciTest(void)
{
    printf("Quanti numeri della sequenza vuoi visualizzare?\n");
    scanf("%d", &r);

    fibonacci(r);
}


int pariDispari(int x)
{
    while(x>1)
    {
        x-=2;
    }
    return x;
}

void pariDispariTest(void)
{
    printf("\nInserisci un numero: ");
    scanf("%d", &r);

    r = pariDispari(r);

    if(r) printf("\nDispari");
    else printf("\nPari\n");
}


int numAmici(int x)
{
    int y, r;       //y = conterrà la somma dei divisori di x, r = conterrà la somma dei divisori di y

    //calcolo la somma dei divisori di x escluso x
    y = sommaDivisori(x)-x;
    ////calcolo la somma dei divisori di y escluso y
    r = sommaDivisori(y)-y;
    //controllo se è un numero amico e restituisco vero (1) o falso (0)
    if (x==r) return y;
    else return 0;
}

void numAmiciTest(void)
{
    printf("\nInserisci un numero: ");
    scanf("%d", &r);

    r = numAmici(r);

    if(r) printf("\ne' il numero amico di %d", r);
    else printf("\nnon ha un numero amico\n");
}


int sommaDivisori(int x)
{
    int r = 0;  

    
    for(int i = 1; i<=x; i++)
    {
        if(x%i==0) 
            r += i;            //se l'indice del ciclo è un divisore, sommo  
    }

    return r;
}
