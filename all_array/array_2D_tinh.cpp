/***********************************************************************************
	Name: array_2D_tinh.cpp
	Copyright: 2021 (c)
	Author: LY THANH LONG
	Date: 08/06/2021 - 11:27 A.M
	Description: tin chat mang 2 chieu tinh - ma tran

    Khai Niem: Mang 2 chieu chua nhieu mang 1 chieu khac va duoc
    xac dinh bang chi so dong va chi so cot.
    Quy tac: chi so dong lam truoc chi so cot.
    Cu phat:
    <kieu du lieu><ten mang>[<kich thuoc dong>][<kich thuoc cot>];
    Vd:
    int a[4][5];//khai bao mang 2 chieu so nguyen chua toi da 4 dong va 5 cot

    Dac biet: Mang 2D co so dong bang voi so cot goi la ma tran vuong                           
    + Duong cheo chinh: chinh la uong cheo xuat phat tu goc tren ben trai den goc duoi ben phai.
    + Duong cheo phu: la duong cheo xuat phat tu goc tren ben phai den goc duoi ben trai .      
    vd: int a[4][4]; 

    0 1 2 3
    0 1 2 3
    0 1 2 3
    0 1 2 3

    Duong cheo chinh: a[0][0],a[1][1],a[2][2],a[3][3]; //0 1 2 3 
    Duong cheo phu:   a[0][3],a[1][2],a[2][1],a[3][0];// 3 2 1 0
*************************************************************************************/
#include <iostream>
using namespace std;
#define MAX_DONG 100
#define MAX_COT 100
// khai bao khoi tao mang 2D so nguyen
void nhap_mang_2D(int a[][MAX_COT], int dong, int cot)
{
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            cout << "\nNhap phan tu a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
}
void xuat_mang_2D(int a[][MAX_COT], int &dong, int &cot)
{
    cout << "\n=====Xuat Mang 2D=======" << endl;
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    /*==========khoi tao mac dinh========*/
    /* cach 1: khao bao mang 1 chieu 4 giong 3 cot*/
    // int a[4][3] ={{1,2,3},{4,5,6},{7,8,9},{2,8,9}};

    /* cach 2: khao bao mang 1 chieu 4 giong 3 cot*/
    // int a[4][3] ={1,2,3,4,5,6,7,8,9,2,8,9};

    /* cach 3: khao bao mang 1 chieu 4 giong 3 cot*/
    //int a[][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 2, 8, 9};

    // xuat cac phan tu trong mang
    // for (int i = 0; i < 4; i++) //vong lap day so dong
    // {
    //     for (int j = 0; j < 3; j++) //vong lap dieu khien cot
    //     {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    /*==========khoi tao cho nguoi dung nhap vao ban phim ========*/

    int a[MAX_DONG][MAX_COT];
    int dong;
    int cot;
    do
    {
        cout << "\nNhap So Dong: ";
        cin >> dong;
        if (dong <= 0 || dong > MAX_DONG)
        {
            cout << "\nNhap lai,yeu cau [1,"<< "," << MAX_DONG << "]";
        }
    } while (dong <= 0 || dong > MAX_DONG);
    do
    {
        cout << "\nNhap So Cot: ";
        cin >> cot;

        if (cot <= 0 || cot > MAX_COT)
        {
            cout << "\nNhap lai,yeu cau [1,"<< "," << MAX_COT << "]";
        }
    } while (cot <= 0 || cot > MAX_COT);

    nhap_mang_2D(a, dong, cot);
    xuat_mang_2D(a, dong, cot);
    cout << "\nThe End";
    return 0;
}