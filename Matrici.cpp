#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#define R 4
#define C 3

void caricaMatriceZero (int[][C]);
void caricaMatrice (int[][C]);
void caricaMatriceRandom (int[][C]);
void stampaMatrice (int[][C]);
void stampaDiagonale (int [][C])

int main (){
	
	srand (time(NULL));
	int matrice [R][C]; 							//richiede parametro 
	caricaMatriceRandom (matrice);					
	stampaMatrice (matrice);						//il parametro passato per le funzioni
	caricaMatrice (matrice);
	stampaMatrice(matrice);
	stampaDiagonale(matrice);
	
}

void caricamatriceRand (int m[][C])
{
	for (int i=0; i<R; i++)
	{
		for (int j=0; j<C; j++)
		m [i][j] = rand () % 21+10;
	}
}

void stampaMatrice (int m[][C])
{	
	for (int i=0; i<R; i++)
	{
		for (int j=0; j<C; j++)
			printf ("%d\t", m[i][j]);
		printf("\n");
	}
}

void caricamatriceZero (int m[][C])
{	
	for (int i=0; i<R; i++)
	{
		for (int j=0; j<C; j++)
			m[i][j] = 0;
	}
}

void caricaMatrice (int m[][R])
{
	for (int i=0; i<R; i++)
	{
		for (j=0; j<C; j++){
			scanf ("%d" &matrice [i][j])
		}
	}
}

void stampaDiagonale (int m[][R])
{
	for (int i=0, i<R; i++){
		printf ("%d", m[i][i])
		
		for (int j=0; j<i+1; j++) printf ("\t");
	}
}
