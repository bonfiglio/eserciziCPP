//prendere 2 numeri da input, e se il primo e maggiore del secondo eseguire la divisione,
//in caso contrario la somma

#include<stdio.h>
#include<stdlib.h>
main()
{
	printf("CICLO IF: ");
	int n1,n2,dn,sn;
	printf("inserisci primo numero: ");
	scanf("%d",&n1);
	printf("inserisci secondo numero: ");
	scanf("%d",&n2);
	printf("i numeri sono: %d %d \n",n1,n2);
	if(n1>=n2)
	{
		printf("maggiore\n");
		dn=n1/n2;
		printf("divisione tra i numeri: %d %d e': %d \n",n1,n2,dn);	
	}
	else
	{
		printf("minore\n");
		sn=n1+n2;
		printf("somma: %d\n",sn);
	}
	
	system("cls");
	printf("CICLO FOR: ");
	int cont=0;
	for(int i=0;i>n1;i++)
	{
		cont++; 
		printf("valore contatore: %d \n", cont); 
	}
	
	system("pause"); return(0);
}
