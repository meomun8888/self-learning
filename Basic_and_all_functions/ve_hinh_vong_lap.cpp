#include <iostream>
using namespace std;

int main()
{
    // for(int i = 1;i<=5;i++)
    // {
    //     for(int j = 0;j<=10;j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    int i = 1;
    while (i <= 3)
    {
        int h = 1;
        while (h <= 3)
        {
            cout << "*";
            h++;
        }
        cout << endl;
        i++;
    }
    return 0;
}