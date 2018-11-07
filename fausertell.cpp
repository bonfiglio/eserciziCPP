/*
tariffe della fausertell 
la società fausertell fa pagare ogni sms 13 cent per i primi 100 sms del mese e 11 cent
 per i successivi.
ogni chiamata costa 50 cent.
La fausertell offre un abbonamento per cui,pagando una tariffa di 20 euro al mese offre 
400 sms e 400 chiamate gratis finiti questi si paga la tariffa base.
scrivere un programma in c che calcoli il totale da pagare per il mese di settembre
di un abbonamento.
*/
#include<stdio.h>
#include<stdlib.h>
#define Psms 13 
#define Ssms 11
#define Chiamata 50
#define Abbonamento 20
#define sms 400
#define chiamata 400

main()
{
	system("cls");
	int a,b,contSms=0,differenzaS=0,sommaC=0,TotS=0,differenzaC=0,TotC=0,sommaTot=0,differenza=0,moltiplicazione=0;
	
	printf("inserire numero di sms utilizzati: ");
	scanf("%d",&a);
	printf("inserire numero di chiamate utilizzati: ");
	scanf("%d",&b);
	printf("\n");
	printf("MESSAGGI \n");
	
	if(a>sms)
	{
		printf("hai superato gli sms dell' abbonamento utilizzandone %d\n",a);
		differenzaS=a-sms;
		printf("devi pagarne: %d\n",differenzaS);
		
			for(int i=0;i<differenzaS;i++)
			{
			TotS=differenzaS*Psms;
			contSms++;
			/*	if(contSms>100)
				{
					TotS=differenzaS*Ssms;
				}*/
				printf("il pagamento e': %d centesimi \n",TotS);
			}
		
		
	}else printf("Devi solo pagare il tuo abbonamento %d\n",Abbonamento);
/*
	printf("\n");
	printf("CHIAMATE \n ");
	if(b>chiamata)
	{
		printf("hai superato le chiamate dell' abbonamento %d\n",b);
		differenzaC=b-chiamata;
		printf("devi pagarne: %d\n",differenzaC);
		TotC=differenzaC*Chiamata;
		printf("il pagamento e': %d centesimi \n",TotC);
	}else printf("devi pagare: %d",b);
	
	
	*/
	
	
	system("pause"); return(0);
}
