#include<iostream>
using namespace std;

class studen
{
	protected:
			string _id;
			string _name;
			float _math;
			float _physical;
	public:
		studen();
		~studen();
		virtual	void input();
		virtual void output();
		virtual float point()=0;// thuan ao
};
studen::studen()
{
}
studen::~studen()
{
}
void studen::input()
{
	cout<<"\nEnter id: ";
	fflush(stdin);
	getline(cin,_id);
	cout<<"\nEnter name: ";
	fflush(stdin);
	getline(cin,_name);
	cout<<"\nEnter point math: ";
	cin>>_math;
	cout<<"\nEnter point physical: ";
	cin>>_physical;
}
void studen::output()
{
	cout<<"\nID: "<<_id;
	cout<<"\nNAME: "<<_name;
	cout<<"\nMATH: "<<_math;
	cout<<"\nPHYSICAL: "<<_physical;
}
class middle_school_student:public studen
{
	private:
		float _chemistry;
	public:
		void input();
		void output();
		float point();
};
void middle_school_student::input()
{
	studen::input();
	cout<<"\nEnter chemistry: ";
	cin>>_chemistry;
}
float middle_school_student::point()
{
	return (_math + _physical + _chemistry)/3;
}
void middle_school_student::output()
{
	studen::output();
	cout<<"\nCHEMISTRY: "<<_chemistry;
	cout<<"\nMedium Score: "<<this->point();
}
int main(int argc, char const *argv[])
{
	middle_school_student *a = new middle_school_student;
	a->input();
	a->output();
	a->point();
	return 0;
}
