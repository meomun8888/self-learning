/****************************************************************
	Name: 
	Copyright: 2021 (c)
	Author: LY THANH LONG
	Date: 
	Description: 
*****************************************************************/
#include <iostream>
#include <string>
using namespace std;

class nhanvien
{
protected:
    string _id;
    string _hoTen;
    string _ngaySinh;
    int _tuoi;
    // string _phongBan;
    string _chucVu;

public:
    virtual void nhap_thong_tin();
    virtual void xuat_thong_tin();
    virtual int tinh_tien_luong();
    nhanvien();
    ~nhanvien();
};
nhanvien::nhanvien()
{
}
nhanvien::~nhanvien()
{
}
void nhanvien::nhap_thong_tin()
{
    cout << "\n=========NHAP THONG TIN CHAN VIEN===========\n";
    //while (getchar() != '\n'); //rewind(stdin);
    cout << "\nNhap ID: ";
    //rewind(stdin);
    fflush(stdin);
    getline(cin, _id);

    cout << "\nNhap Ten: ";
    fflush(stdin);
    getline(cin, _hoTen);

    cout << "\nNhap Tuoi: ";
    cin >> _tuoi;

    cout << "\nNhap ngay sinh(dd/mm/yy): ";
    cin.ignore();
    getline(cin, _ngaySinh);

    //cout<<"\nNhap phong ban: ";
    // fflush(stdin);
    // getline(cin,_phongBan);

    cout << "\nNhap chuc vu: ";
    fflush(stdin);
    getline(cin, _chucVu);
}
void nhanvien::xuat_thong_tin()
{
    cout << "\n=========Thong Tin Nhan vien========\n";
    cout << "\nHo va ten: " << _hoTen;
    cout << "\nID: " << _id;
    cout << "\nTuoi: " << _tuoi;
    cout << "\nNgay sinh (dd/mm/yyyy): " << _ngaySinh;
    cout << "\nChuc vu: " << _chucVu;
}
class quanly
{
private:
    /* data */
public:
    quanly(/* args */);
    quanly();
};
quanly
    : quanly(/* args */)
{
}
quanly ::quanly()
{
}

int main()
{
    nhanvien x;
    x.nhap_thong_tin();
    x.xuat_thong_tin();
    cout << "\nThe End";
    return 0;
}