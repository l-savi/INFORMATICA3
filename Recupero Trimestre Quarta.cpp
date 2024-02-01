#include <stdio.h>
#include <string.h>
#define N 2

struct data
{
	int giorno;
	int mese;
	int anni;
}typedef data;

struct studente
{
	char cog[20];
	char nome[20];
	int voto[10];
	char sezione[1];
	int anno;
	data nascita;
}typedef studente;

void inserisciDati(	studente s[]);
void stampaDati(studente s[]);

int main()
{
	studente s1[N];
	
	inserisciDati(s1);
	stampaDati(s1);
}

void inserisciDati(	studente s[])
{
	
	for(int i=0;i<N;i++)
	{
		printf("\ninserisci nome:\t");
		scanf("%s",s[i].nome);
		
		printf("\ninserisci cognome:\t");
		scanf("%s",s[i].cog);
		
		printf("\ninserisci sezione:\t");
		scanf("%s",s[i].sezione);
		
		printf("\ninserisci anno:\t");
		scanf("%d",&s[i].anno);
		
		printf("\ninserisci giorno di nasctita:\t");
		scanf("%d",&s[i].nascita.giorno);
		
		printf("\ninserisci mese di nasctita:\t");
		scanf("%d",&s[i].nascita.mese);
		
		printf("\ninserisci anno di nasctita:\t");
		scanf("%d",&s[i].nascita.anni);
		
		for(int c=0;c<10;c++)
		{
			printf("\ninserisci il %d° voto:\t",c+1);
			scanf("%d",&s[i].voto[c]);
		}
	}
}

void stampaDati(studente s[])
{
	for(int i=0;i<N;i++)
	{
		printf("\nnome:\t%s",s[i].nome);
		printf("\ncognome:\t%s",s[i].cog);
		printf("\nsezione:\t%s",s[i].sezione);
		printf("\nanno:\t%d",s[i].anno);
		printf("\ngionro di nascita:\t%d",s[i].nascita.giorno);
		printf("\nmese di nascita:\t%d",s[i].nascita.mese);
		printf("\nanno dui nascita:\t%d\n",s[i].nascita.anni);
		for(int c=0;c<10;c++)
		{
			printf("\t%d° voto:\t%d",c+1,s[i].voto[c]);
		}
	}
}