/*Mang 1 chieu tinh
  1. tinh lien tuc o nho trong may tinh 
  2. khai bao bao nhieu dung bay nhieu
  chu y & c++ truy xuat dia chi trong array
  **Quy tac mang 1 chieu la di tu trai qua phai
*/

#include <iostream>
using namespace std;
#define MAX 100 // MAC DINH  MAX LA 100
//nhap tung phan tu vao mang
void input_array(int a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}
//xuat het phan tu trong mang
void output_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\na[" << i << "] = " << a[i]; //them dau &a[i] se xuat ra dia chi o nho
    }
}
//sap xep mang tu be den lon
void sort_Min_To_Max(int a[], int &n)
{
    cout << "\narray sort min to max is : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] >= a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
    output_array(a, n);
}
// sap sep mang gia dam
void sort_Max_to_Min(int a[], int &n)
{
    cout << "\nmang sau khi sap sep max to min: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                swap(a[j], a[i]);
            }
        }
    }
    output_array(a, n);
}
//tim x co trong mang hay ko
int search_x(int a[], int &n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (x == a[i])
            return i;
    }
    return -1;
}
// tong phan tu trong mang o to n
int sum_Array(int a[], int n)
{
    int Tong = 0;
    for (int i = 0; i < n; i++)
    {
        Tong += a[i];
    }
    return Tong;
}
//them ptu x vao vi tri k bat ky
void add(int a[], int &n, int x, int k)
{
    cout << "\nThem x vao K: ";
    for (int i = n - 1; i >= k; i--)
    {
        a[i + 1] = a[i];
    }
    a[k] = x;
    n++;
    output_array(a, n);
}
//them x vao vi tri bat ky va xoa luon pt do
void add_x(int a[], int &n, int x, int k)
{
    cout << "\nMang them pt va xoa luon pt cu: ";
    for (int i = k; i < n; i++)
    {
        if (a[k] == a[i])
            a[k] = x;
    }
    output_array(a, n);
}
//xoa phan tu bat ky trong mang
void delete_array_x(int a[], int &n, int x)
{
    cout << "\nMang sau khi xoa: ";
    for (int i = x + 1; i < n; i++)
    {
        a[i - 1] = a[i];
    }
    n--;
    output_array(a, n);
}
//so chan dau tien trong mang
int first_even_number(int a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            return a[i];
        }
    }
    return 0;
}
//in ra so chan dau dau tien
int even_number(int a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            return a[i];
    }
    return 0;
}
void xoa_Chan(int a[], int &n)
{
    cout << "\nMang sau khi xoa cac phan tu chan: ";
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            delete_array_x(a, n, i);
        }
    }
    output_array(a, n);
}
//ham so sanh 2 so
int search_Max(int &a, int &b) { return a > b ? a : b; }
//ham hoan vi
void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
int main()
{
    int n, x;
    int a[MAX];
    cout << "nhap chieu dai cua mang: ";
    cin >> n;
    input_array(a, n);
    system("cls");
    // output_array(a,n);
    // sort_Min_To_Max(a,n);
    // sort_Max_to_Min(a,n);
    // add(a,n,10,2);
    // add_x(a,n,11,3);
    // cout<<"\nNhap vi tri can xoa: ";cin>>x;
    // delete_array_x(a,n,x);
    // cout<<"\nTong phan tu trong mang: "<<sum_Array(a,n);
    // cout<<"\nTim X tai vi tri so : "<<search_x(a,n,3)<<" trong mang";
    // cout<<"\nso chan dau tien trong mang la: "<<even_number(a,n);
    // xoa_Chan(a,n);
    cout << "\nThe End.";
    return 0;
}
