#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <vector>
// #include "Dohoa.h"
using namespace std;
class NTN
{
public:
    NTN();
    ~NTN();
    friend istream &operator>>(istream &, NTN &);
    friend ostream &operator<<(ostream &, NTN);
    void nhapNTN();
    void xuatNTN();
    int days();
    int months();
    int years();

private:
    int day, month, year;
};
NTN::NTN()
{
    day = month = year = 0;
}
NTN::~NTN()
{
}
istream &operator>>(istream &is, NTN &in)
{
    cout << "Nhap Ngay: ";
    is >> in.day;
    while (in.day > 31)
    {
        cout << "Nhap Lai Ngay: ";
        is >> in.day;
    }
    cout << "Nhap Thang: ";
    is >> in.month;
    while (in.month > 12)
    {
        cout << "Nhap Lai Thang: ";
        is >> in.month;
    }
    cout << "Nhap Nam: ";
    is >> in.year;
    return is;
}
void NTN::nhapNTN()
{
    cout << "Ngay sinh: ";
    cin >> this->day;
    while (this->day > 31)
    {
        cout << "Nhap Lai Ngay: ";
        cin >> this->day;
    }

    cout << "Thang sinh: ";
    cin >> this->month;
    while (this->month > 12)
    {
        cout << "Ngay thang: ";
        cin >> this->month;
    }

    cout << "Nam sinh: ";
    cin >> this->year;
}
void NTN::xuatNTN()
{
    cout << this->day << "/" << this->month << "/" << this->year << "  Tuoi: " << 2021 - year << endl;
}
int NTN::days()
{
    return day;
}
int NTN::months()
{
    return month;
}
int NTN::years()
{
    return year;
}
ostream &operator<<(ostream &os, NTN out)
{
    cout << out.day << "/" << out.month << "/" << out.year << "  Tuoi: " << 2021 - out.year << endl;
    return os;
}
class nhanVien : public NTN
{
public:
    virtual void nhap();
    virtual void xuat();
    virtual int luong() = 0;

protected:
    string id;
    string sdt;
    string hoten, sex;
    NTN ngaysinh;
    string diachi;
};
void nhanVien::nhap()
{
    cout << "Ma Nhan Vien: ";
    cin >> id;

    cout << "Nhap Ho Ten: ";
    cin.ignore();
    getline(cin, hoten);

    cout << "Nhap Gio Tinh: ";
    cin >> sex;
    // getline(cin,sex);
    // cin.ignore();

    cout << "Ngay Thang Nam Sinh." << endl;
    NTN::nhapNTN();

    cout << "Nhap So Dien Thoai: ";
    cin >> sdt;

    cout << "Nhap Dia CHi: ";
    cin.ignore();
    getline(cin, diachi);
}
void nhanVien::xuat()
{
    cout << endl;
    cout << "Ma Nhan Vien: " << id << endl;
    cout << "Ho Ten: " << hoten << endl;
    cout << "Gioi Tinh: " << sex << endl;
    cout << "Ngay thang Nam Sinh: ";
    NTN::xuatNTN();
    cout << "Dia Chi: " << diachi << endl;
    cout << "So Dien Thoai: " << sdt << endl;
}
class nhanviensx : public nhanVien
{
public:
    void nhap();
    void xuat();
    int luong();

private:
    int sanpham;
};
void nhanviensx::nhap()
{
    nhanVien::nhap();
    cout << "Nhap So San Pham: ";
    cin >> sanpham;
    ofstream os;
    os.open("./input.txt", ios::app);
    if (os.is_open())
    {
        os << "\n==========Thong Tin=========";
        os << "\nNhan vien san xuat. ";
        os << "\nMa Nhan Vien: " << id;
        os << "\nHo Ten: " << hoten;
        os << "\nGioi Tinh: " << sex;
        os << "\nNgay thang nam: " << this->days() << "/" << this->months() << "/" << this->years() << " Tuoi: " << 2021 - years();
        os << "\nDia Chi: " << diachi;
        os << "\nSo Dien Thoai: " << sdt;
        os << "\nSo San Pham: " << this->sanpham;
        os << "\nLuong: " << this->luong();
        os << "\n============================";
    }
    os.close();
}
int nhanviensx::luong()
{
    return sanpham * 20000;
}
void nhanviensx::xuat()
{
    nhanVien::xuat();
    cout << "So San Pham: " << sanpham << endl;
    cout << "Tien Luong: " << luong() << endl;
    cout << endl;
}
class nhanVienBienChe : public nhanVien
{
public:
    void nhap();
    void xuat();
    int luong();

private:
    int LuongCoban;
    int HeSoLuong;
};
void nhanVienBienChe::nhap()
{
    nhanVien::nhap();
    cout << "Nhap Luong Co Ban: ";
    cin >> LuongCoban;
    cout << "Nhap He So Luong: ";
    cin >> HeSoLuong;
    ofstream os;
    os.open("./input.txt", ios::app);
    if (os.is_open())
    {
        os << "\n========Thong Tin========";
        os << "\nNhan vien bien che. ";
        os << "\nMa Nhan Vien: " << id;
        os << "\nHo Ten: " << hoten;
        os << "\nGioi Tinh: " << sex;
        os << "\nNgay thang nam: " << this->days() << "/" << this->months() << "/" << this->years() << " Tuoi: " << 2021 - years();
        os << "\nDia Chi: " << diachi;
        os << "\nSo Dien Thoai: " << sdt;
        os << "\nLuong co ban: " << LuongCoban;
        os << "\nHe So Luong: " << HeSoLuong;
        os << "\nLuong: " << this->luong();
        os << "\n=========================";
    }
    os.close();
}
int nhanVienBienChe::luong()
{
    return LuongCoban * HeSoLuong;
}
void nhanVienBienChe::xuat()
{
    nhanVien::xuat();
    cout << "Luong Co Ban: " << LuongCoban << endl;
    cout << "He So: " << HeSoLuong << endl;
    cout << "Luong: " << luong() << endl;
    cout << endl;
}
class nhanVienHopDong : public nhanVien
{
public:
    void nhap();
    void xuat();
    int luong();

private:
    int ngaycong;
    int ngaynghi;
    int tangca;
};
void nhanVienHopDong::nhap()
{
    nhanVien::nhap();
    cout << "Nhap Ngay Cong: ";
    cin >> ngaycong;
    cout << "Nhap Ngay Nghi: ";
    cin >> ngaynghi;
    cout << "Nhap So Gio Tang Ca: ";
    cin >> tangca;
    ofstream os;
    os.open("./input.txt", ios::app);
    if (os.is_open())
    {
        os << "\n========Thong Tin==========";
        os << "\nNhan vien hop dong.";
        os << "\nMa Nhan Vien: " << id;
        os << "\nHo Ten: " << hoten;
        os << "\nGioi Tinh: " << sex;
        os << "\nNgay thang nam: " << this->days() << "/" << this->months() << "/" << this->years() << " Tuoi: " << 2021 - years();
        os << "\nDia Chi: " << diachi;
        os << "\nSo Dien Thoai: " << sdt;
        os << "\nNgay Cong: " << ngaycong;
        os << "\nNgay Nghi " << ngaynghi;
        os << "\nSo Gio Tang Ca:" << tangca;
        os << "\nLuong: " << this->luong();
        os << "\n===========================";
    }
    os.close();
}
int nhanVienHopDong::luong()
{
    if (ngaynghi == 0 && tangca == 0)
    {
        return ngaycong * 250000;
    }
    if (ngaynghi != 0 && tangca == 0)
    {
        return (ngaycong - ngaynghi) * 250000;
    }
    if (ngaynghi != 0 && tangca != 0)
    {
        return ((ngaycong - ngaynghi) * 250000) + (tangca * 31000);
    }
    if (ngaynghi == 0 && tangca != 0)
    {
        return (ngaycong * 250000) + (tangca * 31000);
    }
    if (ngaynghi != 0 || ngaynghi == 0 && ngaycong == 0)
    {
        return tangca * 31000;
    }
    else
    {
        return 0;
    }
}
void nhanVienHopDong::xuat()
{
    nhanVien::xuat();
    cout << "Ngay Cong: " << ngaycong << endl;
    cout << "Ngay Nghi: " << ngaynghi << endl;
    cout << "So Gio Tang Ca: " << tangca << endl;
    cout << "Luong: " << luong() << endl;
    cout << endl;
}
class doc
{
public:
    void docfile();
};
void doc::docfile()
{
    system("cls");
    cout << "=====Danh Sach Nhan Vien File=====" << endl;
    fstream f("./input.txt", ios::in);
    string str;
    if (f.is_open())
    {
        while (!f.eof())
        {
            getline(f, str);
            cout << str << endl;
        }
    }
    f.close();
}
struct Node
{
    int luong;
    int vt;
    int kieu;
};
class Menu
{
public:
    void themNhanVien();
    void xuatNhanVien();
    void tinhTienLuong();
    void timNhanVien();

private:
    vector<nhanVien *> nhanviensx_;
    vector<nhanVien *> nhanVienBienChe_;
    vector<nhanVien *> nhanVienHopDong_;
};
void Menu::themNhanVien()
{
    nhanVien *nhanviens;
    int choose;
    char tiep;
    do
    {
        system("cls");
        cout << "1.Them Nhan Vien San Xuat." << endl;
        cout << "2.Them nhan vien Bien Che." << endl;
        cout << "3.Them nhan vien Hop Dong." << endl;
        cout << "4.Quai Lai" << endl;
        cout << "Nhap: ";
        cin >> choose;
        switch (choose)
        {
        case 1:
        {
            do
            {
                system("cls");
                for (int i = 0; i <= nhanviensx_.size(); i++)
                    cout << "Nhan vien thu: " << i + 1 << endl;
                nhanviens = new nhanviensx;
                nhanviens->nhap();
                nhanviensx_.push_back(nhanviens);
                cout << "Ban co Muon tiep tuc y/n: ";
                cin >> tiep;
                cout << endl;
                system("cls");

            } while (tiep == 'y' || tiep == 'Y');
        }
        break;
        case 2:
        {
            do
            {
                system("cls");
                for (int i = 0; i <= nhanVienBienChe_.size(); i++)
                    cout << "Nhan vien thu: " << i + 1 << endl;
                nhanviens = new nhanVienBienChe;
                nhanviens->nhap();
                nhanVienBienChe_.push_back(nhanviens);
                cout << "Ban Co Muon Tiep Tuc y/n: ";
                cin >> tiep;
                cout << endl;
            } while (tiep == 'y' || tiep == 'Y');
        }
        break;
        case 3:
        {
            do
            {
                system("cls");
                for (int i = 0; i <= nhanVienHopDong_.size(); i++)
                    cout << "Nhan vien thu: " << i + 1 << endl;
                nhanviens = new nhanVienHopDong;
                nhanviens->nhap();
                nhanVienHopDong_.push_back(nhanviens);
                cout << "Ban Co Muon Tiep Tuc y/n: ";
                cin >> tiep;
                cout << endl;
            } while (tiep == 'y' || tiep == 'Y');
            break;
        }
        default:
            break;
        }
    } while (choose != 4);
}
void Menu::xuatNhanVien()
{
    doc sc;
    int choose;
    do
    {
        //system("cls");
        cout << "\n1.Nhan vien san xuat." << endl;
        cout << "2.Nhan vien bien che." << endl;
        cout << "3.Nhan vien hop dong." << endl;
        cout << "4.doc file" << endl;
        cout << "5.quay lai" << endl;
        cout << "Nhap: ";
        cin >> choose;
        switch (choose)
        {
        case 1:
        {
            system("cls");
            //textcolor(2);
            cout << "Danh Sach Nhan Vien San Xuat." << endl;
            for (int i = 0; i < nhanviensx_.size(); i++)
            {
                cout << "Nhan vien thu: " << i + 1 << endl;
                nhanviensx_[i]->xuat();
            }
            system("pause");
        }
        break;
        case 2:
        {
            system("cls");
            //textcolor(4);
            cout << "Danh Sach Nhan Vien Bien Che." << endl;
            for (int i = 0; i < nhanVienBienChe_.size(); i++)
            {
                cout << "Nhan vien thu: " << i + 1 << endl;
                nhanVienBienChe_[i]->xuat();
            }
            system("pause");
        }
        break;
        case 3:
        {
            system("cls");
            //textcolor(6);
            cout << "Danh Sach Nhan Vien Hop Dong." << endl;
            for (int i = 0; i < nhanVienHopDong_.size(); i++)
            {
                cout << "Nhan vien thu: " << i + 1 << endl;
                nhanVienHopDong_[i]->xuat();
            }
            system("pause");
        }
        break;
        case 4:
        {
            sc.docfile();
        }
        break;
        default:
            break;
        }
    } while (choose != 5);
}
void Menu::tinhTienLuong()
{
    int choose;
    int s1 = 0, s2 = 0, s3 = 0;
    do
    {
        system("cls");
        cout << "1.Tong tien luong cua nhan vien san xuat." << endl;
        cout << "2.Tong tien luong cua nhan vien bien che." << endl;
        cout << "3.Tong tien luong cua nhan vien hop dong." << endl;
        cout << "4.Tong tien luong cua tat ca nhan vien." << endl;
        cout << "5.Quay Lai" << endl;
        cout << "Nhap: ";
        cin >> choose;
        switch (choose)
        {
        case 1:
        {
            system("cls");
            for (int i = 0; i < nhanviensx_.size(); i++)
            {
                s1 += nhanviensx_[i]->luong();
            }
            cout << endl;
            cout << "Tong Tien Luong Cua Nhan Vien San Xuat La: " << s1 << endl;
            system("pause");
        }
        break;
        case 2:
        {
            system("cls");
            for (int i = 0; i < nhanVienBienChe_.size(); i++)
            {
                s2 += nhanVienBienChe_[i]->luong();
            }
            cout << endl;
            cout << "Tong Tien Luong Cua Nhan Vien Bien Che: " << s2 << endl;
            system("pause");
        }
        break;
        case 3:
        {
            system("cls");
            for (int i = 0; i < nhanVienHopDong_.size(); i++)
            {
                s3 += nhanVienHopDong_[i]->luong();
            }
            cout << endl;
            cout << "Tong Tien Luong Cua Nhan Vien Bien Che la: " << s3 << endl;
            system("pause");
        }
        break;
        case 4:
        {
            system("cls");
            cout << endl;
            cout << "Tong Tien Tat Ca Nhan Vien La: " << s1 + s2 + s3 << endl;
            system("pause");
            break;
        }
        default:
            break;
        }
    } while (choose != 5);
}
void Menu::timNhanVien()
{
    system("cls");
    Node node;
    cout << "\nNhan vien co Luong Thap nhat la:";
    node.luong = nhanviensx_[0]->luong();
    node.vt = 0;
    node.kieu = 1;
    for (int i = 1; i < nhanviensx_.size(); i++)
    {
        if (nhanviensx_[i]->luong() < node.luong)
        {
            node.luong = nhanviensx_[i]->luong();
            node.vt = i;
            node.kieu = 1;
        }
    }
    for (int i = 0; i < nhanVienBienChe_.size(); i++)
    {
        if (nhanVienBienChe_[i]->luong() < node.luong)
        {
            node.luong = nhanVienBienChe_[i]->luong();
            node.vt = i;
            node.kieu = 2;
        }
    }
    for (int i = 0; i < nhanVienHopDong_.size(); i++)
    {
        if (nhanVienHopDong_[i]->luong() < node.luong)
        {
            node.luong = nhanVienHopDong_[i]->luong();
            node.vt = i;
            node.kieu = 3;
        }
    }
    if (node.kieu == 1)
        nhanviensx_[node.vt]->xuat();
    else if (node.kieu == 2)
        nhanVienBienChe_[node.vt]->xuat();
    else if (node.kieu == 3)
        nhanVienHopDong_[node.vt]->xuat();
    cout << "\nNhan vien co Luong cao nhat la:";
    node.luong = nhanviensx_[0]->luong();
    node.vt = 0;
    node.kieu = 1;
    for (int i = 1; i < nhanviensx_.size(); i++)
    {
        if (nhanviensx_[i]->luong() > node.luong)
        {
            node.luong = nhanviensx_[i]->luong();
            node.vt = i;
            node.kieu = 1;
        }
    }
    for (int i = 0; i < nhanVienBienChe_.size(); i++)
    {
        if (nhanVienBienChe_[i]->luong() > node.luong)
        {
            node.luong = nhanVienBienChe_[i]->luong();
            node.vt = i;
            node.kieu = 2;
        }
    }
    for (int i = 0; i < nhanVienHopDong_.size(); i++)
    {
        if (nhanVienBienChe_[i]->luong() > node.luong)
        {
            node.luong = nhanVienHopDong_[i]->luong();
            node.vt = i;
            node.kieu = 3;
        }
    }
    if (node.kieu == 1)
        nhanviensx_[node.vt]->xuat();
    else if (node.kieu == 2)
        nhanVienBienChe_[node.vt]->xuat();
    else if (node.kieu == 3)
        nhanVienHopDong_[node.vt]->xuat();
    system("pause>pls");
}
void menu(Menu quanly)
{
    int choose;
    doc *quanl;
    do
    {
        system("cls");
        cout << "==============Quan Ly Nhan Vien==============" << endl;
        cout << "1.Them Nhan vien." << endl;
        cout << "2.Xuat Nhan Vien." << endl;
        cout << "3.Tinh Luong." << endl;
        cout << "4.Nhan vien co luong thap nhat va cao nhat." << endl;
        cout << "5.Thoat!" << endl;
        cout << "Nhap: ";
        cin >> choose;
        switch (choose)
        {
        case 1:
            quanly.themNhanVien();
            break;
        case 2:
            quanly.xuatNhanVien();
            break;
        case 3:
            quanly.tinhTienLuong();
            break;
        case 4:
            quanly.timNhanVien();
            break;
        default:
            break;
        }
    } while (choose != 5);
}
int main()
{
    // ofstream os;
    // os.open("C:\\Users\\MUN\\Desktop\\DuAn_SS\\input.txt", ios::trunc);
    // resizeConsole(500, 500);
    // textcolor(11);
    Menu quanly;
    menu(quanly);
    return 0;
}
