#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
//fun��o
 
 void main (void){ 
  FILE *f;
  int lin=100;  // Declara��o das vari�veis
  int col=100;     
  int c;
  char texto[lin][col];
  char string[100];
  int i,j,x;
  f=fopen("teste.txt","r");
  if(f==NULL)
    printf("Erro na abertura do arquivo teste.txt"); // Arquivo vazio n�o ir� abrir
  else  
    printf("Conteudo do arquivo teste.txt\n\n"); // Abertura do arquivo txt.
    
  while(!feof(f))
{
  texto[lin][col]=fgetc(f);
  printf("%c", texto[lin][col]);
}
    
  printf("\n\nString a ser procurada:"); // Procura da string.
  gets(string);
 for(x=0;x=(c==string[100]);x++){  // Teste para localizar a string dentro do texto.
	printf("RESULTADO: ");
	printf("%d ",x);
    printf ( "linha " );
    printf ( "%d", i+1);
    printf ( " coluna " );
    printf ( "%d", j+1);
  }
    printf("\n\nFim do arquivo");
    
  fclose(f);
} 

