#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()

{
		float nota[4], media, soma=0;
		int acimaMedia=0, i;
		
		printf("DIGITE 40 NOTAS\n");
		
		for (i=0;i<4;i++)
		{
		printf ("NOTA %d - ", i+1);
		scanf ("%f", &nota[i]);
		soma = soma + nota[i];
		}
		
		media = soma/i;
		
		for (i=0;i<4;i++)
		{
			if(nota[i]>=media)
			{
			acimaMedia++;
			}
		}
		printf("\n");
		printf("\nA MEDIA DAS NOTAS FOI %.1f E %d ALUNOS FICARAM ACIMA DESSA MEDIA\n", media, acimaMedia);
		printf("\n");
		
		for (i=0;i<4;i++)
		{
			if(nota[i]<media)
			{
				printf("ALUNO %d nota %.1f\n", i+1,nota[i]);
			}else{
					printf("ALUNO %d nota %.1f *\n", i+1,nota[i]);
				 }
		}
		
		
	
	
	
}
