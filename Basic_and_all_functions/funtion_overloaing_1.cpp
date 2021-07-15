#include <iostream>
using namespace std;
/*nap chong toan tu cho phep ham cung ten nhung phai
  khac kieu du lieu, khac kieu tham so, khac so luong tham so*/

//tong 2 so nguyen
int sum(int a, int b)
{
    return a + b;
}
//tong 4 so nguyen
int sum(int a, int b, int c, int d)
{
    return a + b + c + d;
}
//tong 2 so thuc
float sum(float a, float b)
{
    return a + b;
}
//tong 4 so thuc
float sum(float a, float b, float c, float d)
{
    return a + b + c + d;
}
int main()
{
    float a = 1.1;
    float b = 5.9;
    int c = 10;
    int d = 20;
    cout << "\nTong So Thuc: " << sum(a, b);
    cout << "\nTong So Nguyen: " << sum(c, d);
    cout << "\nThe End.";
    return 0;
}