/* khai bao con tro 
   cach con tro hoat dong*/
#include <iostream>
using namespace std;

int main()
{
    int a = 5; // khoi tao bien so nguyen a co gia tri la 5
    int *b;    /*khai bao bien con tro b, co kieu du lieu con tro la so nguyen
    nghia la con tro b chi chua du lieu so nguyen ko phai kieu du lieu cua con tro*/
    int *c;
    b = &a; /* b chua di chi cua a*/
    c = b;  //c d deu la con tro nen ko can & vi (ban chat con cho chua dia chi)LL
    a++;    //gia tri cua a thay doi thi b cung thay doi
    (*b)++; //phai bo trong ngoac gia tri cua con tro b thay doi thi a cung thay doi
    //*b++; se tang o nho  cua bien b len luc nay ko phai la o nho cua a nua
    cout << "\nDia chi cua bien a: " << &a;
    cout << "\nGia tri cua bien a: " << a;
    cout << "\nDia chi cua bien b: " << &b;
    cout << "\nGia tri cua bien b: " << *b;
    cout << "\nMien gia tri cua bien b: " << b << endl;
    cout << "\nDia chi cua c: " << &c;
    cout << "\nGia tri cua c: " << *c;
    cout << "\nMien gia tri cua c: " << c;

    cout << "\n====================================" << endl;

    //cout<<"kich thuoc: "<<sizeof(a);//ham tra ve kich thuoc cua bien
    int *x;         // luc nay con tro chi chua di chi, chua co vung nho de chua di chi
    x = new int[1]; //cap phat bo nho cho con tro
    cout << "kich thuoc x: " << sizeof(x) << " byte" << endl;
    /*void* con tro vo kieu, tro den moi kieu du lieu*/

    void *h = &a; //con tro vo dinh chua di chi bien a

    cout << "\nDia chi cua H: " << &h;
    cout << "\nGia tri chua H: " << (int *)h; //tro vo kieu nhung xuat gia tri phai (ep kieu) moi xuat ra duoc
    cout << "\nMien gia tri H: " << h;

    cout << "\n===========giai phong bo nho =======" << endl;
    /*tat ca cac vung nho cap phat cho con tro nam trong vung nho HEAP SEGMENT
    khong thuoc CPU quan ly - nen nguoi dung phai tu giai phong
    ==> cap phat phai giai phong, hoac phai tat may tinh moi giai phong bo nho nay */

    /*sang bai contro_2.cpp biet them cac khai bao va thu hoi bo nho*/
    return 0;
}