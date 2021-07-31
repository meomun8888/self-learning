#include<iostream>
#include<string>
#include<fstream>
#include <unistd.h>
using namespace std;

int main(int argc, char const *argv[])
{
    fstream FILE_IN;
    FILE_IN.open("INPUT.txt",ios::in);
    string meo;
    while (!FILE_IN.eof())
    {
        getline(FILE_IN,meo);
        cout<<meo<<endl;
        sleep(1);
    }
    FILE_IN.close();
    return 0;
}
