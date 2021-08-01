#include<iostream>
#include<string>
#include<fstream>
#include <windows.h> 
//#include <unistd.h>
using namespace std;
void reading_file_infor_1()
{
	fstream FILE_IN;
    FILE_IN.open("INFOR.txt",ios::in);
    string infor_1;
    while (!FILE_IN.eof())
    { 
        getline(FILE_IN,infor_1);
        cout<<infor_1<<endl;
        Sleep(50);
    }
   // system("pause");
    FILE_IN.close();
}
void reading_file_infor_2()
{
	fstream FILE_IN;
    FILE_IN.open("INFOR_2.txt",ios::in);
    string infor_2;
    while (!FILE_IN.eof())
    {
        getline(FILE_IN,infor_2);
        cout<<infor_2<<endl;
        Sleep(50);
    }
   // system("pause");
    FILE_IN.close();
}
void reading_file_infor_3()
{
	fstream FILE_IN;
    FILE_IN.open("INFOR_3.txt",ios::in);
    string infor_3;
    while (!FILE_IN.eof())
    {
        getline(FILE_IN,infor_3);
        cout<<infor_3<<endl;
        Sleep(50);
    }
   // system("pause");
    FILE_IN.close();
}
void reading_file_image_1()
{
	fstream FILE_IN;
    FILE_IN.open("image1.txt",ios::in);
    string meo_1;
    while (!FILE_IN.eof())
    {
        getline(FILE_IN,meo_1);
        cout<<meo_1<<endl;
        Sleep(50);
    }
    //system("pause");
    FILE_IN.close();
}
void reading_file_image_2()
{
	fstream FILE_IN;
    FILE_IN.open("conmeo.txt",ios::in);
    string meo_2;
    while (!FILE_IN.eof())
    {
        getline(FILE_IN,meo_2);
        cout<<meo_2<<endl;
        Sleep(50);
    }
    //system("pause");
    FILE_IN.close();
}
void reading_file_image_3()
{
	fstream FILE_IN;
    FILE_IN.open("image_2.txt",ios::in);
    string meo_3;
    while (!FILE_IN.eof())
    {
        getline(FILE_IN,meo_3);
        cout<<meo_3<<endl;
        Sleep(50);
    }
    //system("pause");
    FILE_IN.close();
}
void reading_file_image_4()
{
	fstream FILE_IN;
    FILE_IN.open("image_3.txt",ios::in);
    string meo_4;
    while (!FILE_IN.eof())
    {
        getline(FILE_IN,meo_4);
        cout<<meo_4<<endl;
        Sleep(50);
    }
    //system("pause");
    FILE_IN.close();
}
void reading_file_image_5()
{
	fstream FILE_IN;
    FILE_IN.open("image_4.txt",ios::in);
    string meo_5;
    while (!FILE_IN.eof())
    {
        getline(FILE_IN,meo_5);
        cout<<meo_5<<endl;
        Sleep(50);
    }
    //system("pause");
    FILE_IN.close();
}
void reading_file_image_6()
{
	fstream FILE_IN;
    FILE_IN.open("image_5.txt",ios::in);
    string meo_6;
    while (!FILE_IN.eof())
    {
        getline(FILE_IN,meo_6);
        cout<<meo_6<<endl;
        Sleep(50);
    }
    //system("pause");
    FILE_IN.close();
}
void reading_file_image_7()
{
	fstream FILE_IN;
    FILE_IN.open("image_7.txt",ios::in);
    string meo_7;
    while (!FILE_IN.eof())
    {
        getline(FILE_IN,meo_7);
        cout<<meo_7<<endl;
        Sleep(50);
    }
    //system("pause");
    FILE_IN.close();
}
void information()
{
	string a;
	string b;
	string c ="MEO.IT";
	string e ="11122001";
	do
	{
		cout<<"\n***************LOGIN*****************";
		cout<<"\nAccount: ";
		getline(cin,a);
		cout<<"\npassword: ";
		getline(cin,b);
		cout<<"\n*************************************";
		if(a !=c || b != e)
		{
			cout<<"\nWrong Account Or Password, Try Again !\n";
			system("Pause");
			system("cls");
		}
	}while(a !=c || b != e);
	system("cls");
	cout<<"\nLogged In Successfully!";
	int i = 0;
	while(i <=100)
	{
		cout<<"\nLoading "<<i<<"%"<<endl;
		i += 10;
		Sleep(300);
	}
	system("cls");
}
int main(int argc, char const *argv[])
{
	information();
	reading_file_infor_1();
	//reading_file_infor_2();
	reading_file_infor_3();
	reading_file_image_1();
	reading_file_image_2();
	reading_file_image_3();
	reading_file_image_4();
	reading_file_image_5();
	reading_file_image_6();
	reading_file_image_7();
    return 0;
}
