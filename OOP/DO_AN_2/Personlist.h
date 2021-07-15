#ifndef PERSONLIST_H
#define PERSONLIST_H
#include <string>
#include <fstream>
#include "Person.h"
using namespace std;


class Personlist
{
    int n;
    char type, type1, choose;
public:
    Person* ps[100];
    void inputList();
    void outputList();
    void outputFile();
    void add();
    void remove();
    void sortAscending();
    void sortDescending();
    void search();

};

#endif // PERSONLIST_H
