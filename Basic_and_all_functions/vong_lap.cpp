#include <iostream>  // thu vien nhap xuat
using namespace std; //thu vien chuan

int main()
{
    int i = 0;
    while (i < 10)
    {
        cout << i << " ";
        i++;
    }
    cout << "i sau khi ke vong lap: " << i;

    int n;
    do
    {
        cout << "\n Nhap n: ";
        cin >> n;
    } while (n <= 2);
    cout << n;
    int x;
    cout << "nhap x:";
    int tong = 0;
    for (int i = 0; i <= 10; i++)
    {
        cout << "\ntong x: " << tong;
        tong = tong + i;
    }
    /*
            1: i = 0
            tong  = 0 + 0;
            2 :i = 1(i<=10);
            tong  = tong  + 1;
            3: i = 2(i<=10)
            tong  = 1 + 2 
            4: i = 3
            tong  = 3 + 3;
            ...............
            i = 11(i<=10);
            dung chuong trinh;
    */
    return 0;
}