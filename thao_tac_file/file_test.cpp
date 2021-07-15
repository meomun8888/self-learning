/******************************************************************************************
	Name: file_1.cpp
	Copyright: 2021 (c)
	Author: LY THANH LONG
	Date: 12/06/2021 - 14:17 P.A
	Description: bai tap thao tac voi file
    
    Doc du lieu tu file input.txt va gi du lieu vao file KETQUA.txt
    1. ghi true khi do la so nguyen to
    2. ghi false khi do khong phai la so nguyen to
********************************************************************************************/
#include <iostream>
#include <fstream>
using namespace std;
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
int main()
{
    ifstream FILE_IN;
    FILE_IN.open("./INPUT.txt", ios_base::in);
    if (FILE_IN.fail() == true)
    {
        cout << "\nfile khong ton tai !";
        return 0;
    }
    int x;
    FILE_IN >> x;
    FILE_IN.close();
    ofstream FILE_OUT;
    FILE_OUT.open("./OUTPUT.txt", ios_base::trunc);
    if (kiem_tra_so_ngto(x) == true)
    {
        FILE_OUT << x << "true";
    }
    else
    {
        FILE_OUT << x << "false ";
    }
    FILE_OUT.close();
    cout << "\nThe End.";
    return 0;
}