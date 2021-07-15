/****************************************************************
	Name: bai_tap_mang.cpp
	Copyright: 2021 (c)
	Author: LY THANH LONG
	Date: 10/06/2021 - 11:00 A.M
	Description: Array
    1. nhap xuat mang
    2. them phan tu bat ky 
    3. xoa phan tu bat ky
    6. xoa so chan trong mang
    7. xoa le trong mang
    4. kiem tra co phan tu x trong mang hay khong
    5. xuat so nguyen to trong mang
    8. tong chan/ le trong mang
    9. sap sep tang/ giam
    10. doi vi tri pt dau va cuoi cho nhau
*****************************************************************/
#include <iostream>
using namespace std;
#define MAX 100 //mac dinh hang so max 100

void input_array(int a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}
void output_array(int a[], int n)
{
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = " << a[i] << endl;
    }
}
void add_x(int a[], int &n, int element, int location)
{
    for (int i = n + 1; i >= location; i--)
    {
        a[i] =a[i+1];
    }
    a[location] = element;
    n++;
}
void delete_x(int a[], int &n, int x)
{
    for (int i = x + 1; i < n; i++)
    {
        a[i] = a[i + 1];
        n--;
    }
}
void delete_element_even_in_array(int a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            delete_x(a, n, i);
        }
    }n--;
}
void delete_element_odd_in_array(int a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            delete_x(a, n, i);
        }
    }
}
bool check_prime(int n)
{
    if (n < 0)
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
                for (int i = 0; i < n; i++)
                {
                    if (n % i == 0)
                        return false;
                }
            }
        }
    }
    return true;
}
void output_prime(int a[], int &n)
{
    for (int i = 0; i <n; i++)
    {
        if (check_prime(i) == true)
        {
            cout << i << " ";
        }
    }
}
int sum_even(int a[], int &n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    return sum;
}
int sum_odd(int a[], int &n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    return sum;
}
void sort_min_to_max(int a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; i++)
        {
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
}
void sort_max_to_min(int a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; i++)
        {
            if (a[i] < a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
}
void Change_location(int a[],int &n)
{
    for(int i = 0;i<n;i++)
    {
        swap(a[0],a[n]);
    }
}
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a[MAX];
    int n;
    cout << "\nEnter number element array: ";
    cin >> n;
    input_array(a, n);
    output_array(a, n);
    cout<<endl;
    add_x(a,n,100,5);
    cout<<"\nmang sau khi them phan tu !";
    output_array(a, n);
    cout<<"\nmang sau khi xoa chan!";
    delete_element_even_in_array(a,n);
    output_array(a, n);
    // cout<<"\nmang sau khi xoa le!";
    // delete_element_odd_in_array(a,n);
    // output_array(a, n);
    cout<<"\nso nguyen to trong mang: ";
    output_prime(a,n);
    cout<<"\ntong chan: "<<sum_even(a,n);
    cout<<"\ntong le: "<<sum_odd(a,n);
    cout<<"\nmang sau khi sap sep  min to max !";
    sort_min_to_max(a,n);
    output_array(a,n);
    cout<<"\nmang sua khi sap sep max to min !";
    sort_max_to_min(a,n);
    output_array(a, n);
    cout << "\nThe End";
    return 0;
}