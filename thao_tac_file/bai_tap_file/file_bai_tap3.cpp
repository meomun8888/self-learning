/****************************************************************
	Name: file_bai2.cpp
	Copyright: 2021 (c)
	Author: LY THANH LONG
	Date: 12/06/2021 - 21:26 P.M
	Description: doc du lieu tu file.
    INPUT.txt
    1,2,5,6,7,9,10 // file co dau , 
    1. tim uoc chung lon nhat.
    2. tim boi chung nho nhat
*****************************************************************/
#include<iostream>
#include<fstream>
using namespace std;
void doc_file(int arr[],int &n,ifstream &file_in)
{
    char c;
    while (!file_in.eof())
    {
        file_in >>arr[n];
        file_in >> c;
        n++;
    }
    
}
void xuat_mang(int arr[],int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
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
}
void ghi_file(int arr[],int &n,ofstream & file_out)
{
    for(int i = 0;i<n;i++)
    {
        
    }
}
int main()
{
    ifstream file_in;
    file_in.open("./INPUT.txt",ios_base::in);
    int arr[100];
    int n = 0;
    doc_file(arr,n,file_in);
    //xuat_mang(arr,n);
    file_in.close();
    ofstream file_out;
    file_out.open("./file_bai2.txt",ios_base::out);
    
    file_out.close();
	cout<<"\nThe End";
	return 0;
}