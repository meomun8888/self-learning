/****************************************************************
	Name: struct_mang_dong.cpp
	Copyright: 2021 (c)
	Author: LY THANH LONG
	Date: 09/06/2021 - 21:14 P.M
	Description: khai bao struct phan so
    1. nhap danh sach cac phan so
    2. xuat danh sach cac phan so
    3. tim phan so lon nhat
    4. tinh tong cac phan so

    **luu y ham 80 nha
    chia nho bai toan ra 1 ham roi moi lam nhieu ham
*****************************************************************/
#include <iostream>
using namespace std;
struct phanso
{
    int tu;
    int mau;
};
typedef struct phanso PHANSO; //chuyen
void nhap_phan_so(PHANSO &ps)
{
    cout << "\nNhap tu so: ";
    cin >> ps.tu;
    cout << "\nNhap mau so: ";
    cin >> ps.mau;
}
void xuat_phan_so(PHANSO ps)
{
    cout << ps.tu << "/" << ps.mau << endl;
}
/*===========khai bao DANH SACH struct ==========*/
struct danhsach
{
    PHANSO *arr;
    int n;
};
typedef struct danhsach DANHSACH;
void nhap_danh_sach_phan_so(DANHSACH &ds)
{
    for (int i = 0; i < ds.n; i++)
    {
        cout << "\nPhan so thu " << i + 1;
        nhap_phan_so(ds.arr[i]);
    }
}
void xuat_danh_sach_phan_so(DANHSACH ds)
{
    cout << "\nDanh sach phan so " << endl;
    for (int i = 0; i < ds.n; i++)
    {
        cout << "\nPhan so thu " << i + 1 << ": ";
        xuat_phan_so(ds.arr[i]);
    }
}
//ham tim uoc chung lon nhat
int UCLN(int x, int y)
{
    if (x < 0)
    {
        x *= -1;
    }
    if (y < 0)
    {
        x *= -1;
    }
    while (x != y)
    {
        if (x > y)
        {
            x = x - y;
        }
        else
        {
            y = y - x;
        }
    }
    return x;
}
//ham rut gon 1 phan so
void rut_gon_1_phan_so(PHANSO &x)
{
    /*
    x.tu = x.tu /UCLN(x.tu,x.mau);
    x.mau = x.mau/UCLN(x.mau,x.mau);
    loi khi cap nhat lai tu so
    */
    int ucln = UCLN(x.tu, x.mau);
    x.tu = x.tu / ucln;
    x.mau = x.mau / ucln;
}
//rut gon tat ca cac phan so
void rut_gon_danh_sach_phan_so(DANHSACH &ds)
{
    cout << "\nDanh sach phan so sau khi rut gon: ";
    for (int i = 0; i < ds.n; i++)
    {
        rut_gon_1_phan_so(ds.arr[i]);
    }
    xuat_danh_sach_phan_so(ds);
}
//ham tinh tong 2 phan so va (tra ve 1 phan so)
PHANSO tinh_tong_2_phan_so(PHANSO x, PHANSO y)
{
    PHANSO ketqua;
    if (x.mau != y.mau)
    {
        ketqua.tu = (x.tu * y.mau) + (y.tu * x.mau);
        ketqua.mau = x.mau * y.mau;
    }
    else
    {
        ketqua.tu = x.tu + y.tu;
        ketqua.mau = x.mau + y.mau;
    }
    return ketqua;
}
PHANSO tinh_tong_danh_sach_phan_so(DANHSACH ds)
{

    PHANSO ketqua = ds.arr[0];
    /*ketqua.tu = ds.arr[0].tu;
    ketqua.tu = ds.arr[0].mau;*/

    for (int i = 1; i < ds.n; i++)
    {
        ketqua = tinh_tong_2_phan_so(ketqua, ds.arr[i]);
    }
    return ketqua;
}
int main()
{
    DANHSACH ds; //khai bao struc danh dach phan so
    cout << "\nNhap so luong phan tu phan so: ";
    cin >> ds.n;

    //cap phat mang dong
    ds.arr = new PHANSO[ds.n];
    nhap_danh_sach_phan_so(ds);
    xuat_danh_sach_phan_so(ds);
    rut_gon_danh_sach_phan_so(ds);
    cout << "\ntong tat cac cac phan so\n";
    PHANSO ketqua;
    ketqua = tinh_tong_danh_sach_phan_so(ds);
    rut_gon_1_phan_so(ketqua);
    xuat_phan_so(ketqua);
    cout << "\nThe End";
    return 0;
}