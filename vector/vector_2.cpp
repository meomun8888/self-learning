/****************************************************************
	Name: vector_2.cpp
	Copyright: 2021 (c)
	Author: LY THANH LONG
	Date: 13/06/2021 - 9:48 A.M
	Description: demo cac ham thuong dung vector
    1.resize() // them so luong cho san 
    2.size() // phan tu trong file
    3.capacity() // bo nho
    3.push_back() // them cuoi
    4.insert()// them
    5 erase () //xoa

    tham khao ham: https://www.cplusplus.com
*****************************************************************/
#include <iostream>
#include <vector>
using namespace std;

void xuat_vector(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr.at(i) << " "; //<=> arr[i];
    }
}
int main()
{
    vector<int> arr; // khai bao mang vector so nguyen
    //arr.resize(10);// gia tri mac dinh 0
    //arr.resize(5,10);// gia tri full 10
    for (int i = 1; i <= 5; i++)
    {
        arr.push_back(i); //them phan tu  i vao cuoi mang vector
    }
    xuat_vector(arr);

    cout << endl;
    cout << "\nmang sau khi xoa phan tu cuoi: ";
    arr.pop_back(); //xoa phan tu cuoi cung cua mang
    xuat_vector(arr);

    cout << "\nphan tu dau tien cua mang: " << arr.front();
    cout << "\nphan tu cuoi cung cua mang: " << arr.back();
    cout << "\nkich thuoc vector hien tai: " << arr.capacity() << " o nho. ";

    cout << "\nmang sau khi xoa ! ";
    arr.erase(arr.begin() + 2); //xoa di 1 phan tu tai vi tri so 2
    xuat_vector(arr);

    cout << "\nmang sau khi them ! ";
    arr.insert(arr.begin() + 2, 100); // them phan tu 100  o vi tri so 2
    xuat_vector(arr);

    //arr.clear(); // xoa het phan tu trong mang
    cout << "\nphan tu hien tai trong vector: " << arr.size();

    vector<int> x;
    for (int i = 10; i < 15; i++)
    {
        x.push_back(i);
    }
    cout << "\nPhan tu vector x: ";
    xuat_vector(x);

    cout << "\nPhan tu vector arr: ";
    xuat_vector(arr);

    arr.swap(x); //hoan doi cac phan tu  vector arr va vector x cho nhau
    cout << endl;
    cout << "\nvector arr sau khi hoan doi ";
    xuat_vector(arr);
    cout << "\nvector x sau khi hoan doi ";
    xuat_vector(x);
    //kiem tra vector luu tru toi da bao nhieu phan tu
    cout << "\nso luong pan tu co the chua duoc cua vector: " << arr.max_size(); //tuy vao trinh bien dich se ra so khac
    cout << "\nThe End";
    return 0;
}