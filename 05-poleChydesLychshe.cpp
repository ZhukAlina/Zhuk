#include <iostream>
#include <string>
using namespace std;

int
main ()
{
  string slovo;
  cout << "Vvedite slovo: ";
  cin >> slovo;
  char *CopSlova = new char[slovo.length ()];
  int FlagFlag = 0;
  for (int i = 0; i < slovo.length (); i++)
    {
      CopSlova[i] = '-';
      cout << CopSlova[i] << " ";
    }
  for (int otgadano = 0; otgadano < slovo.length ();)
    {
      if (FlagFlag == 1)
	break;
      else
	{
	  cout << endl << "Vvedite bukvy: ";
	  string bukva;
	  cin >> bukva;
	  if (bukva.length () == 1)
	    {
	      int postflag = 0;
	      for (int i = 0; i < slovo.length (); i++)
		{
		  if (bukva[0] == slovo[i])
		    {
		      if (bukva[0] == CopSlova[i])
			cout << "Yzhe nazivaly takyu bukvy" << endl
			  for (int i = 0; i < slovo.length (); i++)
			  cout << CopSlova[i] << " ";
		      break;
		    }
		  if (bukva[0] != CopSlova[i])
		    {
		      CopSlova[i] = bukva[0];
		      cout << CopSlova[i] << " ";
		      otgadano++;
		    }
		}
	      else
	      {
		cout << CopSlova[i] << " ";
		postflag++;
		if (postflag == slovo.length ())
		  {
		    cout << "net tacoi bukvi";
		    postflag = 0;
		  }
	      }
	    }
	}
      else
      {
	cout << "vi reshyli otgadat slovo" << endl;
	for (int g = 0; g < slovo.length (); g++)
	  {
	    if (bukva[g] != slovo[g])
	      {
		cout << "nepravilno,vi proigrali" << endl;
		FlagFlag = 1;
		break;
	      }
	    else
	      {
		if (g == slovo.length () - 1)
		  {
		    cout << slovo[g] << endl << "OTGADALI! Eto slovo ";
		    for (int i = 0; i < slovo.length (); i++)
		      {
			cout << slovo[i];
		      }
		    cout << endl;
		    break;
		  }
		else
		  cout << slovo[g] << " ";
		FlagFlag = 1;
	      }
	  }
      }
    }
}

if (FlagFlag == 0)
  {
    cout << endl << "OTGADALI! Eto slovo ";
    for (int i = 0; i < slovo.length (); i++)
      cout << slovo[i];
    cout << endl;
  }
}
