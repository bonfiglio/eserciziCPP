// https://codeboard.io/projects/65445
// https://projecteuler.net
#include <iostream> 
using namespace std; 

#include <iostream> 
using namespace std; 
int sommaMultipli3e5(int x) {
    int s=0;
    for(int i=0 ;i<x ; i++) 
      if (i%3==0 || i%5==0  )
       s +=i;
      return s; 
    
}
int sommaFibonacciPari(int x) {
    int s=0;
    int n=2 , nt; 
    int np=1;
    while( n<x ) {
      if (n%2==0)
       s +=n;
      nt=np;
      np=n;
      n += nt;
    }
    cout << s;
      return s; 
    
}
int grandeFattorePrimo(unsigned long x) {
   unsigned long s=x/2;
   unsigned long big=1;
   while (1<s) {
      if (x%s==0 && s==grandeFattorePrimo(s))
        return s;
    s--;
   }
   return x; 
    
}
int problema1() {
    int c;
    cout<< " MULTIPLI DI  3 e 5 " <<endl;
    cout << " la somma di tutti i numeri naturali  che precedono il 10 e che sono";
    cout << " multipli di 3 e 5 (3,5,6,9) =23";
    cout << " Trovare la somma dei numeri che precedono 1000";
    cin >> c ;
    if (c==sommaMultipli3e5(1000))
       cout << " Esatto";
    else
       cout << " Errato";
    
    return 0; 
    
}
int problema2() {
    int c;
    cout<< " Fibonacci " <<endl;
    cout << " sarie di termini dove ognuno è la somma dei precedenti partendo da 1,2,3,5,8....";
    cout << "Considerando i termini nella sequenza di Fibonacci i cui valori non superano i quattro milioni, ";
    cout << "trova la somma dei termini con valore pari.";
    cin >> c ;
    if (c==sommaFibonacciPari(4000000))
       cout << " Esatto";
    else
       cout << " Errato";
    
    return 0; 
    
}
int problema3() {
    int c;
    cout<<"I fattori primi di 13195 sono 5, 7, 13 e 29.";
    cout<<"Qual è il più grande fattore primo del numero 600851475143?";
    cin >> c ;
    cout << grandeFattorePrimo(600851475143);
  //  if (c==grandeFattorePrimo(13195))
       cout << " Esatto";
  //  else
       cout << " Errato";
    
    return 0; 
}   
int main() { //http://projecteuler.net
    problema3();
    
    return 0; 
    
}
