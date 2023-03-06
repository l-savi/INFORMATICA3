/** ****************************************************************************************
* \mainpage a_.c
*
* @brief programma che utilizza funzioni e vettori
* 
* @author Leonardo Savino
* @date 30/11/2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

void carica(int[]);

void caricaRand(int[]);

void print(int[]);

int contaMultipli (int [], int);

void ordina (int []);

void scambia (int*, int*);

void carica(int[]);

void caricaRand(int[]);

void print(int[]);

int contaMultipli(int[], int);

int contaPrimi(int[]);

int ePrimo(int);

void ordina(int[]);

void scambia(int*, int*);


int main()
{
    int vettore[N], r;
    /*carica(vettore);
    print(vettore);*/
    caricaRand(vettore);
    print(vettore);
    r = contaMultipli(vettore, 2);
    printf("\n%d\n", r);
    r = contaPrimi(vettore);
    printf("\n%d\n", r);
    ordina(vettore);
    print(vettore);

}

void carica(int vett[])
{
    for(int i = 0; i<N; i++)
    {
        printf("\ninserisci il %d° valore: ", i+1);
        scanf("%d", &vett[i]);
    }
}

void caricaRand(int vett[])
{
    srand(time(NULL));
    for(int i = 0; i<N; i++)
    {
        vett[i] = rand()%50 + 1;
    }
}

void print(int vett[])
{
    for(int i = 0; i<N; i++)
    {
        printf("%d\t ", vett[i]);
    }
    printf("\n");
}

int contaMultipli(int v[], int x)
{
    int c=0;

    for(int i = 0; i<N; i++)
    {
        if(v[i]%x==0) c++;
    }
    return c;
}

int ePrimo(int x)
{
    int c=0;
    for(int i = 2; i<x/2; i++)
    {
        if(x%i==0) c++;
    }
    return  c;
}

int contaPrimi(int v[])
{
    int c=0, r;

    for(int i=0; i<N; i++)
    {
        r = ePrimo(v[i]);
        if(!r) c++;
    }
    return c;
}

void ordina(int v[])
{
    for(int i = 0; i<N-1; i++)
    {
        for(int j = i+1; j<N; j++)
        {
            if(v[i]>v[j]) scambia(&v[i], &v[j]);
        }
    }
}

void scambia(int *x, int *y)
{
    int z;
    z = *x;
    *x = *y;
    *y = z; 
}

