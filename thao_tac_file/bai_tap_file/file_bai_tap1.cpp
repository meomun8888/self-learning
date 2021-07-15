/****************************************************************
	Name:file_bai_tap1.cpp
	Copyright: 2021 (c)
	Author: LY THANH LONG
	Date: 12/06/2021 - 20:36
	Description: 
    INPUT.txt
    12 345 135 7 12 1
    yeu cau:
    tim cac phan tu la cac so amstrong mang so nguyen roi gi  vao file AMSTRON.txt
*****************************************************************/
#include<iostream>
#include<fstream>
#include<math.h>
using namespace std;
void doc_file(int arr[],int &n,ifstream &file_in)
{
    while(!file_in.eof())//<=>whlie(file_in.eof()==flase)
    {
        file_in >> arr[n];
        n++;
    }
}
bool so_amstrong(int n)
{
    int k = 0;
    int tam = n;
    while(n != 0)
    {
        n = n /10;
        k++;
    }
    n = tam;
    int tong = 0;
    while(n!=0)
    {
        tong = tong +pow((n%10),k);
        n = n /10;
    }
    if(tam == tong)
    {
        return true;
    }
    return false;
}
void xuat_mang(int arr[],int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void xuat_so_amstrong(int arr[],int n)
{
    for(int i = 0;i<n;i++)
    {
        if(so_amstrong(arr[i])==true)
        {
            cout<<arr[i]<<" ";
        }
    }
}
void ghi_file(int arr[],int &n,ofstream & file_out)
{
    for(int i = 0;i<n;i++)
    {
        if(so_amstrong(arr[i])==true)
        {
            file_out << arr[i] <<"  ";
        }
    }
}

int main()
{
    ifstream file_in;
    file_in.open("./INPUT.txt",ios_base::in);
    int arr[100];
    int n  = 0;
    doc_file(arr,n,file_in);
    file_in.close();
    xuat_mang(arr,n);
    //xuat_so_amstrong(arr,n);
    //ghi du lieu vao file
    ofstream file_out;
    file_out.open("./SOAMTRONG.txt",ios_base::out);
    ghi_file(arr,n,file_out);
    file_out.close();
	cout<<"\nThe End";
	return 0;
}