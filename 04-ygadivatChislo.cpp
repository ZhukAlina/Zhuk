#include <iostream>
using namespace std;
int main(){
	cout<<"Vvedite chislo ot 1 do 100" <<endl;
	int chislo;
	cin>>chislo;
	int nachalo=1, konec=100;
	int i=0;
	int ygadai;
	 do 
  { ygadai=(nachalo+konec)/2;
	  if(chislo<ygadai){
		  cout<<"N menshe "<< ygadai<<endl;
        konec=ygadai;}
	  
	  else{ if(chislo>ygadai){
		  cout<<"N bolshe "<< ygadai<<endl;
		  nachalo=ygadai;
	  }
	  else
	  { cout<<"N ravno "<< ygadai<<".  Popitoc "<<i+1<<endl;}}
	  i++;
  }
	 while (chislo != ygadai) ;  
  
	 
	return 0;
}
