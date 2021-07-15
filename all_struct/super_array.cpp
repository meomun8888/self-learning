/****************************************************************
	Name: super_array.cpp
	Copyright: 2021 (c)
	Author: LY THANH LONG
	Date: 08/06/2021 - 09:58 A.M
	Description: se hoan thanh sau 
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
void menu(int *&a, int n)
{
	while (true)
	{
		system("cls");
		cout << "\n1.Input Array.";
		cout << "\n2.Output Array.";
		cout << "\n0.The End.";
		cout << "\nyou Enter: ";
		int number;
		cin >> number;
		switch (number)
		{
		case 0:
		{
			return;
			break;
		}
		case 1:
		{
			//ky thuat sieu mang dong
			int x;
			system("cls");
			cout << "\nNhap phan tu: ";
			cin >> x;
			if (n == 0)
			{
				a = new int[n]; //cap phat 1 o nho cho mang
			}
			else
			{
				memory_allocation(a, n + 1, n);
			}
			a[n] = x; // them gia tri vao cuoi mang
			n++;	  //thang n;
			break;
		}
		case 2:
		{
			cout << "\n===output array=== ";
			output_array(a, n);
			system("pause");
		}
		default:
			break;
		}
	}
}
int main()
{
	int *a = NULL;
	int n = 0;
	menu(a, n);
	delete[] a;
	cout << "\nThe End";
	return 0;
}