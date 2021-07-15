/****************************************************************
	Name: operator_overloading.cpp
	Copyright: 2021 (c)
	Author: LY THANH LONG
	Date: 09/06/2021 - 20:13 P.M
	Description: nap chong toan tu
*****************************************************************/
#include <iostream>
#include <istream>
using namespace std;
struct phanso
{
    int tuso;
    int mauso;
};
typedef struct phanso PHANSO; // chuyen ten
//nap chong toan tu >> den nhap du lieu cho ban phim kieu cau truc
istream &operator>>(istream &is, PHANSO &ps)
{
    cout << "\nNhap  tu so: ";
    is >> ps.tuso;
    cout << "\nNhap mau so: ";
    is >> ps.mauso;
    cout << endl;
    return is;
}
//nap chong toan tu << den xuat du lieu cho ban phim kieu cau truc
ostream &operator<<(ostream &os, PHANSO ps)
{
    os << ps.tuso << "/" << ps.mauso << endl;
    return os;
}
//ham cong 2 phan so
PHANSO cong_phan_so(PHANSO x, PHANSO y)
{
    PHANSO tam;
    tam.tuso = (x.tuso * y.mauso) + (y.tuso * x.mauso);
    tam.mauso = x.mauso * y.mauso;
    return tam;
}
// nap chong toan tu +  de cong truc tiep 2 kieu di lieu cau truc (khong can goi ham)
PHANSO operator+(PHANSO x, PHANSO y)
{
    PHANSO tam;
    tam.tuso = (x.tuso * y.mauso) + (y.tuso * x.mauso);
    tam.mauso = x.mauso * y.mauso;
    return tam;
}
int main()
{
    PHANSO x;
    PHANSO y;
    cout << "\nNhap phan so x: ";
    cin >> x;
    cout << "\nNhap phan so y: ";
    cin >> y;
    cout << "\nphan so x: " << x;
    cout << "\nPhan so y: " << y;
    // PHANSO tam = cong_phan_so(x,y);
    // cout<<"\n tong 2 phan so: "<<tam;
    cout << "\nTong 2 Phan so: " << x + y; // nhap chong lai toan tu +
    cout << "\nThe End";
    return 0;
}