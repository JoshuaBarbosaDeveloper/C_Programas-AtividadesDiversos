#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){float prova1[8]={50,70,60,80,50,50,67,80};
		 	float prova2[8]={100,50,35,89,30,29,69,77};
			float media[8];
		 	int i;
									
			for (i=0; i<=7; i++) {media[i]=(prova1[i]+prova2[i])/2; printf("\n A media do aluno %d e de: %f, e ", i+1, media[i]);
								  if (media[i]>=70)printf("esse aluno passou!");
								  else printf("esse aluno nao passou!");}}

			

