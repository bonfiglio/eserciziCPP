#include<stdio.h>
#include<stdlib.h>
main()
{
 system("cls");
 int n1,n2,righe,i,k,colonne;
	printf("inserisci numero di righe: ");
 	scanf("%d",&n1);
	printf("inserisci numero di colonne: ");
 	scanf("%d",&n2);
 	for(int i=0;i<n1;i++) //stampo le righe
	{
		//printf("%d \t",righe);
		righe++;
		for(int k=0;k<n2;k++) //stampo le colonne
		{
			printf("%d\t",colonne);
			colonne++;
		}
		printf("\n");
	}
}
