/******************************************************************************************
	Name: file_1.cpp
	Copyright: 2021 (c)
	Author: LY THANH LONG
	Date: 12/06/2021 - 14:17 P.A
	Description: tong quan ve file, che do lam viec cua file.
    file la co so can ban ve luu tru du lieu(can ban hoc luu tru voi  sql)
	+ lam viec voi kieu du lieu co ban (so nguyen, so thuc...)
	+ kieu du lieu do nguoi dung dinh nghia struc...
	
	=============================FILE======================================================
	#include<fstream> // thu vien ho tro thao tac voi file

	1. ifstream day la class co chuc nang ho tro chung ta doc data tu file ve chuong chinh
	2. ofstream day la class co chuc nang ho tro chung ta gi data tu chuong trinh vao file

	==============================CHE DO LAM VIEC CUA FILE=================================
	ios:: in  		//mo 1 tep tin de doc.
	ios:: out 		//mo 1 tep tin co san de gi.
	ios:: app		//mo 1 tep tin co san de gi du lieu vao cuoi tep.
	ios:: ate		//mo tep tin va dat con tro tep tin vao cuoi tep
	ios:: trunc		//neu tep tin co san thi du lieu cua tep se bi mat
	ios:: nocreate  //mo 1 tep tin bat buoc phai ton tai
	ios:: noreplace //chi mo tep tin khi tep tin chua ton tai	
	ios:: binary	//mo mot tep tin che do nhi phan khi file duoc mo ra che de nay thi du lieu se
					duoc doc hay ghi tu 1 dinh danh nguyen thuy nghi phan.
	ios::text		mo 1 tap tin che do van ban

********************************************************************************************/
#include <iostream>
#include <fstream> // thu vien ho tro thao tac voi file
using namespace std;
int main()
{
	/*=========================================DOC FILE===================================*/
	/*CU PHAP: istream <ten bien file>; */
	//Buoc 1 : khia bao ra bien de doc file
	ifstream fileIn; //khai bao ra 1 bien filein de doc du lieu tu file
	//Buoc 2: Mo file can doc du lieu
	// open(<ten duong dan den cai file can mo - doc du lieu>, < che do lam viec voi file>);
	//cach doc file tu linux
	fileIn.open("./input.txt", ios_base::in); //ios_base::in doc du lieu/
	if (fileIn.fail() == true)
	{
		cout << "\nfile cua ban khong ton tai !";
		return 0; // ket thuc chuong trinh
	}
	cout << "\nfile ton tai";
	//BUOC 3 doc du lieu thu file ra chuong trinh
	int x, y;
	//cin>>x;// doc tu ban phim
	fileIn >> x; //doc du lieu tu file
	//cin>>y;
	fileIn >> y; //doc du lieu tu file
	//cout << "tong 2 so nguyen : " << x + y;
	//BUOC 4: Doc file Lai
	fileIn.close();
	/*=============================GI FILE===================================*/
	ofstream fileOut;
	fileOut.open("./output.txt",ios_base::out);
	fileOut << x <<"+"<< y<<" = "<<x + y;//lay x cong y roi gi vao file 
	//fileOut<<""<<20;
	fileOut.close();
	cout << "\nThe End";
	return 0;
}