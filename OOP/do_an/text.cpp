#include<iostream>

using namespace std;

class Sinhvien{
	public:
		void input();
		void output();
	private:
		int id;
		string name;
		int age;
	
};
void Sinhvien::input()
{
    cout<<"nhap id: ";
    cin>>id;
    cin.ignore();
	cout<<"nhap ten sinh vien: ";
    cin>>name;
    cout<<"nhap tuoi: ";
    cin>>age;
}
void Sinhvien::output()
{
    cout<<"ID: "<<id<<endl;
    cout<<"Ten sinh Vien: "<<name<<endl;
    cout<<"Tuoi: "<<age<<endl;
}
int main()
{
    Sinhvien sv;
    int n;
    cout<<" nhap so luong: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"sinh vien thu: "<<i+1<<endl;
        sv.input();
        system("cls");
    }
    for(int i=0;i<n;i++)
    {
        cout<<"xuat Sinh Vien Thu: "<<i+1<<endl;
        sv.output();
    }
	return 0;
}