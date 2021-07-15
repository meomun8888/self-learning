#include <iostream>
using namespace std;
bool tang(int a,int b)
{
    return a > b;
}
bool giam(int a, int b)
{
    return a < b;
}
void sap_sep(int *arr, int n, bool (*sosanh)(int, int))
{
    int i,j,find_idx;
    for (i = 0; i < n; i++)
    {
        find_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (sosanh(arr[find_idx], arr[i]))
            {
                find_idx = j;
            }
        }
                swap(arr[find_idx],arr[i]);
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
    int arr[] ={564, 5, 6, 11, 88};
    int n = 5;
    sap_sep(arr, n,tang);
    cout << "\nThe End !.";
}