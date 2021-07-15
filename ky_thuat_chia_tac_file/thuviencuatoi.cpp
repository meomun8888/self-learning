/****************************************************************
	Name: thuviencuatoi.h
	Copyright: 2021 (c)
	Author: LY THANH LONG
	Date: 08/06/2021  - 19 : 23 P.M
	Description: Dinh nghia ham
    chu y:
    #include<thu vien do ngon ngu lap trinh tao>
    #include "do lap trinh vien tao" 
*****************************************************************/
#include "thuviencuatoi.h" //goi lai thu vien ben file.h
bool kiem_so_nguyen_to(int n)
{
    if (n < 2)
    {
        return false;
    }
    else
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
            else
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
bool kiem_tra_so_hoan_thien(int n)
{
    int sum = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
        return true;
    return false;
}
void giai_chuong_trinh_bac_2(int &a, int &b, int &c)
{
    if (a == 0 && b == 0 && c == 0)
    {
        cout << "\nPhuong trinh co vo so nghiem ! ";
    }
    else if (a == 0 && b == 0 && c != 0)
    {
        cout << "\nPhuong trinh vo so nghiem ! ";
    }
    else if (a == 0 && b != 0 && c != 0)
    {
        cout << "\nPhuong trinh co nghiep " << (float)-c / b;
    }
    else if (a != 0 && b != 0 && c != 0)
    {
        float delta = (b * b) - (4 * a * c);
        if (delta == 1)
        {
            cout << "\nPhuong trinh co nghiep kep " << -b / (2 * a);
        }
        else if (delta < 0)
        {
            cout << "\nPhuong trinh vo nghiep ";
        }
        else
        {
            cout << "\nPhuong trinh co 2 nghiep phan biet: ";
            cout << "\nNhiep thu nhat: " << (-b + sqrt(delta)) / (2 * a);
            cout << "\nNhiep thu Hai: " << (-b - sqrt(delta)) / (2 * a);
        }
    }
}