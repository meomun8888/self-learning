#include<iostream>
#include<string>
#include<fstream>

#include <unistd.h>
using namespace std;
void information()
{
	
	string l,n;
	string o = "lythanhlong";
	string a = "11122001";
	int s = 3;
	do
	{
		system("cls");
		cout<<"=============-LOG IN-=============";
		cout<<"\n\tAccount: ";
		getline(cin,l);
		cout<<"\n\tPassword: ";
		getline(cin,n);
		cout<<"\n==================================";
		if(l != o || n != a)
		{
			s--;
			cout<<"\nWrong Account Or Password, Try Again ! ";
			cout<<"\nYou have "<<s<<" logins left !"<<endl;
			if(s<1)
			{
				cout<<"\nRe-enter the account later ";
				int i = 10;
				while(i > 0)
				{
					
					cout<<i;
					i--;
				}
			}
			system("pause");
			cout<<endl;
		}
	} while(l != o || n != a);
	system("cls");
	cout<<"\nLogged In Successfully !";
	cout<<"\nThe program is loading data, please wait.";
	int i = 0;
	int z = 2;
	while(i <= 100)
	{
		cout<<"\nLoading "<<i<<" %";
		sleep(1);
		z++;
		i += 10;
	}
	system("cls");
}
int main()
{
	information();
	return 0;
}
