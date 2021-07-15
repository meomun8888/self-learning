/****************************************************************
	Name: stack_1.cpp
	Copyright: 2021 (c)
	Author: LY THANH LONG
	Date: 09-07-2021 - 14:37 P.M
	Description: tong quan stack.
    1.IsEmpty : kiem tra xem stack co rong hay khong
    2.Push : them 1 phan tu vao dau stack (LIFO)
    3.Pop : lay phan tu dau stack va dong thoi huy no di.
    4.Top: xem thong tin cua cua dau stack va khong huy no di.

    tao stack luu tru so nguyen
*****************************************************************/
#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *pNext;
};
typedef struct node NODE;
// khai nao stack
struct stack
{
    NODE *pTop; // con tro de quan ly stack
};
typedef struct stack STACK;
void _stack(STACK &s)
{
    s.pTop = NULL;
}
NODE *_node(int x)
{
    NODE *p = new NODE;
    if (p == NULL)
    {
        cout << "\n False !";
        return NULL;
    }
    p->data = x;
    p->pNext = NULL;
    return p;
}
// kiem tra stack co rong hay ko
bool IsEmpty(STACK s)
{
    if (s.pTop == NULL)
    {
        return true;
    }
    return false; // co danh sach
}
//them 1 phan t vao stack
bool Push_(STACK &s, NODE *p)
{
    if (p == NULL)
    {
        return false;
    }
    //neu danh sach rong
    if (IsEmpty(s)==true)
    {
        s.pTop = p;
    }
    else
    {
        p->pNext = s.pTop; // cho con tro node p tro den dau danh sach
        s.pTop = p;        // cap nhat lai node dau
    }
    return true;
}
// lay phan tu stack va huy no
bool Pop(STACK &s, int &x)
{
    //neu danh sach rong
    if (IsEmpty(s)==true)
    {
        return false;
    }
    else
    {
        NODE *p = s.pTop;       // node p la node the mang
        x = p->data;            // gan gia tri node dau vao x
        s.pTop = s.pTop->pNext; // cap nhat node dau stack cho node tiep theo
        delete p;               // xoa node dau vua lay
    }
    return true;
}
//xem thong tin dau stack
bool Top(stack &s,int x)
{
    if(IsEmpty(s)== true)
    {
        return false;
    }
    x = s.pTop->data;// lay gia tri dau stack gan vao bien x
    return true;
}
void output_Stack(STACK s)
{
    while (IsEmpty(s)==false)
    {
        int x;
        Pop(s,x);//khu stack
        cout<<"\n"<<x<<" ";
    }
    if(IsEmpty(s)==true)
    {
        cout<<"\nStack dang rong !";
    }
    else
    {
        cout<<"\nStack con phan tu";
    }
}
void menu_s(STACK s)
{
    int choose;
    while (true)
    {
        cout<<"\n1.THEM PHAN TU VAO STACK.";
        cout<<"\n2.XUAT DANH DANH SACH STACK";
        cout<<"\n3.KET THUC !";
        cout<<"\nBAN CHON: ";
        cin>>choose;
        if(choose !=1 && choose !=2 && choose !=3 && choose !=4)
        {
            cout<<"\nNhap LAI !";
        }
        if(choose == 1)
        {
            int x;
            cout<<"\nNhap phan tu can them: ";
            cin>>x;
            NODE *p = _node(x);
            Push_(s,p);
        }
        else if(choose == 2)
        {
            cout<<"\nDANH SACH STACK :";
            output_Stack(s);
        }
        else if(choose == 3)
        {
            int x = 0;
            Top(s,x);
            cout<<"\nPhan tu dau tien stack: "<<x;
        }
        else{break;}
    }
    
}
int main()
{
    STACK s;
    _stack(s);
    menu_s(s);
    cout << "\nThe End";
    return 0;
}