#include<iostream>
using namespace std;
#define MAX 45
struct sinhvien_mang
{
    
};

void inputStuden(char a[],int &n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<"sinh vien thu "<<i+1<<endl;
        cin>>a[i];
    }
}
void outputStuden(char a[],int &n)
{
    for(int i = 0 ;i<n;i++)
    {
        cout<<"sinh vien thu: "<<i+1<<endl;
        cout<<a[i];
    }
}

 int main()
 {
     int n;
     char a[MAX];
     cout<<"Nhap so luong sinh vien: ";
     cin>>n;
     inputStuden(a,n);
     outputStuden(a,n);
     cout<<"\nThe End.";
     return 0;
 }