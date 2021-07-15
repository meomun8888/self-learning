/****************************************************************
	Name: stack_1.cpp
	Copyright: 2021 (c)
	Author: LY THANH LONG
	Date: 10-07-2021 - 15:40 P.M
	Description: tong quan stack.
    1.IsEmpty : kiem tra xem stack co rong hay khong
    2.Push : them 1 phan tu vao dau stack (LIFO)
    3.Pop : lay phan tu dau stack va dong thoi huy no di.
    4.Top: xem thong tin cua cua dau stack va khong huy no di.
    5.Class (OOP).
    tao stack luu tru so nguyen
*****************************************************************/
#include <iostream>
#define MAX 100
using namespace std;
class _stack
{
private:
    int _top = -1;
    int _size[MAX];
    void _push(int);
    void _pop();
    bool _check(int);
    void _print();
public:
    void _menu();
};
void _stack::_push(int x)
{
    if (_top == MAX)
    {
        cout << "\nError :cannot insert !";
    }
    else
    {
        _top++;
        _size[_top] = x;
    }
}
void _stack::_pop()
{
    if (_top < 0)
    {
        cout << "\nError: cannot insert !";
    }
    else
    {
        _top--;
        return;
    }
}
bool _stack::_check(int x)
{
    for(int i = 0;i<=_top;i++)
    {
        if(x == _size[i])
        {
            return true;
        }
    }
    return false;
}
void _stack::_print()
{
    if (_top < 0)
    {
        cout << "\nStack NULL !";
    }
    else
    {
        int count = 0;
        cout << "\nStack :";
        for (int i = _top; i >= 0; i--)
        {
            count++;
            cout << _size[i] << " ";
        }
        cout << "\nstack :" << count;
    }
}
void _stack::_menu()
{
    int choose;
    do
    {
        system("cls");
        cout<<endl;
        cout << "\n1.Them Phan tu vao stack ";
        cout << "\n2.Xoa than thu dau tien stack ";
        cout << "\n3.Xoa phan tu dau tien!";
        cout<<"\n4.Kiem tra x co trong stack hay khong !";
        cout << "\nBan chon: ";
        cin >> choose;
        switch (choose)
        {
        case 1:
        {
            int _x, _n;
            cout << "\nNhap so luong phan tu stack :";
            cin >> _n;
            for (int i = 0; i < _n; i++)
            {
                cout << "\nstack: " << i + 1 << " = ";
                cin >> _x;
                _push(_x);
            }
            break;
        }
        case 2:
        {
            _print();
            break;
        }
        case 3:
        {
            //for (int i = _top; i >= 0; i--)
                _pop();
            break;
        }
        case 4:
        {
            int x;
            cout<<"\nkiem tra: ";
            cin>>x;
            if(_check(x)==true)
            {
                cout<<"\n"<<x<<": co trong stack !";
            }
            else{cout<<"\n"<<x<<" :Khong co trong stack !";}
            
        }
        default:
            break;
        }
    } while (choose != 5);
}
int main(int argc, char const *argv[])
{
    _stack s;
    s._menu();
    cout << "\nHELLO BE MEO !";
    return 0;
}
