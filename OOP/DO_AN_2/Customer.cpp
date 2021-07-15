#include "Customer.h"
#include <iostream>
#include <string>
#include <fstream>

Customer::Customer()
{
    this->account = "";
    this->amount = 0;
    this->numberOfRechargeTimes = 0;
    this->moneyPerPayment = 0;
    this->amountUsed = 0;
    this->serviceFee = 0;
}
//set get tai khoan
string Customer::getAccount() { return this->account; }

void Customer::setAccount(string account) { this->account = account; }
//set get so lan su dung dich vu
int Customer::getAmount() { return this->amount; }

void Customer::setAmount(int amount) { this->amount = amount; }
//set get so lan nap tien
int Customer::getNumberOfRechargeTimes() { return this->numberOfRechargeTimes; }

void Customer::setNumberOfRechargeTimes(int numberOfRechargeTimes) { this->numberOfRechargeTimes = numberOfRechargeTimes; }
//set get tien moi lan nap
long Customer::getMoneyPerPayment() { return this->moneyPerPayment; }

void Customer::setMoneyPerPayment(long moneyPerPayment) { this->moneyPerPayment = moneyPerPayment; }
//set get tien da dung
long Customer::getAmountUsed() { return this->amountUsed; }

void Customer::setAmountUsed(long amountUsed) { this->amountUsed = amountUsed; }
//set get phi dich vu
long Customer::getServiceFee() { return this->serviceFee; }

void Customer::setSetviceFee(long serviceFee) { this->serviceFee = serviceFee; }

void Customer::input()
{
    Person::input();
    cout << "Account: ";
    cin.clear();
    cin.ignore(1000,'\n');
    getline(cin, account);
    cout << "Number of services used: ";
    while(!(cin >> amount))
    {
		cout<<"Only enter numbers !!! "<<endl;
		cin.clear();
		cin.ignore(1000,'\n');
    }
    cout << "Service fee: ";
    while(!(cin >> serviceFee))
    {
		cout<<"Only enter numbers !!! "<<endl;
		cin.clear();
		cin.ignore(1000,'\n');
    }
    cout << "Number of recharge times: ";
    while(!(cin >> numberOfRechargeTimes))
    {
		cout<<"Only enter numbers !!! "<<endl;
		cin.clear();
		cin.ignore(1000,'\n');
    }
    cout << "Money per payment: ";
    while(!(cin >> moneyPerPayment))
    {
		cout<<"Only enter numbers !!! "<<endl;
		cin.clear();
		cin.ignore(1000,'\n');
    }
    cout << "Amount used: ";
    while(!(cin >> amountUsed))
    {
		cout<<"Only enter numbers !!! "<<endl;
		cin.clear();
		cin.ignore(1000,'\n');
    }
}

long Customer::totalDeposit()
{
    return (long) this->numberOfRechargeTimes * this->moneyPerPayment;
}

double Customer::moneyRemaining()
{
    return (double) totalDeposit() - this->amountUsed;
}

void Customer::output()
{
    Person::output();
    cout << "Account: " << this->account << endl;
    cout << "Number of recharge times: " << this->numberOfRechargeTimes << endl;
    cout << "Money per payment: " << this->moneyPerPayment << endl;
    cout << "Amount used: " << this->amountUsed << endl;
    cout << "Money remaining: " << moneyRemaining() <<endl;
    cout<<"---------------------"<<endl;
}

void Customer::writeFile()
{
    Person::writeFile();
    fstream f;
    f.open("D:\\project_C.txt", ios::app);
    f << "\nAccount: " << this->account << "\nNumber of recharge times: " << this->numberOfRechargeTimes
        << "\nMoney per payment: " << this->moneyPerPayment << "\nAmount used: " << this->amountUsed
        << "\nMoney remaining: " << moneyRemaining() << "\n---------------------" << "\n\n";
    f.close();
}
