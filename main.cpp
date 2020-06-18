#include <cstdlib>
#include <iostream>
using namespace std;
  
void zamiana(int liczba)
{
  	int i=0,tab[100];
  	while(liczba)
  	{
   		tab[i++]=liczba%2;
   		liczba/=2;
  	}
  	for(int l=i-1;l>=0;l--)
	cout<<tab[l];
}
  
int main()
{
  int liczba;
  
  cout<<"Podaj liczbe w sytemie dziesientnym: ";
  cin>>liczba;
  cout<<liczba<<"Liczba po zamianie na system binarny: ";
  zamiana(liczba);
  
  return 0;
}
