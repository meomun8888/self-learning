/****************************************************************
	Name: class_1.cpp
	Copyright: 2021 (c)
	Author: LY THANH LONG
	Date: 13/06/2021 - 20:28 P.M
	Description: tong quan class
    1. tinh truu tuong
    2. tinh dong goi
        + tinh chat dac chung cua lap trinh huong doi tuong 
         du lieu se duoc che cho va bao boc, khong cho phep
         nguoi dung hay lap trinh vien truy xuat truc tiep 
         de thay doi du lieu cua class noi tai.
        + tao co che de ngan ngua viec goi phuong thuc cua lop
        nay tac dong hay truy xuat du lieu cua doi tuong thuoc
        class khac.
        + nguoi lap trinh vien dua vao co che nay ngan ngua viec 
        gan gia tri khong hop le vao cac thanh phan du lieu cua moi
        doi tuong.
        + khong cho truy xuat du lieu tuy tien cua class noi tai.
    3. tinh da hinh
    4. thinh thua ke
======================tinh dong goi======================================
    1.PUBLIC: 
            nhung thuoc tinh hay phuong thuc duoc khai bao voi
            tu khoa nay se co pham vi hoat dong ben trong va ben
            ngoai class va tren toan bo truong trinh.
    2.PRIVATE: 
            nhung thuoc tinh hay phuong thuc duoc khai bao voi
            tu khoa nay se co pham vi hoat dong ben trong class,
            khong duoc truy xuat ben ngoai class.
    3.PROTECTED: 
            nhung thuoc tinh hay phuong thuc duoc khai bao voi
            tu khoa nay se co pham vi hoat dong ben trong class,
            va cac class ke thua tu no.
========================get vs set================================
    co che getter va setter giup lap trinh vien chu dong truy xuat truc
    tiep thuoc tinh hay phuong thuc co tam vuc la PRIVATE 
    neu co loi say ra ho la nguoi chiu chac nhiem. 
    
*****************************************************************/
#include <iostream>
using namespace std;
class sinhvien
{
    // thuoc tinh
private:
    string _ho_ten;
    string _ma_so;
    float _diem_toan;
    float _diem_ly;

    // thuong thuc
public:
    void nhap_thong_tin();
    void xuat_thong_tin();

    // co chet getter va setter
    string geter_ho_ten() // tra ve du lieu thuoc tinh ho ten
    {
        return _ho_ten;
    }
    void seter_ho_ten(string HO_TEN) // thoi du lieu ho ten ben ngoai class
    {
        _ho_ten = HO_TEN;
    }
    // ham tao va ham huy
    sinhvien();
    ~sinhvien();
};
sinhvien::sinhvien()
{
}
sinhvien::~sinhvien()
{
}
void sinhvien::nhap_thong_tin() // :: the hien kieu du lieu thuoc class...
{
    cout << "\nNhap ma so sinh vien: ";
    //cin.ignore();
    getline(cin, _ma_so);
    cout << "\nNhap ho ten sinh vien: ";
    //cin.ignore();
    getline(cin, _ho_ten);
    cout << "\nnhap diem toan: ";
    cin >> _diem_toan;
    cout << "\nnhap diem ly: ";
    cin >> _diem_ly;
}
void sinhvien::xuat_thong_tin()
{
    cout << "\nTHONG TIN SINH VIEN.";
    cout << "\nMA SINH VIEN: " << _ma_so;
    cout << "\nHO VA TEN SINH VIEN: " << _ho_ten;
    cout << "\nDIEM TOAN: " << _diem_toan;
    cout << "\nDIEM lY: " << _diem_ly;
}
int main()
{
    sinhvien lythanhlong;// khoi tap doi tuong gia tri lythanhlong
    lythanhlong.nhap_thong_tin();
    // lythanhlong.seter_ho_ten("ly thanh long");// thay doi ten
    // cout<<"\nxuat ho ten "<<lythanhlong.geter_ho_ten();// xuat thuoc tinh
    lythanhlong.xuat_thong_tin();
    cout << "\nThe End";
    return 0;
}