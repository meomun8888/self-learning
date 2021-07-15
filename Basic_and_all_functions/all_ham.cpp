/****************************************************************
	Name: all_ham.cpp
	Copyright: 2021 (c)
	Author: LY THANH LONG
	Date: 03/02/2021 - 19:30 P.M
	GitHub: 
	Description: tong quan ve ham - nguyen mau ham
*****************************************************************/
#include <iostream>
using namespace std;
/* Khai bao Nguyen mau ham*/
int UCLN(int, int);
int BCNN(int, int);
int Tim_Max(int, int);
void in_ra_so_nguyen_to(int);
int main()
{
    in_ra_so_nguyen_to(100);
    // cout<<"\nuoc cung lon nhat: "<<UCLN(6,30);
    // cout<<"\nBoi chung nho nhat: "<<BCNN(4,7);
    // cout<<"\nSo lon: "<<Tim_Max(10,5);
    cout << "\nThe End.";
    return 0;
}

//kiem tra phai so nguyen to hay khong
bool kiem_tra_so_ngto(int n)
{
    if (n < 2)
    {
        return false;
    }
    else //n>2
    {
        if (n == 2)
        {
            return true;
        }
        else
        {
            if (n % 2 == 0)
            {
                return false;
            }
            else // if(n%2!=0)
            {
                for (int i = 2; i < n; i++)
                {
                    if (n % i == 0)
                        return false;
                }
            }
        }
    }
    return true;
}
//in ra so nguyen to
void in_ra_so_nguyen_to(int n)
{
    cout << "\nSo nguyen to tu 2 ==> N:  ";
    for (int i = 0; i < n; i++)
    {
        if (kiem_tra_so_ngto(i) == true)
        {
            cout << i << " ";
        }
    }
}
// boi cung nho nhat
int BCNN(int a, int b)
{
    return (a * b) / UCLN(a, b);
} //BCNN
//uoc chung lon nhat
int UCLN(int a, int b)
{
    if (a < b)
    {
        for (int i = a; i >= 1; i--)
        {
            if (a % i == 0 && b % i == 0)
            {
                return i; //uoc chung lon nha a va b
            }
        }
    }
    else //if(a>=b)
    {
        for (int i = b; i >= 1; i--)
        {
            if (a % i == 0 && b % i == 0)
            {
                return i;
            }
        }
    }
    return 0;
} //UCLN
//tim phan tu lon
int Tim_Max(int a, int b) { return a > b ? a : b; }