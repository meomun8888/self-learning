#include "Person.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

Person::Person()
{
    this->ID = 0;
    this->Name = "";
    this->Age = 0;
    this->Hometown = "";
    this->Sex = "";
    this->Nation = "";
    this->Cellphone = 0;
}
//set get ID
int Person::getID() { return this->ID; }

void Person::setID(int id) { this->ID = id; }
//set get Name
string Person::getName() { return this->Name; }

void Person::setName(string name) { this->Name = name; }
//set get Age
int Person::getAge() { return this->Age; }

void Person::setAge(int age) { this->Age = age; }
//set get Hometown
string Person::getHometown() { return this->Hometown; }

void Person::setHometown(string hometown) { this->Hometown = hometown; }
//set get Sex
string Person::getSex() { return this->Sex; }

void Person::setSex(string sex) { this->Sex = sex; }
//set get Nation
string Person::getNation() { return this->Nation; }

void Person::setNation(string nation) { this->Nation = nation; }
//set get Cellphone
long Person::getCellphone() { return this->Cellphone; }

void Person::setCellphone(long cellphone) { this->Cellphone = cellphone; }

void Person::input()
{
    int id;
    cout << "ID: ";
    while(!(cin >> this->ID))
    {
        cout<<"Only enter numbers !!! "<<endl;
		cin.clear();
		cin.ignore(100,'\n');
    }
    cout << "Name: ";
    cin.clear();
    cin.ignore(1000,'\n');
    getline(cin, this->Name);
    cout << "Age: ";
    do{
        cin >> this->Age;
        if(Age < 16 || Age > 50)
            cout << "Age wrong!! Please re-enter the age (16 -> 50)";
        else break;
    }while(true);
    cout << "Hometown: ";
    cin.clear();
    cin.ignore(1000,'\n');
    getline(cin, Hometown);
    cout << "Sex: ";
    getline(cin, this->Sex);
    cout << "Nation: ";
    getline(cin, this->Nation);
    cout << "Cell phone number: ";
    do{
        cin >> this->Cellphone;
        if(Cellphone < 99999999 || Cellphone > 1000000000 )
            cout << "Cell phone number wrong!! Please re-enter cell phone number(0 + 9 numbers)";
        else break;
    }while(true);
}

string Person::format(string str)
{
    for (int i=0; i < str.length(); i++)
    {
    	if(str[i] == 32 && str[i+1] == 32)
    		str.erase(i--, 1);
	}
	if(str[0] == 32)
		str.erase(0, 1);

	if(str[str.length() - 1] == 32)
		str.erase(str.length() - 1, 1);

	for(int i=0; i < str.length(); i++)
		if(str[i] >= 'A' && str[i] <='Z')
			str[i] += 32;

	str[0] -= 32;
	for(int i=0; i < str.length(); i++)
		if(str[i] >='a' && str[i] <= 'z' && str[i-1] == 32)
			str[i] -= 32;

	return str;
}

void Person::output()
{
    cout<<"ID : " << this->ID<<endl;
    cout<<"Name : " << format(Name)<<endl;
	cout<<"Age : " << this->Age<<endl;
	cout<<"Hometown : " << format(Hometown)<<endl;
	cout<<"Sex : " << this->format(Sex)<<endl;
	cout<<"Nation : " << format(Nation)<<endl;
	cout<<"Cell phone number : 0" << this->Cellphone<<endl;
}
void Person::writeFile()
{
    fstream f;
    f.open("D:\\project_C.txt", ios::app);
    f << "ID : "<< this->ID << "\nName : " << format(Name) << "\nAge : " << this->Age << "\nHometown : " << format(Hometown)
        << "\nSex : " << this->format(Sex) << "\nNation : " << format(Nation) << "\nCell phone number : " << this->Cellphone;
    f.close();
}

