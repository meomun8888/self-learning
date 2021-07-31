/****************************************************************
	Name: 
	Copyright: 2021 (c)
	Author: LY THANH LONG
	Date: 11/07/2021 - 21:22 P.M
	Description: Queue
    1.IsEmpty
    2.Push
    3.Pop
    4.Top.
*****************************************************************/
#include <iostream>
using namespace std;
struct node
{
    int data;
    node *pNext;
};
typedef struct node NODE;
struct queue
{
    NODE *pHead;
    NODE *pTail;
};
typedef struct queue QUEUE;
NODE *new_node(int x)
{
    NODE *p = new NODE;
    if (p == NULL)
    {
        cout << "\nError, memory full !";
        return NULL;
    }
    p->data = x;
    p->pNext = NULL;
    return p;
}
void _queue(QUEUE &q)
{
    q.pHead = q.pTail = NULL;
}
bool _IsEmpty(QUEUE q)
{
    if (q.pHead == NULL)
    {
        return true;
    }
    return false;
}
void _push(QUEUE &q, NODE *p)
{
    if (p == NULL)
    {
        cout << "\nNew node false !";
        return;
    }
    else if (_IsEmpty(q) == true)
    {
        q.pHead = q.pTail = p;
    }
    else
    {
        q.pTail->pNext = p;
        q.pTail = p;
    }
}
int _pop(QUEUE &q, int x)
{
    if (_IsEmpty(q) == true)
    {
        cout << "\nQueue NULL, stop progam !";
        return false;
    }
    while (_IsEmpty(q)==false)
    {
        NODE *ptr = q.pHead;
        x = q.pHead->data;
        q.pHead = q.pHead->pNext;
        delete ptr;
        return x;
    }
    return false;
}
int _top(QUEUE q)
{
    if (_IsEmpty(q) == true)
    {
        cout << "\nQueue NULL, stop progam !";
        return false;
    }
    int x;
    x = q.pHead->data;
    return x;
}
void print_queue(QUEUE q)
{
    NODE *k = q.pHead;
    cout<<"Queue: ";
    while (k != NULL)
    {
        cout<< k->data;
        k = k->pNext;
    }
}
void menu(QUEUE &_xx)
{
    int choose;
    do
    {
        cout<<endl;
        cout << "\n1.Them phan tu vao Queue";
        cout << "\n2.Xoa phan tu dau Queue";
        cout << "\n3.xuat phan tu dau tien Queue";
        cout << "\n4.xuat queue";
        cout << "\n5.Thoat !";
        cout << "\nBAN CHON :";
        cin >> choose;
        switch (choose)
        {
        case 1:
        {
            int n;
            int x;
            cout << "\nNhap so luong phan tu trong Queu: ";
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                cout << "\nQUEUE: " << i + 1 << " = ";
                cin >> x;
                NODE *p = new_node(x);
                _push(_xx, p);
            }
            break;
        }
        case 2:
        {
            int x;
            _pop(_xx,x);
            cout<<x;
            break;
        }
        case 3:
        {
            cout<<"\nPhan tu dau queu: "<<_top(_xx);
            break;
        }
        case 4:
        {
            print_queue(_xx);
            break;
        }
        default:
            break;
        }
    } while (choose != 5);
}
int main()
{
    QUEUE x;
    _queue(x);
    menu(x);
    cout << "\nThe End";
    return 0;
}