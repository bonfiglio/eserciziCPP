#include<stdio.h>
#include<stdlib.h>
main()
{
	system("cls");
	int a,b,contC,contR,somma=0;
	printf("inserire il numero di righe: ");
	scanf("%d",&a);
	printf("inserire il numero di colonne: ");
	scanf("%d",&b);
	for(int i=0;i<a;i++) //stampo le righe
	{
		for(int k=0;k<b;k++) //stampo le colonne
		{
			somma=contC+somma;
			printf("%d\t",contC);
			contC++;
			
		}
			
			printf("-%d-",somma);
			//somma=0;
		printf("\n");
		
	}
	system("pause");
	return(0);
}
