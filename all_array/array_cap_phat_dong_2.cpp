/****************************************************************
	Name: array_cap_phat_dong_2.cpp
	Copyright: 2021 (c)
	Author: LY THANH LONG
	Date: 07/06/2021 - 14:35
	Description: mang 1 chieu cap phat dong "2" code gon hon nho xem lai 1.
*****************************************************************/
#include <iostream>
using namespace std;

void input_array(int *&a, int &n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> *(a + i);
    }
}
void output_array(int *a, int &n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\na[" << i << "] = " << *(a + i);
    }
}
void memory_allocation(int *&a, int new_memory, int old_memory)
{
    int *temp = new int[old_memory];
    for (int i = 0; i < old_memory; i++)
    {
        temp[i] = a[i];
    }
    delete[] a;
    a = new int[new_memory];
    for (int i = 0; i < old_memory; i++)
    {
        a[i] = temp[i];
    }
    delete[] temp;
}
void add_x(int *&a, int &n, int x, int k)
{
    cout << "\nArray after add x: ";
    memory_allocation(a, n + 1, n);
    for (int i = n - 1; i >= k; i--)
    {
        a[i + 1] = a[i];
    }
    a[k] = x;
    n++;
    output_array(a, n);
}
void delete_x(int *&a, int &n, int x)
{
    for (int i = x + 1; i < n; i++)
    {
        a[i - 1] = a[i];
    }
    n--;
    memory_allocation(a, n - 1, n);
    // output_array(a, n);
}
void sort_min_to_max(int *&a, int n)
{
    cout << "\n\nArray after sort min to max: ";
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
void sort_max_to_min(int *&a, int n)
{
    cout << "\n\nArray after sort max to min: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] <= a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
    output_array(a, n);
}
void remove_the_same_element(int *&a, int &n)
{
    cout << "\nArray after remove the same element: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                delete_x(a, n, j);
                i--;
            }
        }
    }
    n--;
    output_array(a, n);
}
void remove_even_element_in_array(int *&a, int &n)
{
    cout << "\nArray after remove even element in array: ";
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            delete_x(a, n, i);
        }
    }
}
void remove_odd_element_in_array(int *&a, int &n)
{
    cout << "\nArray after remove odd element in array: ";
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            delete_x(a, n, i);
        }
    }
}
int search_Max_of_min(int &a, int &b) { return a > b ? a : b; }
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void menu()
{
    int n, x, k;
    int *a;
    a = new int[n];
    cout << "Enter Number ? element array: ";
    cin >> n;
    input_array(a, n);
    output_array(a, n);
    cout << "\nEnter the extra element: ";
    cin >> x;
    cout << "\nEnter location add: ";
    cin >> k;
    add_x(a, n, x, k);
    cout << "\nEnter location delete: ";
    cin >> x;
    cout << "\nArray after delete x: ";
    delete_x(a, n, x);
    sort_min_to_max(a, n);
    sort_max_to_min(a, n);
    remove_the_same_element(a, n);
    remove_even_element_in_array(a, n);
    //remove_odd_element_in_array(a,n);
    cout << "\nThe End";
    delete[] a;
}
int main()
{
    menu();
    return 0;
}