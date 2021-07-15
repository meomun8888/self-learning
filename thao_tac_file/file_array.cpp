/****************************************************************
	Name: file_array.cpp
	Copyright: 2021 (c)
	Author: LY THANH LONG
	Date: 12/06/2021 - 16:56 P.M
	Description: thao tac file tren mang
    1.Doc 1 day so nguyen tu file INPUT.txt vao mang
    + dong dau tien so luong cac so nguyen hien co trong file, vd 5
    + dong tiep theo mot day cac so nguyen, vd: 1 2 3 4 5
    2.kiem tra so nguyen to
*****************************************************************/
#include <iostream>
#include <fstream>
using namespace std;
//kiem tra phai so nguyen to hay khong
bool kiem_tra_so_ngto(int n)
{
    if (n < 2)
    {
        return false;
    }
    else //n>2
    {
        if (n == 2)
        {
            return true;
        }
        else
        {
            if (n % 2 == 0)
            {
                return false;
            }
            else // if(n%2!=0)
            {
                for (int i = 2; i < n; i++)
                {
                    if (n % i == 0)
                        return false;
                }
            }
        }
    }
    return true;
}
//in ra so nguyen to
void File()
{
    /*khi file INPUT.txt co dong dau tien la hien so luong trong file 
    vd: 
    5 // 5 chinh la n
    1 2 3 4 5    //phan tu cua mang       */
    int arr[100];
    ifstream FILE_IN;
    FILE_IN.open("./INPUT.txt", ios_base::in);
    if (FILE_IN.fail() == true)
    {
        cout << "\nFile khong ton tai !";
    }
    int n;
    FILE_IN >> n;
    for (int i = 0; i < n; i++)
    {
        FILE_IN >> arr[i];
    }
    FILE_IN.close();
    //Ghi vo file
    ofstream FILE_OUT;
    FILE_OUT.open("./OUTPUT.txt", ios::trunc);
    for (int i = 0; i < n; i++)
    {
        FILE_OUT << arr[i] << " ";
    }
    FILE_OUT.close();
}
void File_2()
{
    /*Khi file INPUT.txt khong co dong dau dien la so (n)luong phan tu cua mang
    VD:
    1 2 3 4 5
                                                                               */
    int arr[100];
    ifstream FILE_IN;
    FILE_IN.open("./INPUT.txt", ios_base::in);
    if (FILE_IN.fail() == true)
    {
        cout << "\nFile khong ton tai !";
    }
    int i = 0;
    int dem = 0;
    //doc mang so nguyen tu file  bang cach kiem tra neu con tro chỉ vị chua den chuoi file thi tiep tuc doc
    while (!FILE_IN.eof()) //<=> while(FILE_IN.eof()==false)
    {
        FILE_IN >> arr[i]; //doc tung so nguyen co trong file
        i++;
        dem++;
    }
    FILE_IN.close();
    for (int i = 0; i < dem; i++)
    {
        cout << arr[i] << " ";
    }
    // //ghi file
    ofstream FILE_OUT;
    FILE_OUT.open("./OUTPUT.txt", ios_base::trunc);
    FILE_OUT << "SO NGUEN TO: ";
    for (int i = 0; i < dem; i++)
    {
        if (kiem_tra_so_ngto(arr[i]) == true)
        {
            FILE_OUT << arr[i] << " ";
        }
    }
    FILE_OUT.close();
}
int main()
{
    File_2();
    cout << "\nThe End";
    return 0;
}
