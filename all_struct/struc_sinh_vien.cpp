/****************************************************************
	Name: struc_sinh_vien.cpp
	Copyright: 2021 (c)
	Author: LY THANH LONG
	Date: 08/06/2021 - 22:12 P.M
	Description: Quan ly sinh vien cua truong dai hoc

    Biet thuong tin sinh vien gom"
    + ma sinh vien
    + ten sinh vien
    + nam sinh
    + diem trung binh
    1.khai bao cau truc sinh vien
    2.Nhap danh sach sinh vien
    3.xuat danh sach sinh vien
    4.tim kiem sinh vien dua vao ma sinh vien 
    5.them sinh vien vao 1 vi tri bat ky
    6.xoa sinh vien co ma sinh vien bat ky
    7.sap sep sinh vien tang dan them diem trung binh
    8.xuat ra file // them chuc nang nay sau
*****************************************************************/
#include <iostream>
using namespace std;
#define MAX 100
struct sinhvien
{
    string maso;
    string hoten;
    int namsinh;
    float diemtrung_bt;
};
typedef struct sinhvien SINHVIEN;
void nhap_thong_tin_sinh_vien(SINHVIEN &s)
{
    while (getchar() != '\n')
        ; //rewind(stdin);
    cout << "\nNhap ma so sinh vien: ";
    //cin.ignore();
    getline(cin, s.maso);
    cout << "\nNhap ho va ten sinh vien: ";
    //cin.ignore();
    getline(cin, s.hoten);
    cout << "\nNhap nam sinh: ";
    cin >> s.namsinh;
    cout << "\nnhap diem trung binh: ";
    cin >> s.diemtrung_bt;
}
void xuat_thong_tin_sinh_vien(SINHVIEN s)
{
    cout << "\nMa so sinh vien: " << s.maso;
    cout << "\nHo va ten sinh vien: " << s.hoten;
    cout << "\nNam sinh: " << s.namsinh;
    cout << "\nDiem trung binh: " << s.diemtrung_bt;
}
void nhap_danh_sach_sinh_vien(SINHVIEN array[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nnhap thong tin sinh vien thuc " << i + 1 << endl;
        nhap_thong_tin_sinh_vien(array[i]);
    }
}
void xuat_danh_sach_sinh_vien(SINHVIEN array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nthong tin sinh vien thuc " << i + 1 << endl;
        xuat_thong_tin_sinh_vien(array[i]);
    }
}
void tim_sinh_vien_msv(SINHVIEN array[], int &n)
{
    string masv_tim;
    cin >> masv_tim;
    for (int i = 0; i < n; i++)
    {
        if (array[i].maso == masv_tim)
        {
            xuat_thong_tin_sinh_vien(array[i]);
        }
    }
}
void them_sinh_vien_vi_tri_bat_ky(SINHVIEN array[], int &n, int vitri, SINHVIEN &x)
{
    for (int i = n; i >= vitri; i--)
    {
        array[i + 1] = array[i];
    }
    array[vitri] = x;
    n++;
}
void xoa(SINHVIEN array[], int &n, int xoa)
{
    for (int i = xoa + 1; i < n; i++)
    {
        array[i - 1] = array[i];
    }
    n--;
}
void xoa_sinh_vien(SINHVIEN array[], int &n, string ms)
{
    cout << "\n sau Khi xoa sinh vien ";
    for (int i = 0; i < n; i++)
    {
        if (array[i].maso == ms)
        {
            xoa(array, n, i);
        }
    }
    xuat_danh_sach_sinh_vien(array, n);
}
void sap_sep_diem_tb(SINHVIEN array[], int &n)
{
    cout << "\nsinh vien sau khi sap sep diem trung binh: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i].diemtrung_bt >= array[j].diemtrung_bt)
            {
                swap(array[i], array[j]);
            }
        }
    }
    xuat_danh_sach_sinh_vien(array, n);
}
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void menu()
{
    SINHVIEN array[MAX];
    int n;
    char t;
    int luachon;
    do
    {
        cout<<"\n1.Them sinh vien.";
        cout<<"\n2.xuat sinh vien.";
        cout<<"\n3.Tim sinh vien.";
        cout<<"\n4.them sinh vien.";
        cout<<"\n5.danh sach sinnh vien diem cao.";
        cout<<"\nBan chon: ";
        cin>>luachon;
    switch (luachon)
    {
        case 1:
            {
                    do
                    {
                        /* code */
                    
                    cout<<"\nNhap so luong sinh vien\n";
                    cin>>n;
                    for(int i = 0;i<n; i++)
                    {
                        cout<<"\nsinh vien thu: "<<i+1<<endl;
                        nhap_danh_sach_sinh_vien(array,n);
                        system("cls");
                        cout<<"\naBan muon tiep tuc y/n";
                        cin>>t;
                        system("pause");
                    }
                 } while (t == 'y'||t=='Y');
            }
            break;
        case 2: 
            {
                for(int i = 0;i<n;i++)
                {
                    xuat_danh_sach_sinh_vien(array,n);
                }
            }
        default:
            break;
        }
    }while (luachon >=5 );
} 

int main()
{
    menu();
   // SINHVIEN array[MAX]; // khai bao mang sing vien chua 100 sinh vien
    //SINHVIEN x;
   // int n;
   // cout << "\nNhap so danh sach sinh vien: ";
    //cin >> n;
    //nhap_danh_sach_sinh_vien(array, n);
    //xuat_danh_sach_sinh_vien(array, n);
    //cout << "\nnhap ma sinh vien can tim ";
    //tim_sinh_vien_msv(array, n);
    // cout << "\nThem sinh vien vao vi tri: ";
    // int vt;
    // cin >> vt;
    // cout << "\nNhap thong tin sinh vien vua them: ";
    // nhap_thong_tin_sinh_vien(x);
    // them_sinh_vien_vi_tri_bat_ky(array, vt, x); bug
    // string xoa;
    // cout << "\nNhap Ma sinh vien can xoa: ";
    // cin>>xoa;
    // xoa_sinh_vien(array,n,xoa);
    //sap_sep_diem_tb(array, n);
    cout << "\nThe End";
    return 0;
}