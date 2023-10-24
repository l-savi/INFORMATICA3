 #include <stdio.h>
 #define MAX 50
 
 void copia (FILE * filein, FILE *fileout); 
 
 
 int main (){
	
	char nomeFileIN [MAX+1];                                                                                                                                    
	char nomeFileOut [MAX+1];
	int err1, err2;
	char c;
	FILE *fileIn, *fileOut;
	printf ("inserisci nome file da leggere");
	scanf ("%s", nomeFileIN);
	printf ("nome del file destinazione");
	scanf ("%s", nomeFileOUT);
	err1 = fopen_s (&fileIn, nomeFileIN, "r");
	err2 = fopen_s (&fileOut, nomeFileOUT, "a");
	
	if ((err1+err2) == 0){
		while (!feon(fileIn)){
			c=fgetc (fileIn);
			fputc (c, FileOut);
		}
		fclose (fileIn);
		fclose (fileOut);
	} 
}
