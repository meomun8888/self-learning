/****************************************************************
	Name: contro_2.cpp
	Copyright: 2021 (c)
	Author: LY THANH LONG
	Date: 06/06/2021 - 21:44
	Description: khai bao bo nho con tro(new) vs thu hoi vung nho(delete)
    con tro gom 3 thanh phan:
    + dia chi
    + gia tri
    + mien gia tri (chinh la dia chi cua bien ma con tro do tro den)
    int a = 5;
    int *b = &a // luc nay con tro b se du dia chi cua bien a

*****************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int *b = &a;
    cout << "\nDia chi con tro a: " << &a;
    cout << "\nGia tri con tro a: " << a;
    cout << "\nDia chi con tro b: " << &b;
    cout << "\nGia tri con tro b: " << *b;
    cout << "\nMien gia tri cua b: " << b << endl; //b chua dia chi a
                                                   /*-------------------------------------------------------------------*/
    /*=============cap phat vung nho cho con tro=================*/

    //int *c;
    //*c = 65;gan giatri co con tro c, co the dc tuy trinh bien dich

    int *d = new int; //cap phat 1 o nho cho con tro d
    *d = 10;
    cout << "\nDia chi con tro b: " << &d;
    cout << "\nGia tri con tro b: " << *d;
    cout << "\nMien gia tri cua b: " << d;
    //int *d = new int[5];//cap phat mang gom 5 o nho moi o kieu du lieu integer(4 byte) sau do tro toi dia chi vung nho nay.
    cout << "\nsize d: " << sizeof(d);

    delete d; //giai phong vung nho cho con tro d
    return 0;
}