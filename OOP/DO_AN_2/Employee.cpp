#include "Employee.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

Employee::Employee()
{
    this->Dayoff = 0;
    this->Position = "";
    this->Overtime = 0;
    this->Basicsalary = 0;
    this->Salarylevel = 0;
}
// set get Position
string Employee::getPosition() { return this->Position; }

void Employee::setPosition(string position) { this->Position = position; }
// set get Day off
int Employee::getDayoff() { return this->Dayoff; }

void Employee::setDayoff(int dayoff) { this->Dayoff = dayoff; }
// set get Overtime
int Employee::getOverTime() { return this->Overtime; }

void Employee::setOverTime(int overtime) { this->Overtime = overtime; }
// set get Basic salary
float Employee::getBasicsalary() { return this->Basicsalary; }

void Employee::setBasicsalary(float basicsalary) { this->Basicsalary = basicsalary; }
// set get Salary level
int Employee::getSalarylevel() { return this->Salarylevel; }

void Employee::setSalarylevel(int salarylevel) { this->Salarylevel = salarylevel; }

void Employee::input()
{
    Person::input();
    cout<<"Position (Cashier(C) / Service staff(S)): "<<endl;
    string choose;
    do{
    	cin>>choose;
    	if(choose == "C" || choose == "S" || choose == "c" || choose == "s")
        {
            Position = choose;
            break;
        }else
    		cout<<"You can only enter S or C. Please re-enter !!!";
	}while(true);
	cin.ignore();
	cout << "Overtime: ";
    while(!(cin >> Overtime))
    {
		cout<<"Only enter numbers !!! "<<endl;
		cin.clear();
		cin.ignore(1000,'\n');
    }
    cout<<"Day off: ";
    while(!(cin >> Dayoff))
    {
		cout<<"Only enter numbers !!! "<<endl;
		cin.clear();
		cin.ignore(1000,'\n');
    }
    cout << " Basic salary: ";
    while(!(cin >> Basicsalary))
    {
		cout<<"Only enter numbers !!! "<<endl;
		cin.clear();
		cin.ignore(1000,'\n');
    }
    cout<<" Salary level: ";
     while(!(cin >> Salarylevel))
    {
		cout<<"Only enter numbers !!! "<<endl;
		cin.clear();
		cin.ignore(1000,'\n');
    }
}

float Employee::CalculateSalary()
{
    float bonus = Basicsalary * 2 / 26 * Overtime;
    float fine = Basicsalary / 26 * Dayoff;
    if(Position == "C" || Position == "c")
        return (float) (Basicsalary * Salarylevel + bonus - fine ) * 3;
    return (float) (Basicsalary * Salarylevel + bonus - fine ) * 2;
}

void Employee::output()
{
    Person::output();
    cout<<"Position :"<<this->Position<<endl;
    cout<<"Overtime :"<<this->Overtime<<endl;
    cout<<"Day off :"<<this->Dayoff<<endl;
    cout<<"Basic salary :"<<this->Basicsalary<<endl;
    cout<<"Salary level :"<<this->Salarylevel<<endl;
    cout<<"---------------------"<<endl;
}

void Employee::writeFile()
{
    Person::writeFile();
    fstream f;
    f.open("D:\\project_C.txt", ios::app);
    f << "\nPosition :" << this->Position << "\nOvertime :" << this->Overtime << "\nDay off :"<<this->Dayoff
        << "\nBasic salary :" << this->Basicsalary << "\nSalary level :" << this->Salarylevel
        << "\n---------------------" << "\n\n";
    f.close();
}
