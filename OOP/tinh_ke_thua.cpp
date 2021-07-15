/****************************************************************
	Name: 
	Copyright: 2021 (c)
	Author: LY THANH LONG
	Date: 
	Description: tinh thua ke
    su trao doi thong tin tu class A sang Class B
    - Class cha ma co Class con ke thua lai thi cac thuoc tinh
    cua Class cha se de o tam vuc PROTECTED.
    + PROTECTED khi ta khai bao cac thuoc tinh hay phuon thuc voi 
    tam vuc nay se co pham vi hoat dong trong Class noi tai va class
    con ke thua lai no.
    ==> ke thua la chung ta ta se di kiem nhung cai gi "CHUNG" sau
    do dem di tao 1 class =>> Class cha.
    ===> khi mot lop co ke thua tu class cha => thang cha co cai gi
        thang con co cai do.
    + loi ich ke thua:
        - tranh tinh trang du thua du lieu ***
*****************************************************************/
#include <iostream>
using namespace std;
class docgia
{
protected:
    string _ho_ten;
    string _ngay_than_nam;
    int _tuoi;
    int _so_thang;

public:
    void nhap_thong_tin();
    void xuat_thong_tin();
    docgia();
    ~docgia();
};
docgia::docgia()
{
}
docgia::~docgia()
{
}
void docgia::nhap_thong_tin()
{
    cout << "\nNhap Ten Doc Gia: ";
    fflush(stdin);
    getline(cin, _ho_ten);
    cout << "\nNhap tuoi: ";
    cin >> _tuoi;
    cout << "\nSo thang hieu luc: ";
    cin >> _so_thang;
    cout << "\nNhap ngay lap the(dd/mm/yy): ";
    cin.ignore();
    getline(cin, _ngay_than_nam);
}
void docgia::xuat_thong_tin()
{
    cout << "\nNhap Ten Doc Gia: " << _ho_ten;
    cout << "\nNhap tuoi: " << _tuoi;
    cout << "\nSo thang hieu luc: " << _so_thang;
    cout << "\nNhap ngay lap the(dd/mm/yy): " << _ngay_than_nam;
}
class treEm : public docgia
{
private:
    string _ho_ten_nguoi_dai_dien;

public:
    void nhap_thong_tin();
    void xuat_thong_tin();
    int tinh_tien_luong();
};
void treEm::nhap_thong_tin()
{
    docgia::nhap_thong_tin();
    cout << "\nnhap ho ten nguoi dam ho: ";
    cin.ignore();
    getline(cin, _ho_ten_nguoi_dai_dien);
}
int treEm::tinh_tien_luong()
{
    return _so_thang * 5000;
}
void treEm::xuat_thong_tin()
{
    docgia::xuat_thong_tin();
    cout << "\nNguoi Dam ho: " << _ho_ten_nguoi_dai_dien;   
    cout << "\ntien thue sach: " << tinh_tien_luong();
}
int main()
{
    treEm *x = new treEm;
    x->nhap_thong_tin();
    x->xuat_thong_tin();
    cout << "\nThe End";
    return 0;
}