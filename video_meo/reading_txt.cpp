/****************************************************************
	Name: reading_txt.cpp
	Copyright: 2021 (c)
	Author: LY THANH LONG
	Date: 
	Description:
	1. file : input, output.
	2. password.
*****************************************************************/
#include<iostream>
#include<string>
#include<fstream>
#include <windows.h> 
#include"Graphics.h"
using namespace std;
void reading(fstream &file_in)
{
    string input_file;
    while (!file_in.eof())
    { 
        getline(file_in,input_file);
        cout<<input_file<<endl;
        Sleep(20);
    }
    file_in.close();
}
//info
void reading_info_1(fstream &file_in)
{
	file_in.open("INFOR_1.txt",ios::in);
	textcolor(8);
	reading(file_in);
}
void reading_info_2(fstream &file_in)
{
	file_in.open("INFOR_2.txt",ios::in);
	textcolor(5);
	reading(file_in);
}
//image
void reading_image_dtu(fstream &file_in)
{
	file_in.open("DTU.txt",ios::in);
	textcolor(12);
	reading(file_in);
}
void reading_image_long(fstream &file_in)
{
	file_in.open("image_long_1.txt",ios::in);
	textcolor(7);
	reading(file_in);
}
void reading_image_1(fstream &file_in)
{
	file_in.open("image_1.txt",ios::in);
	//textcolor(7);
	reading(file_in);
}
void reading_image_2(fstream &file_in)
{
	file_in.open("image_2.txt",ios::in);
	textcolor(11);
	reading(file_in);
}
void reading_image_3(fstream &file_in)
{
	file_in.open("image_3.txt",ios::in);
	textcolor(112);
	reading(file_in);
}
void reading_image_4(fstream &file_in)
{
	file_in.open("image_4.txt",ios::in);
	textcolor(113);
	reading(file_in);
}
void reading_image_5(fstream &file_in)
{
	file_in.open("image_5.txt",ios::in);
	textcolor(14);
	reading(file_in);
}
void reading_image_6(fstream &file_in)
{
	file_in.open("image_6.txt",ios::in);
	textcolor(7);
	reading(file_in);
}
void reading_image_7(fstream &file_in)
{
	file_in.open("image_7.txt",ios::in);
	textcolor(5);
	reading(file_in);
}
void reading_image_the_end(fstream &file_in)
{
	file_in.open("image_the_end.txt",ios::in);
	textcolor(251);
	reading(file_in);
}
void loading(int time)
{
	char a = 177,b = 219;
	cout<<" "<<endl;
	for(int i = 0; i < 25; i++)
	{
		cout << a;
	}
	cout<<"\r ";
	for(int i = 0;i<25;i++)
	{
		cout << b;
		Sleep(time);
	}
	cout<<endl;
}
void password()
{
	int time = 0;
	int lock_account = 0;
	int lock_time = 3;
	const char x1 = 177;
	const char x2 = 219;
	const char x3 = 254;
	//const string xx = &temp;
	string l = "";
	string n = "";
	string account ="meo";
	string password_ ="1";
	do
	{
		system("cls");
		//Acount
		do
		{
			/*output ======LogIn============*/
			for(int i = 0 ; i < 30; i++)
			{
				Sleep(1);
				cout<<x3;
				if(i == 14)
				{
					cout<<"LogIn";
				}
			}
			cout<<"\nAccount: ";
			//check Account == NULL
			getline(cin,l);
			if(l == "")
			{
				cout<<"\nAccount cannot be left blank !"<<endl;
				system("pause");
				system("cls");
			}
		}while(l == "");//Account
		
		//password
		do
		{
			cout<<"\nPassword: ";
			getline(cin,n);
			for(int i = 0;i<35;i++){cout<<x3;}
			//check password != NULL
			if(n == "")
			{
				cout<<"\nPassword cannot be left blank !"<<endl;
				system("Pause");
				system("cls");
				/*output ======LogIn============*/
				for(int i = 0 ; i < 30; i++)
				{
					Sleep(1);
					cout<<x3;
					if(i == 14)
					{
						cout<<"LogIn";
					}
				}
				cout<<"\nAccount: "<<l<<endl;
			}
		}while(n == "");//password
		
		//check
		if(l != account || n != password_)
		{
			lock_time--;
			cout<<"\nWrong Account Or Password, Try Again ! ";
			cout<<"\n\tYou have "<<lock_time<<" logins left !\n\t\tEnter"<<endl;
			system("pause");
			if(lock_time < 1)
			{
				system("cls");
				lock_account++;
				cout<<"\nLog in to your account later ";
				cout<<"\n\t  Loading ";
				textcolor(11);
				loading(111);
				lock_time = 3;
				textcolor(7);
			}
			//lock_account == 3, lock 60s
			else if(lock_account == 2)
			{
				system("cls");
				cout<<"\nYour account has been locked in ";
				cout<<"\n\t  Loading";
				textcolor(12);
				loading(500);
				textcolor(7);
				l = n ="";
				lock_account = 0;
				lock_time = 3;
			}
		}
	}while(l != account || n != password_);
	system("cls");
	cout<<"\n\tLogged In Successfully !";
	cout<<"\nThe program is loading data, please wait.";
	cout<<"\n\t\tLoading \n";
	cout<<"\t";
	for(int i = 0; i < 25; i++)
	{
		cout <<x1;
	}
	cout<<"\r\t";
	for(int i = 0;i<25;i++)
	{
		textcolor(2);
		cout <<x2;
		Sleep(300);
	}
	textcolor(7);
	system("cls");
}
void reding_all_file()
{
	fstream dtu,long_,f1,f2,a1,a2,a3,a4,a5,a6,a7,the_end;
	reading_info_1(f1);
	reading_info_2(f2);
	reading_image_dtu(dtu);
	reading_image_long(long_);
	reading_image_1(a1);
	reading_image_2(a2);
	reading_image_3(a3);
	reading_image_4(a4);
	reading_image_5(a5);
	reading_image_6(a6);
	reading_image_7(a7);
	reading_image_the_end(the_end);
}
int main(int argc, char const *argv[])
{
	password();
	reding_all_file();
	return 0;
}
