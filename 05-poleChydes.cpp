#include <iostream>
#include <string>
using namespace std;
int main()
{
    string slovo;
    cout << "Vvedite slovo: ";
    cin >> slovo;
	char *CopSlova =new char[slovo.length()];
    for (int i = 0; i < slovo.length(); i++)
    {
		CopSlova[i]='-';
		cout<<CopSlova[i]<<" ";
    }
   int otgadano=0;
   for (int otgadano = 0; otgadano < slovo.length();) {
		cout << endl<<"Vvedite bukvy: ";
		char bukva;
		cin >> bukva;
		int postflag=0;
	
			for( int i = 0; i < slovo.length(); i++){
				if (bukva==slovo[i]){
					CopSlova[i]=bukva;
					cout<<CopSlova[i];
					otgadano++;
					}
				else{
					cout<<CopSlova[i]<<" ";
					postflag++;
					if(postflag==slovo.length()){
					cout<<"net tacoi bukvi";
					postflag=0;
					}
				}
			}
	
   }
   cout<<endl<<"OTGADALI! Eto slovo ";
   for(int i = 0; i < slovo.length(); i++)
	  { cout<<slovo[i];}
   cout<<endl;
   }
