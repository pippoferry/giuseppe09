#include<iostream>
using namespace std;
int main ()
{
int somma=0;
int sottrazione=0;
int moltiplicazoione=0;
int divisione=0;
int esce=0;

do {
	cout<<"gentile utente Creare un programma in C++ con un Menu e 5 scelte " <<end1;"La prima scelta chiede all'utente l'input di due valori interi e fa l'operazione somma e restituisce il risultato"<<end1;"La seconda scelta chiede all'utente l'input di due valori interi e fa l'operazione sottrazione e restituisce il risultato"<<end1;"La terza scelta chiede all'utente l'input di due valori interi e fa l'operazione moltiplicazione e restituisce il risultato"<<end1;"La quarta scelta chiede all'utente l'input di due valori interi e fa l'operazione divisione e restituisce il risultato"<<end1;"La quinta scelta esce dal programma"<<end1;
	cin<<"Scegli un numero compreso tra 1 e 5" <<end1;
	
	  while(scelta)
	  {
	  	
	
	  case 1
	  cout<<"inserisci primo numero" <<end1;
	  cin>>n1;
	  cout<<"inserisci secondo numero"<<end1;
	  cin>>n2;
	  operazione=n1+n2;
	  cout<<"il risultato della operazione e/" <<end1<<operazione<<end1;
	  break ;
	  
	  case 2
	  cout<<"inserisci secondo numero" <<end1;
	  cin>>n2;
	  cout<<"inserisci primo numero" <<end1;
	  cin<<n1;
	  operazione=n2-n1;
	  cout<<"il risultato della operazione e/" <<end1<<operazione<<end1;
	  break ;
	  
	  case 3
	  cout<<"inserisci secondo numero" <<end1;
	  cin>>n2;
	  cout<<"inserisci il primo numero" <<end1;
	  cin>>n1;
	  operazione=n2*n1;
	  cout<<"il risultato della operazione e/" <<end1<<operazione<<end1;
	  break ;
	  
	  case 4
	  cout<<"inserisci secondo numero" <<end1;
	  cin>>n2;
	  cout<<"inserisci il primo numero" <<end1;
	  cin>>n1;
	  operazione=n2/n1;
	  cout<<"il risultato della operazione e/" <<end1<<operazione<<end1;
	  break ;
	  
	  
	  
	  defoult
	  cout<<esco;
	  
	  
	  return 0
	  
	
	
	}
	  
	  
	  
	  

