/************************************************************************************************
	Name: struct_1.cpp
	Copyright: 2021 (c)
	Author: LY THANH LONG
	Date: 09/06/2021 11:36 A.M
	Description: struct trong struct
    khai bao: 
    struct <ten struct>
    {
        <kieu du lieu> <ten bien>;
        <kieu du lieu> <ten bien>;
        .........................n;
    };
*************************************************************************************************/
#include <iostream>
#include <math.h>
using namespace std;
struct toado
{
    float x;
    float y;
};
typedef struct toado TOADO; //c++  khong can dung cai cung duoc
void nhap_toa_do(TOADO &td)
{
    cout << "\nNhap toa do x: ";
    cin >> td.x;
    cout << "\nNhap toa do y: ";
    cin >> td.y;
}
void xuat_toa_do(TOADO td)
{
    cout << "\nNhap toa do x: " << td.x;
    cout << "\nNhap toa do y: " << td.y;
}
float tinh_toa_do(TOADO A, TOADO B)
{
    return sqrt(pow((B.x - A.x), 2) + pow((B.y - A.y), 2));
}
struct tamgiac
{
    TOADO A;
    TOADO B;
    TOADO C;
};
typedef struct tamgiac TAMGIAC;
void nhap_toa_do_tam_giac(TAMGIAC &tg)
{
    cout << "\nNhap toa do diem A: ";
    nhap_toa_do(tg.A);
    cout << "\nNhap toa do diem B: ";
    nhap_toa_do(tg.B);
    cout << "\nNhap toa do diem C: ";
    nhap_toa_do(tg.C);
}
void xuat_toa_do_tam_giac(TAMGIAC tg)
{
    cout << "\nNhap toa do diem A: " << tg.A;
    cout << "\nNhap toa do diem B: " << tg.B;
    cout << "\nNhap toa do diem C: " << tg.C;
}
int main()
{
    TAMGIAC tg;
    nhap_toa_do_tam_giac(tg);
    xuat_toa_do_tam_giac(tg);
    cout << "\nDo dai cua canh AB: " << tinh_toa_do(tg.A, tg.B);
    cout << "\nDo dai cua canh AC: " << tinh_toa_do(tg.A, tg.C);
    cout << "\nDo dai cua canh BC: " << tinh_toa_do(tg.B, tg.C);

    return 0;
}