#include<stdio.h>
#include<stdlib.h>
main()
{
	system("cls");
	int n1,n2,righe=0, colonne=0;
	printf("inserisci il numero di righe: ");
	scanf("%d",&n1);
	printf("inserisci il numero di colonne: ");
	scanf("%d",&n2);
	printf("\n");
	for(int i=0;i<n1;i++) //stampo le righe
	{
		printf("%d \t",righe);
		righe++;
		
		for(int k=0;k<n2;k++)
		{
			printf("%d ",colonne);
			colonne++;
		}
		printf("\n");
	}
	system("pause"); return(0);
}
