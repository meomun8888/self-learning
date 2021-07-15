/****************************************************************
	Name: chuoi_string.cpp
	Copyright: 2021 (c)
	Author: LY THANH LONG
	Date: 08/06/2021 - 17:50 P.M
	Description: cac su dung chuoi String
    - string ban chat la lop ky tu

    Ham thuong su dung trong chuoi
    + str.length();// lay do dai cua cuoi( string str = " ly thanh long";)
    ===========================xoa==============================
    + str.erase(begin() + 3); // xoa 1 ky tu tai vi tri so 3 
    + str.erase(x,y);// xoa di y ky tu bat dau tai vi tri x
    + str.erase(str.begin() + x, str.begin() + y);// xoa ky tu tu chi so x den chi so y - 1
    ===========================Them==============================
    + str.insert(str.begin() + x,'y');// them ky tu y vao vi tri so x
    + str.insert(cong nhieu ham them lam google.com ma tim)
    + str.push_back()// them 1 ky thu vao cuoi string
    ===========================Tim Kiem==============================

    ** dung ham them xoa chuoi thi string se tu cap phat va thu hoi o nho
*****************************************************************/
#include <iostream>
#include <string> // thu vien ho tro su ly co chuoi
using namespace std;
//nhap thong tin sinh vien gom ho ten tuoi and xuat
int main()
{
    string s = "ly thanh long";
    // cout<<"\nNhap chuoi: ";
    // getline(cin,s);//ham nhap chuoi s, ham nay lay luon ky tu khoang trang
    // cout<<"\nchuoi sau khi nhap: "<<s;
    // string hoten;
    // int tuoi;
    // cout<<"\nNhap tuoi sinh vien: ";
    // cin>>tuoi;
    // cin.ignore();//ham xoa bo nho dem
    // cout<<"\nNhap ten sinh vien: ";
    // getline(cin,hoten);
    // cout<<"\nTen Sinh Vien: "<<hoten;
    // cout<<"\nTuoi: "<<tuoi;

    // for (int i = 0; i < s.length(); i++)//length() ham tra ve do dai cua chuoi string in c++
    // {
    //     cout << s[i]<<endl;
    // }
    //cout<<"\nLay do dai cua chuoi s: "<<s.length()<<" Ky tu";
    s.erase(s.begin() + 3); //xoa mot ky thu trong chuoi s tai vi tri so 3
    cout << "\nchuoi sau khi xoa: " << s;
    s.insert(s.begin() + 3, 'T'); //ham them mot ky tu s tai vi tri so 3
    cout << "\nchuoi sau khi Them: " << s;
    //s.push_back()//them 1 ky tu vao cuoi chuoi
    // cout<<"\nsize: "<<sizeof(hoten)<<" byte";// string ton bo nho ho char
    // char a[] = "ly thanh long";
    // cout<<"\nsize: "<<sizeof(a)<<" byte";
    // cout<<"\nThe End";
    return 0;
}