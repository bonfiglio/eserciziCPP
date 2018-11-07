#include<stdio.h>
#include<stdlib.h>
main()
{
	system("cls");
	int n1,n2,n3;
	printf("inserisci il primo numero: ");
	scanf("%d",&n1);
	printf("inserisci il secondo numero: ");
	scanf("%d",&n2);
	printf("inserisci il terzo numero: ");
	scanf("%d",&n3);
	
	if(n1>n2) 
	{ 
		if(n1>n3)
		{
			printf("il numero maggiore e': %d \n",n1);
		}	
		else printf("il numero maggiore e': %d \n",n3);
	}
	else if(n2>n3) 
	{ 
		printf("il numero maggiore e': %d \n",n2);
	}
	else printf("il numero maggiore e': %d \n",n3);

	system("pause"); return(0);
}
