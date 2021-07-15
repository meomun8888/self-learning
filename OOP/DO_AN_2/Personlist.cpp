#include "Personlist.h"
#include <iostream>
#include <fstream>
#include <string>
#include "Customer.h"
#include "Employee.h"
using namespace std;

void Personlist::inputList()
{
    cout << "How many people do you want to enter? ";
    cin >> n;
    for (int i=0; i < n; i++)
    {
        cout<<"Inviting you to choose Employee or Customer (E/C): ";
        cin>>type;
        if(type == 'E' || type == 'e'){
            cout << "-------Employee-------" << endl;
            ps[i] = new Employee();
        }else {
            cout<<"-------Customer-------"<<endl;
            ps[i] = new Customer();
        }
        ps[i]->input();
        system("cls");
    }
    for (int i=0; i < n; i++)
        ps[i]->writeFile();
}

void Personlist::outputList()
{
    cout<<"Information just entered is  : "<<endl;
    for (int i=0; i < n; i++)
    {
        cout << "Information employee " << i + 1 << " is: " << endl;
        ps[i]->output();
        cout << endl;
    }
}

void Personlist::outputFile()
{
    cout<<"Information just entered is  : "<<endl;
    fstream f;
    f.open("D:\\project_C.txt");
    string str;
    while(!f.eof())
    {
        getline(f, str);
        cout << str << endl;
    }
    f.close();
}

void Personlist::add()
{
    do{
        cout<<" Inviting you to choose Employee or Customer [E/C] " <<endl;
        cin>>type;
        if(type == 'E' || type == 'e'){
            cout << "-------Employee-------" << endl;
            ps[n] = new Employee();
        } else {
            cout << "-------Customer-------" << endl;
            ps[n]=new Customer();
        }
        ps[n]->input();
        ps[n++]->writeFile();
        cout<<"Do you want to continue importing(Y)or not(N) : "<<endl;
        cin>>choose;
        if(choose == 'N' || choose == 'n')
            break;
        system("cls");
    }while(true);
}

void Personlist::remove()
{
    int id;
    int index = 0;
    bool flag = false;
    cout << "Enter the ID you want to delete : "<<endl;
    cin >> id;
    for(int i=0; i < n; i++){
        if(id == ps[i]->getID())
        {
            index = i;
            flag = true;
        }
    }
    if(flag)
    {
        for(int i=index; i < n; i++)
            ps[i] = ps[i+1];
        n--;
        cout<<"Deleted Successfully"<<endl;
    } else cout<<"No Data Found!!!"<<endl;
}

void Personlist::sortAscending()
{
    for(int i=0; i < n - 1; i++)
        for(int j=i; j < n; j++)
            if(ps[i]->getID() > ps[j]->getID())
                swap(ps[i], ps[j]);
}

void Personlist::sortDescending()
{
    for(int i=0; i < n - 1; i++)
        for(int j=i; j < n; j++)
            if(ps[i]->getID() < ps[j]->getID())
                swap(ps[i], ps[j]);
}

void Personlist::search()
{
    int id;
    int s = -1;
    cout << "Enter the ID you want to search: ";
    cin >> id;
    for(int i=0; i < n; i++)
    {
        if(id == ps[i]->getID()){
            s = i;
            cout<<"Information employee need to find is: "<<endl;
            ps[s]->output();
        }
    }
    if (s == -1)
        cout<<"No Data Found !!!";
}
