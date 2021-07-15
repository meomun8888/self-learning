/****************************************************************
	Name: bai1.cpp
	Copyright: 2021 (c)
	Author: LY THANH LONG
	Date: 10/06/2021 - 10:23 A.M
	Description: Nhap n vao ban phim
    1. xuat tat ca cac s0 nguyen to trong n
	2. kiem tra so hoan thien
	3. kiem tra so doi suong hay khong
*****************************************************************/
#include<iostream>
using namespace std;

bool check_primes(int n)
{
	if(n<0){return false;}
	else
	{
		if(n==2){return true;}
		else
		{
			if(n%2==0){return false;}
			else
			{
				for(int i = 2;i<n;i++)
				{
					if(n%i==0)return false;
				}
			}
		}
	}return true;
}
void is_primes(int n)
{
	cout<<"\nprimes,0 to N is: ";
	for(int i = 2;i<n;i++)
	{
		if(check_primes(i)==true)
		{
			cout<<i<<" ";
		}
	}
}
int main()
{
	is_primes(100);
	cout<<"\nThe End";
	return 0;
}