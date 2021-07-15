/************************************************************************************************
	Name: struct_1.cpp
	Copyright: 2021 (c)
	Author: LY THANH LONG
	Date: 09/06/2021 11:36 A.M
	Description: struct la co so cua lap trinh huong doi tuong
    khai bao: 
    struct <ten struct>
    {
        <kieu du lieu> <ten bien>;
        <kieu du lieu> <ten bien>;
        .........................n;
    };
    cach 1:
    toan tu gan (=) trong struct 
    **luu y
    neu trong struct a ma co BIEN CON TRO(*), thi se ko the gan tu struct a nay sang struct b;
    cach 2:
    gan tung thanh phan cua struct nay tuong ung qua cho struct kia
    y.hoten = x.hoten;
    y.mass = x.mass;
    y.diem = x.diem;ồi

**********************************************************************************************/
#include <iostream>
using namespace std;
struct sinhvien
{
    string hoten;
    string massv;
    float *diem;
};
//dinh nghia struct sinh vien Thanh SINHVIEN
//typedef struct sinhvien SINHVIEN;// c can dong nay de chuyen tham so, c++ ko can
void nhap_thong_tin_sinh_vien(sinhvien &sv)
{
    cout << "\nNhap ho ten sinh vien: ";
    fflush(stdin); //xoa bo nho dem
    //cin.ignore();//xoa bo nho dem
    getline(cin, sv.hoten);
    cout << "\nNhap ma sinh vien: ";
    getline(cin, sv.massv);
    cout << "\nnhap diem: ";
    cin >> *(sv.diem); //nhap gia tri cua con tro
}
void xuat_thong_tin_sinh_vien(sinhvien sv)
{
    cout << "\nho ten sinh vien: " << sv.hoten;
    cout << "\nma sinh vien: " << sv.massv;
    cout << "\n diem: " << *(sv.diem); //xuat gia tri cua con tro
    cout << endl;
}
int main()
{
    sinhvien x;
    sinhvien y;
    nhap_thong_tin_sinh_vien(x);
    //cach 1
    //y = x;// neu trong struct x ma co bien con tro thi se ko the gan tu struct x nay sang struct y
    // cach 2: cach nay co con tro thi ta se gan duoc(ban chat con tro luu dia chi)
    y.hoten = x.hoten;
    y.massv = x.massv;
    y.diem = x.diem;
    xuat_thong_tin_sinh_vien(y);
    cout << "\nThe End";
    return 0;
}