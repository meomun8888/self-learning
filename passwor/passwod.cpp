#include <iostream>
using namespace std;

int main()
{
    string username, password;
    cout << "--------------------Please login to the server--------------------" << endl;
    cout << "+ Username : ";
    getline(cin, username);
    cout << "+ Password : ";
    getline(cin, password);
    cout << endl;
    while (username != "admin" || password != "1month1000USD")
    {
        cout << "Invalid username or password !! Please re-enter." << endl;
        system("pause");
        system("cls");
        cout << "+ Username : ";
        getline(cin, username);
        cout << "+ Password : ";
        getline(cin, password);
    }
    cout << "====================Logged In Successfully====================" << endl;
    system("pause");
    system("cls");
    return 0;
    
}