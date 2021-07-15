/****************************************************************
	Name: array_2D_bai_tap.cpp
	Copyright: 2021 (c)
	Author: LY THANH LONG
	Date: 08/06/2021 - 13:47 P.M
	Description: gia bai tap
    1. tinh tong so nguyen to trong ma tran
    2. tong phan tu tren tung dong 
    3. tong phan tu tren tung cot
    4. xuat duong cheo chinh 
    5. xuat duong cheo phu
*****************************************************************/
#include <iostream>
using namespace std;
#define MAX_DONG 100
#define MAX_COT 100

void nhap_mang_2D(int a[][MAX_COT], int &dong, int &cot)
{
    cout << endl;
    for (int i = 1; i <= dong; i++)
    {
        for (int j = 1; j < cot; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
        cout << endl;
    }
}
void xuat_mang_2D(int a[][MAX_COT], int &dong, int &cot)
{
    cout << "\n===Xuat Mang 2D===\n";
    for (int i = 1; i <= dong; i++)
    {
        for (int j = 1; j <= cot; j++)
        {
            cout<< a[i][j] << " ";
        }
        cout << endl;
    }
}
bool kiem_tra_so_nguyen_to(int &n)
{
    if (n < 2)
    {
        return false;
    }
    else
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
            else
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
void so_nguyen_to(int a[][MAX_COT], int &dong, int &cot)
{

    cout << "\nSo nguyen to trong mang 2D: ";
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            if (kiem_tra_so_nguyen_to(a[i][j]) == true)
            {
                cout << "\na[" << i << "][" << j << "] = " << a[i][j];
            }
        }
    }
}
int tong_so_nguyen_to(int a[][MAX_COT], int &dong, int &cot)
{
    int sum = 0;
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            if (kiem_tra_so_nguyen_to(a[i][j]) == true)
            {
                sum += a[i][j];
            }
        }
    }
    return sum;
}
void tong_phan_tu_tren_dong(int a[][MAX_COT], int &dong, int &cot)
{
    cout << endl;
    for (int i = 0; i < dong; i++)
    {
        int sum = 0;
        for (int j = 0; j < cot; j++)
        {
            sum += a[i][j];
        }
        cout << "\nTong phan tu tren dong: " << i << " = " << sum;
    }
}
void tong_phan_tu_tren_cot(int a[][MAX_COT], int &dong, int &cot)
{
    cout << endl;
    for (int i = 0; i < cot; i++)
    {
        int sum = 0;
        for (int j = 0; j < dong; j++)
        {
            sum += a[j][i];
        }
        cout << "\nTong phan tu tren cot: " << i << " = " << sum;
    }
}
void xuat_duong_cheo_chinh(int a[][MAX_COT], int &dong, int &cot)
{
    cout << "\nDuong cheo chinh: ";
    for (int i = 0; i < cot; i++)
    {
        cout << a[i][i] << " ";
    }
}
void xuat_duong_cheo_phu(int a[][MAX_COT], int &dong, int &cot)
{
    cout << "\nXuat Duong Cheo Phu: ";
    for (int i = 0; i < cot; i++)
    {
        cout << a[i][cot - i - 1] << " ";
    }
}
void swap(int &a,int &b)
{
    int temp = a;
        a  = b;
        b = temp;
}
void sort_min_to_max(int a[][MAX_COT], int &dong, int &cot)
{
    cout<<"\n sort min to max ";
    for(int  i = 1 ;i<=cot;i++)
    {
        for(int j = 1;j<=cot;j++)
        {
            if(a[i][j]>a[j][i])
            {
                swap(a[i][i],a[i][i]);
            }
        }
    }
    xuat_mang_2D(a, dong, cot);
}
int main()
{
    int a[MAX_DONG][MAX_COT];
    int dong, cot;
    cout << "\nNhap so Dong: ";
    cin >> dong;
    cout << "\nNhap so Cot: ";
    cin >> cot;
    nhap_mang_2D(a, dong, cot);
    xuat_mang_2D(a, dong, cot);
    // so_nguyen_to(a, dong, cot);
    // cout << "\nTong so Nguyen to trong mang 2D: " << tong_so_nguyen_to(a, dong, cot)<<endl;
    // tong_phan_tu_tren_dong(a, dong, cot);
    // tong_phan_tu_tren_cot(a, dong, cot);
    // xuat_duong_cheo_chinh(a, dong, cot);
    // xuat_duong_cheo_phu(a, dong, cot);
    // sort_min_to_max(a,dong,cot);
    // cout << "\nThe End";
    return 0;
}