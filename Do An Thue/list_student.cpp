/*
	Name: 
	Copyright: (c) 2021
	Author: 
	Date: 08/08/21 13:57
	Description: tao Mennu
    1.struct khoa
    2.struct sinh vien
    3.struct node
    4.struct list
    5.add tail.
    6.nhap thong tin sinh vien.
    7.xoa sinh vien bang ma id
    8.tim kiem sinh vien
    9.sap xep dinh vien theo nam.
    10.xuat list.
*/
#include <iostream>
using namespace std;
struct department
{
    string name;
};
typedef struct department DEPARTMENT;
struct date
{
    int day_;
    int month_;
    int year_;
};
typedef struct date DATE;
struct student
{
    string student_id;
    string cmnn_;
    string name_;
    string age_;
    string sex_;
    DATE birtday_;
    DEPARTMENT department_;
};
typedef struct student STUDENT;
struct node
{
    STUDENT *data;
    struct node *pNext;
};
typedef struct node NODE;
struct list
{
    NODE *pHead;
    NODE *pTail;
};
typedef struct list LIST;
void new_list(LIST &l)
{
    l.pHead = l.pTail = NULL;
}
NODE *new_node(STUDENT *x)
{
    NODE *p = new NODE;
    if (p == NULL)
    {
        cout << "\nError, Menmory full !";
        return NULL;
    }
    p->data = x;
    p->pNext = NULL;
    return p;
}
void input_student(STUDENT *s)
{
    cout << "\nDepartment: ";
    fflush(stdin);
    getline(cin, s->department_.name);

    cout << "\nID: ";
    fflush(stdin);
    getline(cin, s->student_id);

    cout << "\nName: ";
    fflush(stdin);
    getline(cin, s->name_);
    cout << "\nSex: ";
    fflush(stdin);
    getline(cin, s->sex_);

    cout << "\nAge: ";
    cin >> s->age_;
    cout << "\nBirth Day !";
    cout << "\nDay: ";
    cin >> s->birtday_.day_;
    cout << "\nMonth: ";
    cin >> s->birtday_.month_;
    cout << "\nYear: ";
    cin >> s->birtday_.year_;
}
void add_Tail(LIST &l, NODE *p)
{
    if (l.pHead == NULL)
    {
        l.pHead = l.pTail = p;
    }
    else
    {
        l.pTail->pNext = p;
        l.pTail = p;
    }
}
void output_list_student(LIST l)
{
    if (l.pHead == NULL)
    {
        cout << "List null !";
        return;
    }
    else
    {
        NODE *k = l.pHead;
        while (k != NULL)
        {
            cout << "\nDepartment: " << k->data->department_.name;
            cout << "\nId: " << k->data->student_id;
            cout << "\nName: " << k->data->name_;
            cout << "\nSex: " << k->data->sex_;
            cout << "\nAge: " << k->data->age_;
            cout << "\nBirt day: " << k->data->birtday_.day_ << "/";
            cout << k->data->birtday_.month_ << "/" << k->data->birtday_.year_;
        }
    }
}
void menu(LIST &l)
{
    int choose;
    do
    {
        system("cls");
        cout << "\n1.Add Student.";
        cout << "\n2.Output List Student.";
        cout << "\n3.Exit";
        cout << "\nYou choose: ";
        cin >> choose;
        switch (choose)
        {
        case 1:
        {
            STUDENT *x = new STUDENT;
            input_student(x);
            NODE *p = new_node(x);
            add_Tail(l, p);
            break;
        }
        case 2:
        {
            output_list_student(l);
            break;
        }
        default:
            break;
        }
    } while (choose != 3);
}
int main(int argc, char const *argv[])
{
    LIST l;
    menu(l);
    cout << "\nThe End ";
    return 0;
}
