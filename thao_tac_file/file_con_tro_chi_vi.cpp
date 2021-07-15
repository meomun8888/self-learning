/****************************************************************
	Name: 
	Copyright: 2021 (c)
	Author: LY THANH LONG
	Date: 12/06/2021 - 20:09 P.M
	Description: tong quan con tro chi vi link (https://youtu.be/-eJd8yggcaA)
    
    - seekg(x,y);//ham dich chuyen con cho chi vi
        + x la so byte can dich chuyen(luon luon la so nguyen)
            - am: dich chuyen ve ben trai
            - duong: dich chuyen ve ben phai
        + y vi tri bat dau dich
            - y = 0 : dau file
            - y = 1 : vi tri hien tai
            - y = 2 : cuoi file
    **chu y: hien tai toi dang code tren liux nen 1 so ham se khong chay :(( phan nay doc them
*****************************************************************/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream FILE_IN;
    FILE_IN.open("./INPUT.txt", ios_base::in);
    if (FILE_IN.fail() == true)
    {
        cout << "\nFIle khong ton tai !";
    }
    FILE_IN.seekg(3,2); // dich sang phai 3 bye bat dau tu vi tri dau file, ham nay linux loi
    int x;
    FILE_IN >> x;
    cout << x;
    FILE_IN.close();
    cout << "\nThe End";
    return 0;
}