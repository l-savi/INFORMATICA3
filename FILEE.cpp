/** ****************************************************************************************
* 
* @author Leonardo Savino
* @date 23/10/2023
*
*/
#include <stdio.h>

void copiafile(char in[],char out[]);

int main()
{
	copiafile("in.txt","out.txt");
}

void copiafile(char fin[],char fout[])
{
    FILE * err1;
    FILE * err2;
    char c;
    err1=fopen(fin,"r");
    err2=fopen(fout,"a");

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
        printf("i file sono stati aperti correttamente\n");
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
        printf("file non aperti\n");
    }
}





void conta(char in[], char fout[]){
	
}
