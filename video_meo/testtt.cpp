#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	char c;
	for(int i = 0;i<256;i++)
	{
		cout<<i<<" = "<<c<<endl;
		c++;
	}
    return 0;
}
