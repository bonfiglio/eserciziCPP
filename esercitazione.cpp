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
	int a,b,differenzaS=0,sommaC=0,moltiplicazioneS=0,differenzaC=0,moltiplicazioneC=0,sommaTot=0,differenza=0,moltiplicazione=0;

	printf("inserire numero di sms utilizzati: ");
	scanf("%d",&a);
	printf("inserire numero di chiamate utilizzati: ");
	scanf("%d",&b);
	if(a>sms)
	{		
		printf("hai superato gli sms dell' abbonamento %d\n",a);
		differenzaS=a-sms;
		printf("devi pagare: %d\n",differenzaS);
		moltiplicazioneS=differenzaS*Psms+moltiplicazione;
		printf("il pagamento e': %d\n",moltiplicazioneS);
		
	}else printf("devi pagare: %d",a);
	if(b>chiamata)
	{
		printf("hai superato le chiamate dell' abbonamento %d\n",b);
		differenzaC=b-chiamata;
		printf("devi pagare: %d\n",differenzaC);
		moltiplicazioneC=differenzaC*Chiamata;
		printf("il pagamento e': %d\n",moltiplicazioneC);
	}else printf("devi pagare: %d",b);
	sommaTot=moltiplicazioneS+moltiplicazioneC;
	printf("il pagamento totale e': %d",sommaTot);
	system("pause"); return(0);
	
	
}
