#include <iostream>
using namespace std;

const float PI = 3.14;
//HOAN THANH MENU HOAN CHINH
void menu()
{
    char t;
    int luachon;
    do
    {
        system("cls");
        cout << "====Moi ban Chon ========" << endl;
        cout << "1.Nhap so Nguyen duong n." << endl;
        cout << "2.Tong i den n" << endl;
        cout << "3." << endl;
        cout << "4." << endl;
        cout << "=========End==============" << endl;
        cout << "Ban chon: ";
        cin >> luachon;
        switch (luachon)
        {
        case 1:
        {
            int n;
            do
            {
                cout << "Nhap so nguyen duong N: ";
                cin >> n;
                if (n > 5 && n % 2 != 0)
                {
                    cout << "\n gia tri khong thoa man: ";
                }
            } while (n > 5 && n % 2 != 0);
            cout << n;
            break;
        }
        case 2:
        {
            int n;
            int sum = 0;
            cout << "Nhap n";
            cin >> n;
            for (int i = 1; i <= n; i++)
            {
                sum += i;
            }
            cout << "Sum n: " << sum;
            break;
        }
        case 3:
        {
            float n;
            cout << "Nhap ban kinh: ";
            cin >> n;
            cout << n * PI;
            break;
        }
        default:
            cout << "moi Nhap lai";
        }
        cout << "\nBan Muon Tiep Tuc Y/N: ";
        cin >> t;
    } while (t == 'Y' || t == 'y');
}

int main()
{
    menu();
    cout << "\nThe End.";
    return 0;
}