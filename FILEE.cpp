/** ****************************************************************************************
* 
* @author Leonardo Savino
* @date 23/10/2023
*
*/
#include <stdio.h>
int contal = -1, contar = 1, contap = 1;

void copiafile(char in[],char out[]);

void copianome(char in[],char out[]);

void conta(char in[]);

void contaparidispari(char in[], char out[], char out2[]);



int main()
{
	copiafile("in.txt","out.txt");
	copianome ("nomi.txt","NOMI2.txt");
	conta ("conta.txt");
	contaparidispari ("contadisp.txt");
}



void copiafile(char in[],char out[])
{
	FILE * err1;
    FILE * err2;
    char c;
    err1=fopen(in,"r");
    err2=fopen(out,"a");

    if(err1 != 0 && err2 != 0)
    {
        printf("i file sono stati aperti correttamente\n");
        while((c=fgetc(err1))!=EOF)
        {
            fputc(c,err2);
        }

        fclose(err1);
        fclose(err2);
    }
    else
    {
        printf("file non aperti\n");
    }

}    




void copianome(char in[], char out[])
{
    FILE * err1;
    FILE * err2;
    char c;
    err1=fopen(in,"r");
    err2=fopen(out,"a");

    if(err1 != 0 && err2 != 0)
    {
        printf("i file sono stati aperti correttamente");
        while((c=fgetc(err1))!=EOF)
        {
            if(c >='a' && c<='z')
            {
                c-=32;
            }
            fputc(c,err2);
        }

        fclose(err1);
        fclose(err2);
    }
    else
    {
        printf("file non aperti");
    }
}




void conta(char in[])
{
    int cont=0,contrighe=1,contparole=1;
    char p;
    FILE * err1;

    err1=fopen(in,"r");

    if(err1 != 0)
    {
        printf("il file e' stato aperto correttamente");

        while((p=fgetc(err1)) != EOF)
        {
            if(p==' ' || p=='\n')
            {
                contparole++;
            }

            if(p>='A' && p<='Z' || p>='a' && p<='z')
            {
                cont++;
            }

            if(p=='\n')
            {
                contrighe++;
            }
            

        }
    }
    else 
    {
        printf("file non aperto");
    }
    printf("i caratteri dentro il file sono %d\n",contal);
    printf("le parole dentro il file sono %d\n",contap);
    printf("le righe sono %d\n",contar);
}



void contaparidispari(char in[], char out1[], char out2[])
{
    char c;
    FILE * err1;
    FILE * err2;
    FILE * err3;

    err1=fopen(in,"r");
    err2=fopen(out1,"a");
    err3=fopen(out2,"a");

    if(err1 && err2 && err3 !=0)
    {
        printf("i file sono stati aperti correttamente\n");

        while((c=fgetc(err1))!= EOF)
        {
            if(c % 2== 0 && c != ' ')
            {
                if(c+1==' ')
                {
                    fputc(c,err2);
                    putc(' ', err2);
                }
                else
                {
                   putc(' ', err2);
                   fputc(c,err2); 
                }
            }
            
            if(c % 2== 1 && c != ' ')
            {
                if(c+1==' ')
                {
                    fputc(c,err3);
                    putc(' ', err3);
                }
                else
                {
                    putc(' ', err3);
                    fputc(c,err3);
                }    
            }
        }
    }
}
