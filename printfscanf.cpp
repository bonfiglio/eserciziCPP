#include <stdio.h>
#include <stdlib.h>
main() //fa avvenire le funzioni del programmma 
{ 
system("cls");//pulisce la console
int n1,n2,sn,ms,dn;// sono le variabili
float n3,n4,an,pn,en;// sono le variabili float
printf("Inserisci il primo numero: ");//stampa quello inserito nelle virgolette
scanf("%d", &n1);//prende i dati di input
printf("Inserisci il secondo numero: ");
scanf("%d", &n2);
printf("Numeri: %d %d \n", n1,n2);
sn=n1+n2;//somma
printf("somma: %d \n", sn);
ms=n1*n2;//moltiplicazione
printf("moltiplicazione: %d \n", ms);
dn=n1/n2;//divisione
printf("divisione:%d \n",dn);

system("pause"); //mette in pausa il programma 
system("cls"); 

printf("Inserisci il primo numero: ");
scanf("%f", &n3);
printf("Inserisci il secondo numero: ");
scanf("%f", &n4);
printf("Numeri: %f %f \n", n3,n4);
an=n3+n4;
printf("somma: %f \n", an);
pn=n3*n4;
printf("moltiplicazione: %f \n", pn);
en=n3/n4;
printf("divisione:%f \n",en);













}
