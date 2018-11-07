/*ESERCIZIO--------------------------------------------------
Dati 4 numeri interi in input:
(stampare a video ogni punto)
--esempio--
Inserisci il primo numero...
a) la somma e': La divsione e', la somma tra i due e':....
b)...
...
---------
a) calcolare la somma.
b) Trovare il maggiore dei 4 numeri.
c) Se il maggiore è PARI creare una matrice dove le righe saranno date dal SECONDO E QUARTO input 
d) Se è DISPARI creare una matrice dove le righe e colonne saranno date dal PRIMO E TERZO input 
e) Uscire dal programma solo con un controllo.
--------------------------------------------------------------*/

#include<stdio.h>
#include<stdlib.h>
main()
{ int controllo; 
do{

	system("cls");
	int a,b,c,d,somma,max,i;
	float divisione,somma2;
	printf("inserisci il primo numero: ");
	scanf("%d",&a);
	printf("inserisci il secondo numero: ");
	scanf("%d",&b);
	printf("inserisci il terzo numero: ");
	scanf("%d",&c);
	printf("inserisci il quarto numero: ");
	scanf("%d",&d);
	somma=a+b+c+d;
	printf("la somma e': ");
	printf("%d\n",somma);
	max=a;
	if(b>max)
	{ 
	max=b;
	}
	if(c>max)
	{
	max=c;
	}
	if(d>max)
	{   
	max=d;
	}
	printf("il maggiore e': %d\n",max);
	if(max%2==0)
	{
		for(i=0;i<b;i++)
		{ 
			for(int k=0;k<d;k++)
			{
				printf("%d",b);
			}printf("\n");	
		}printf("\n");
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	}else
	for(int j=0;j<a;j++)
	{ 
	for(int l=0;l<c;l++)
	{
	
		
		printf("%d",c);
		}printf("\n");
	}
	
	printf("premi 1 per uscire: ");
	scanf("%d",&controllo);
	
}while(controllo !=1);
}
