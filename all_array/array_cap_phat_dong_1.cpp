/*************************************************************************************************
	Name: array_cap_phat_dong.cpp
	Copyright: 2021 (c)
	Author: LY THANH LONG
	Date: 06/06/2021 22 -10
	Description: Mang 1 chieu cap phat dong
    - Mang dong la mang co the thay doi so luong phan tu cua mang
    trong qua trinh chuong trinh chay
    - cu phap:
    <kieu du lieu cua mang> * <ten mang>  = new <kieu du lieu cua mang>[<so luong pt cua mang>]; 

	chu y toan tu: toan tu va(&) de lay dia chi, toan tu nhan(*) de lay gia tri
***************************************************************************************************/
#include <iostream>
using namespace std;
#define MAX 100
//nhap tung phan tu vao mang
void input_array(int *a, int &n) //a[] hay *a cung duoc, de phan biet mang CON TRO(*a) va mang thuong a[]
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> *(a + i); //*(a+i) tuong duong voi a[i] (& lay di chi, *lay hoac gan gia tri)
	}
}
//xuat het phan tu trong mang
void output_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\na[" << i << "] = " << *(a + i); // * xuat gia tri cua a tai vi tri tu i to n-1
	}
}
//them pt bat x vao vi tri k bat ki "mang dong"
void add_x(int *&a, int &n, int x, int k)
{
	//buoc 1: tao mang trung gian
	int *temp = new int[n];
	for (int i = 0; i < n; i++)
	{
		temp[i] = a[i]; //chuyen lan luot cac pt a vao bien trung gian
	}
	//buoc 2: giai phong bo nho
	delete[] a; //gia phong bo nho mang a
				//buoc 3 cap phat lai vung nho moi cho a voi so luong pt mang tang len 1 o nho
	a = new int[n + 1];
	// buoc 4: chuyen tat ca cac pt ve lai cho mang a
	for (int i = 0; i < n; i++)
	{
		a[i] = temp[i]; //chuyen lan luot phan tu  mang trung gian vao lai mang a
	}
	delete[] temp; // giai phong vung nho temp
	// thap toan them phan tu bat ky
	for (int i = n - 1; i >= k; i--)
	{
		a[i] = a[i + 1]; // noi long vi tri can them
	}
	a[k] = x;
	n++;
	output_array(a, n);
	cout << "\nsize a: " << sizeof(a);
}
//xoa phan tu bat ky
void delete_x(int *&a, int &n, int d) //& de luu lai su thay doi
{
	//xoa xong thu x xong phai thu bo nho ve
	int *temp = new int[n];
	cout << "\nMang sau khi xoa x: ";
	for (int i = d + 1; i < n; i++)
	{
		*(a + (i - 1)) = *(a + i); //<=> a[i-1] = a[i];
	}
	n--; // so luong pt mang gian di 1 don vi

	//b1: chuyen pt vao mang trung gian
	for (int i = 0; i < n; i++)
	{
		temp[i] = a[i]; // chuyen lan luot pt vao mang trung gian
	}
	//b2: giai phong vung nho mang a
	delete[] a;
	//buoc 3: cap phat vung nho moi cho a va co kich thuoc gian di 1
	a = new int[n]; //giong 73 da gian di 1 o nho nen bh cap phat mang moi bi gam 1 o nho
	//buoc 4: chuyen pt trong temo ve lai a
	for (int i = 0; i < n; i++)
	{
		a[i] = temp[i];
	}
	delete[] temp; // giai phong bo nho temp
	output_array(a, n);

	cout << "\nsize a: " << sizeof(a) << " byte";
}

void new_memory(int *&a, int new_memory, int old_memory)
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

int main()
{
	int *a;
	int x, vt;
	int n;
	cout << "Nhap chieu dai cua mang: ";
	cin >> n;
	//cap phat vung nho cho con tro a<=> tao mang dong
	a = new int[n]; // cap phat vung nho gom n o nho (int 4 byte), con tro a tro den dia chi cua vung nho nay(a0 to aN)
	// new cap phat vung nho moi hoan toan
	input_array(a, n);
	//output_array(a,n);
	// cout<<"\nNhap phan tu muon them: ";cin>>x;
	// cout<<"\nVi tri muon them: ";cin>>vt;
	// add_x(a,n,x,vt);
	cout << "\nNhap vi tri xoa: ";
	cin >> x;
	delete_x(a, n, x);
	cout << "\ntruoc delete " << a[3];
	cout << "\ntruoc delete " << a[4];
	cout << "\ntruoc delete " << a[5];
	delete[] a; // gia phong vung nho cho mang a
	cout << "\nThe End";
	return 0;
}