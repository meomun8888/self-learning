#ifndef PERSON_H
#include <string>
#define PERSON_H

using namespace std;
class Person
{
    int ID;
    string Name;
    int Age;
    string Hometown;
    string Sex;
    string Nation;
    long Cellphone;
public:
    Person();
    int getID();
    void setID(int id);
    string getName();
    void setName(string name);
    int getAge();
    void setAge(int age);
    string getHometown();
    void setHometown(string hometown);
    string getSex();
    void setSex(string sex);
    string getNation();
    void setNation(string nation);
    long getCellphone();
    void setCellphone(long cellphone);
	virtual void input() = 0;
	string format(string str);
	virtual void output() = 0;
	virtual void writeFile() = 0;
};

#endif // PERSON_H
