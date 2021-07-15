/****************************************************************
	Name: array_list.cpp
	Copyright: 2021 (c)
	Author: LY THANH LONG
	Date: 24/06/2021 - 19:52 P.M
	Description: lien ket don.

    Nhung thu can nam ro:
    1.Ham ?
    2.Mang 1 chieu 
        - Tinh
        - Dong
    3.Con tro
    4.struct
    5.File
========================UU DIEM VA NHUOC DIEM=======================
    ***MANG 1 CHIEU
    -UU DIEM: 
            1.TRUY XUAT DEN TUNG PHAN TU CUA MANG THONG QUA TOANS TU
            CHI SO.
            2.IT TON BO NHO

    -NHUOC DIEM: 
            1.VIEC THEM XOA PHAN TU BAN CHAT KHONG PHAI THEM, XOA MA DO 
            CHI LA VIEC THAY DOI VI TRI CAC PHAN TU CHO NHAU (GAN DE).
            2.PHAI BIET TRUOC SO LUONG PHAN TU MANG.
            3.CAC PHAN TU PHAI LAM LIEN TIEP VOI NHAU TRONG BO NHO MAY TINH
            DE BI PHAN MANG BO NHO. 
    *****LIST
    - UU DIEM: 
             1.VIEC THEM, XOA DON GIAN CHI CAN THAY DOI MOI LIEN KET GIUA
             CAC NODE VOI NHAU.
             2.KHONG CAN BIET TRUOC SO LUONG PHAN TU.
             3.CAC PHAN TU KHONG CAN NAM LIEM TIEP TRONG BO NHO MAY TINH
             => KHAC PHUC DUOC TINH TRANG PHAN MANH BO NHO
    - NHUOC DIEM:
             1.KHONG THE TRUY XUAT DEN TUNG PHAN TU CUA DANH SACH THONG
             QUA TOAN TU CHI SO MA PHAI DUYET TUAN TU THONG QUA CAC PHAN
             TU KHAC.
             2.TON BO NHO - DO CAN PHAI TRUA THEM CON TRO.
===============================THUC HANH==============================
    1. nhap danh sach lien ket don cac so nguyen.
    2. tim gia tri lon nhat trong mang
*****************************************************************/
#include <iostream>
using namespace std;
struct node
{
    int data;           // du lieu chua trong 1 node
    struct node *pNext; // con tro lien ket giua cac node voi nhau
};
typedef struct node NODE; // chuyen node thanh NODE (c =>> c++)
struct list
{
    NODE *pHead; // node quan ly dau danh sach
    NODE *pTail; // node quan ly cuoi danh sach
};
typedef struct list LIST; // thay the list thanh LIST

/*========================khoi tao===============================*/
void khoi_tao(LIST &l)
{
    // khoi tao 2 node tro den null, vi danh sach chua co data
    l.pHead = NULL;
    l.pTail = NULL;
}
// ham khoi tao 1 node
NODE *khoi_tao_node(int x)
{
    NODE *p = new NODE; // cap phat vung nho cho node  p
    if (p == NULL)
    {
        cout << "\nKhong du bo nho de cap phat !\n";
        return NULL;
    }
    p->data = x;     // truyen gia tri x vao cho data
    p->pNext = NULL; // dau tien khai bao node thi node do chua co lien ket node nao het  ==> con tro se tro den null
    return p;
}
// ham them node vao dau danh sach lien ket
void them_pt_vao_dau_danh_sach(LIST &l, NODE *p)
{
    // danh sach dang rong
    if (l.pHead == NULL)
    {
        l.pHead = l.pTail = p; // node dau cung chinh la node cuoi va la p
    }
    else
    {
        p->pNext = l.pHead; // cho con tro cua node can them la lien ket dau - phead
        l.pHead = p;        // cap nhat lai pHead chinh la p
    }
}
// ham them node p vao cuoi danh sach lien ket don
void them_pt_vao_cuoi_danh_sach(LIST &l, NODE *p)
{
    // danh sach dang rong
    if (l.pHead == NULL)
    {
        l.pHead = l.pTail = p; // node dau cung chinh la node cuoi va la p
    }
    else
    {
        l.pTail->pNext = p; // cho con tro cua node can them la lien ket dau - pTail
        l.pTail = p;        // cap nhat lai p la node pTall
    }
}
// xuat danh sach lien ket don
void xuat_list(LIST l)
{
    for (NODE *k = l.pHead; k != NULL; k = k->pNext)
    {
        cout << k->data << " ";
    }
}
// tim gia tri lon nhat
int max(LIST &l)
{
    int max = l.pHead->data;                                // gia su node dau la node lon nhat
    for (NODE *k = l.pHead->pNext; k != NULL; k = k->pNext) // bat dau duyt tu node thu 2 kiem tra
    {
        if (max < k->data)
        {
            max = k->data; //cap nhat lai gia tri
        }
    }
    return max;
}
int main()
{
    LIST l;
    khoi_tao(l);
    int n;
    cout << "\n nhap so luong node can them: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "\nNhap gia tri so nguyen: ";
        cin >> x;
        NODE *p = khoi_tao_node(x);       // khoi tao node so nguyen
        them_pt_vao_cuoi_danh_sach(l, p); // them pt vao dau lien ket
    }
    cout << "\n xuat danh sach\n";
    xuat_list(l);
    cout << "\ngia tri lon nhat: " << max(l);
    cout << "\nThe End";
    return 0;
}