/****************************************************************
	Name: 
	Copyright: 2021 (c)
	Author: LY THANH LONG
	Date: 
	Description: 
*****************************************************************/
#include<iostream>
using namespace std;
#define MAX_DONG 100
#define MAX_COT 100

void nhap_mang(int arr[][MAX_COT],int d,int c)
{
    for(int i = 0;i<d;i++)
    {
        for(int j = 0;j<c;j++)
        {
            cout<<"\na["<<i<<"]["<<j<<"] = ";
            cin>>arr[i][j];
        }
        cout<<endl;
    }
}
void xuat_mang(int arr[][MAX_COT],int d,int c)
{
    cout<<"\n======XUAT MANG======\n";
    for(int i = 0;i<d;i++)
    {
        for(int j = 0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void them_x(int arr[][MAX_COT],int d,int c,int vt,int x)
{
    for(int i = vt;i<d;i++)
    {
        for(int j = vt;j<c;j++)
        {
            
        }
    }
}
int main()
{
    int arr[MAX_DONG][MAX_COT];
    int dong, cot;
    cout<<"\nNhap so dong: ";
    cin>>dong;
    cout<<"\nNhap so cot: ";
    cin>>cot;
    nhap_mang(arr,dong,cot);
    xuat_mang(arr,dong,cot);
	cout<<"\nThe End";
	return 0;
}