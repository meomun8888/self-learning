#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <fstream>
#include "Person.h"
using namespace std;

class Employee : public Person
{
    string Position;
    int Overtime;
    int Dayoff;
    float Basicsalary ;
    int Salarylevel;
public:
    Employee();
    string getPosition();
    void  setPosition(string position);
    int getDayoff();
    void  setDayoff(int dayoff);
    int getOverTime();
    void  setOverTime(int overtime);
    float getBasicsalary();
    void  setBasicsalary(float basicsalary);
    int getSalarylevel();
    void  setSalarylevel(int salarylevel);
	void input();
    float CalculateSalary();
    void output();
    void writeFile();

};

#endif // EMPLOYEE_H
