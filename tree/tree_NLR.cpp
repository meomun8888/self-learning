/****************************************************************
	Name: 
	Copyright: 2021 (c)
	Author: LY THANH LONG
	Date: 
	Description: cay nhi phan tim kiem NLR
    1. khoi tao
    2. duyet cay.

    !Luu y: cay nhi phan tim kiem khong duoc luu cac phan tu trung nhau
*****************************************************************/
#include <iostream>
using namespace std;
int MIN = 0;
int MAX = 0;
struct node
{
    int data;
    struct node *pLeft;
    struct node *pRight;
};
typedef struct node NODE;
typedef NODE *TREE;
void new_Tree(TREE &t)
{
    t = NULL; // cay  rong
}
//them tree
void add_tree(TREE &t, int x)
{
    if (t == NULL)
    {
        NODE *p = new NODE;
        p->data = x;
        p->pLeft = p->pRight = NULL;
        t = p; // p la node root
    }
    else
    {
        if (t->data > x)
        {

            add_tree(t->pLeft, x); // duyet qua trai de them phan tu x
        }
        else if (t->data < x)
        {
            add_tree(t->pRight, x);
        }
    }
}
void NLR(TREE t)
{
    if (t != NULL)
    {
        cout << t->data << " ";
        NLR(t->pLeft);
        NLR(t->pRight);
    }
}
void NRL(TREE t)
{
    if (t != NULL)
    {
        cout << t->data << " ";
        NRL(t->pRight);
        NRL(t->pLeft);
    }
}
void LNR(TREE t)
{
    if (t != NULL)
    {
        LNR(t->pLeft);
        cout << t->data << " ";
        LNR(t->pRight);
    }
}
void LRN(TREE t)
{
    if (t != NULL)
    {
        LRN(t->pLeft);
        LRN(t->pRight);
        cout << t->data << " ";
    }
}
void RNL(TREE t)
{
    if (t != NULL)
    {
        RNL(t->pRight);
        cout << t->data << " ";
        RNL(t->pLeft);
    }
}
void RLN(TREE t)
{
    if (t != NULL)
    {
        RLN(t->pRight);
        RLN(t->pLeft);
        cout << t->data << " ";
    }
}
bool prime(int x)
{
    if (x < 2)
    {
        return false;
    }
    else
    {
        if (x == 2)
        {
            return true;
        }
        else
        {
            if (x % 2 == 0)
            {
                return false;
            }
            else
            {
                for (int i = 2; i < x; i++)
                {
                    if (x % i == 0)
                    {
                        return false;
                    }
                }
            }
        }
    }
    return true;
}
void count_prime(TREE t, int &count)
{
    if (t != NULL)
    {
        if (prime(t->data) == true)
        {
            count++;
            cout << t->data << " ";
        }
        count_prime(t->pLeft, count);
        count_prime(t->pRight, count);
    }
}
NODE *search(TREE t, int x)
{
    if (t == NULL)
    {
        return NULL;
    }
    else
    {
        if (x < t->data)
        {
            search(t->pLeft, x);
        }
        else if (x > t->data)
        {
            search(t->pRight, x);
        }
        else
        {
            return t;
        }
    }
    return 0;
}
void count_tree(TREE t, int &count, int &left, int &right)
{
    if (t != NULL)
    {
        count++;
        if (t->pLeft != NULL)
        {
            left++;
        }
        else if (t->pRight != NULL)
        {
            right++;
        }
        count_tree(t->pLeft, count, left, right);
        count_tree(t->pRight, count, left, right);
    }
}
void node_with_two_leaves(TREE t)
{
    if (t != NULL)
    {
        if (t->pLeft != NULL && t->pRight != NULL)
        {
            cout << t->data << " ";
        }
        node_with_two_leaves(t->pLeft);
        node_with_two_leaves(t->pRight);
    }
}
void one_node(TREE t)
{
    if (t != NULL)
    {
        if (t->pLeft != NULL && t->pRight == NULL || t->pRight != NULL && t->pLeft == NULL)
        {
            cout << t->data << " ";
        }
        one_node(t->pLeft);
        one_node(t->pRight);
    }
}
void zero_node(TREE t)
{
    if (t != NULL)
    {
        if (t->pLeft == NULL && t->pRight == NULL)
        {
            cout << t->data << " ";
        }
        zero_node(t->pLeft);
        zero_node(t->pRight);
    }
}
int search_max(TREE t)
{
    if (t != NULL)
    {
        if (MAX < t->data)
        {
            MAX = t->data;
        }
        search_max(t->pRight);
    }
    return MAX;
}
int search_min(TREE t)
{
    if (t != NULL)
    {
        if (MIN > t->data)
        {
            MIN = t->data;
        }
        search_min(t->pLeft);
    }
    return MIN;
}
void delete_node_tree(TREE &t, int data)
{
    if (t == NULL)
    {
        return;
    }
    else
    {
        if (data < t->data)
        {
            delete_node_tree(t->pLeft, data);
        }
        else if (data > t->data)
        {
            delete_node_tree(t->pRight, data);
        }
        else
        {
            NODE *x = t;
            if (t->pLeft == NULL)
            {
                t = t->pRight;
            }
            else if (t->pRight == NULL)
            {
                t = t->pLeft;
            }
            delete x;
        }
    }
}
void menu(TREE &t)
{
    int choose;
    new_Tree(t);
    do
    {
        cout << "\n1.Nhap cay.";
        cout << "\n2.Xuat cay.";
        cout << "\n3.Xuat va dem so nguyen to";
        cout << "\n4.Tim x trong node ";
        cout << "\n5.Xuat cay 2 con.";
        cout << "\n6.xuat cay 1 con.";
        cout << "\n7. xuat la";
        cout << "\n8.Max, Min";
        cout << "\n9.Xoa Node";
        cout << "\n10.Thoat !";
        cout << "\nBan chon: ";
        cin >> choose;
        if (choose < 0 || choose > 8)
        {
            cout << "\nError, Enter 1 to 8 !";
        }
        switch (choose)
        {
        case 1:
        {
            int n;
            cout << "\nNhap so luong node tree: ";
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                int x;
                cout << "\nTree: " << i + 1 << " ";
                cin >> x;
                add_tree(t, x);
            }
            break;
        }
            cout << "\nBan chon: ";
        case 2:
        {
            int choose_2;
            do
            {
                cout << "\n1.NLR";
                cout << "\n2.NRL";
                cout << "\n3.LNR";
                cout << "\n4.LRN";
                cout << "\n5.RNL";
                cout << "\n6.RLN";
                cout << "\n7.Quay Lai";
                cout << "\nBan chon: ";
                cin >> choose_2;
                switch (choose_2)
                {
                case 1:
                {
                    int count = 0, left = 0, right = 0;
                    cout << "\nNLR" << endl;
                    NLR(t);
                    count_tree(t, count, left, right);
                    // count_left(t, left);
                    // count_right(t, right);
                    cout << "\nSo node trong cay: " << count;
                    cout << "\nNodo trai: " << left;
                    cout << "\nNode Phai: " << right;
                    break;
                }
                case 2:
                {
                    cout << "\nNRL" << endl;
                    NRL(t);
                    break;
                }
                case 3:
                {
                    cout << "\nLNR" << endl;
                    LNR(t);
                    break;
                }
                case 4:
                {
                    cout << "\nLRN" << endl;
                    LRN(t);
                    break;
                }
                case 5:
                {
                    cout << "\nRNL" << endl;
                    RNL(t);
                    break;
                }
                case 6:
                {
                    cout << "\nRLN" << endl;
                    RLN(t);
                    break;
                }
                default:
                    break;
                }
            } while (choose_2 != 7);
            break;
        }
        case 3:
        {
            cout << "\nPrime in Tree: ";
            int count = 0;
            count_prime(t, count);
            cout << endl
                 << "Tong so nguyen to trong node la: " << count;
            break;
        }
        case 4:
        {
            int x;
            cout << "\nNhap data can tim trong TREE: ";
            cin >> x;
            NODE *p = search(t, x);
            if (p == NULL)
            {
                cout << "\nPhan tu: " << x << " Khong trong co trong tree !";
            }
            else
            {
                cout << "\nPhan tu: " << x << " co trong Tree ";
            }
            break;
        }
        case 5:
        {
            cout << "\nNode 2 con: ";
            node_with_two_leaves(t);
            break;
        }
        case 6:
        {
            cout << "\nNode chi co 1 con: ";
            one_node(t);
            break;
        }
        case 7:
        {
            cout << "\nNode la: ";
            zero_node(t);
            break;
        }
        case 8:
        {
            cout << "\nNode Max: " << search_max(t);
            cout << "\nNode Min: " << search_min(t);
            break;
        }
        case 9:
        {
            int data;
            cout << "\nNhap data can xoa: ";
            cin >> data;
            delete_node_tree(t, data);
            break;
        }
        default:
            break;
        }
    } while (choose != 10);
}
int main()
{
    TREE t;
    menu(t);
    cout << "\nThe End";
    return 0;
}