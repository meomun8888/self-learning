#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>
#include <fstream>
#include "Person.h"
using namespace std;

class Customer : public Person
{
    string account;
    int amount;
    int numberOfRechargeTimes;
    long moneyPerPayment;
    long amountUsed;
    long serviceFee;
public:
    Customer();
    string getAccount();
    void setAccount(string account);
    int getAmount();
    void setAmount(int amount);
    int getNumberOfRechargeTimes();
    void setNumberOfRechargeTimes(int numberOfRechargeTimes);
    long getMoneyPerPayment();
    void setMoneyPerPayment(long moneyPerPayment);
    long getAmountUsed();
    void setAmountUsed(long amountUsed);
    long getServiceFee();
    void setSetviceFee(long serviceFee);
    void input();
    long totalDeposit();
    double moneyRemaining();
    void output();
    void writeFile();

};

#endif // CUSTOMER_H
