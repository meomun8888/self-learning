
/* khuon mau ham template viet 1 ham chay duoc nhieu kieu du lieu*/

#include <iostream>
using namespace std;
template <class p1, class p2> // khuan mau ham
int Max(p1 a, p2 b)
{
    if (a > b)
    {
        return a;
    }
    else if (a < b)
    {
        return b;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a = 5;
    int b = 10;
    cout << "Max: " << Max(a, b);
    cout << "\nThe End.";
    return 0;
}