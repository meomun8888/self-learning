#include<iostream>
using namespace std;
#include<math.h>

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
int main()
{
    int a = 0;
    int b = 3;
    int c = 4;
    giai_chuong_trinh_bac_2(a,b,c);
	cout<<"\nThe End";
	return 0;
}