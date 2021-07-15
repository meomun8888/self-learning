/*********************************************************************************************
	Name: 
	Copyright: 2021 (c)
	Author: LY THANH LONG
	Date: 
	Description: da hinh
    1. phuong thuc ao.
        - Nhung phuong thuc o lop cha duoc khai bao voi tu khoa
          "virtual" thi cac lop con ke thua tu no cung se cai
          dat lai cac phuong thuc "trung ten "cua lop cha- de 
          cho phep cac phuong thuc cua lop con nap chong lai 
          duoc - dinh nghia lai phuong thuc cua lop cha.
        - Neu nhu class cha khong co tu khoa "virtual" thi 
          chung ta new ra mot doi tuong con bat ky - thi no
          se mac dinh chay ve phuong thuc trung ten cua lop
          cha.
        *** TAC DUNG CUA TU KHOA "virtual", neu nhung cac phuong
        thuc cua class cha co khai bao tu khoa virtual thi khi
        new ra mot doi tuong Class con bat ky- thi do no se chay 
        vao phuong thuc trung ten cua lop con do.
         **Cu phap khai bao phuong thuc thuan ao***
      <virtual><kieu du lieu> <ten phuong thuc> (cac tham so chuyen vao neu co);

    2. phuong thuc thuan ao.
      - Nhung phuong thuc cua class cha - co the dinh nghia do class
        con ke thua tu no dam nhan - bat buoc.
      * Cu phap khai bao phuong thuc thuan ao *
      <virtual><kieu du lieu> <ten phuong thuc> (cac tham so chuyen vao neu co) = 0;
    **luu y: neu o class cha khai bao phuong thuc thuan ao - thi quy tac cac class con
              nao ma ke thua lai lop cha -  bat buoc phai dinh nghia lai class cha do
              neu class con khong dinh nghia => se bi loi.

      //////////////////////////////CACH DUNG/////////////////////////////////
    - khi nao dung phuong thuc ao ?
      + khi class cha co thong tin can tinh toan.
    - khi nao dung phuong thuc thuan ao ?
      + khi class cha khong co thong tin can tinh toan(class con se dinh nghia lai)
    TUY CO UNG BIEN

    "BIEN PHUONG THUC THUAN AO, SANG PHUONG THUC AO"
    virtual int tinh_toan()=0
    ta doi thanh
    virtual int tinh_toan()
    {
      return 0;
    }
******************************************************************************************/
#include <iostream>
using namespace std;

int main()
{
  cout << "\nThe End";
  return 0;
}