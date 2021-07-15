#include<iostream>
#include<ctime>
using namespace std;
void du_doan_de_van_2021()
{
    srand(time(NULL)); 
	int x = rand() % (7 - 1 + 1) + 1;
    if(x == 1)
    {
        cout<<"\nTác Phẩm: VỢ NHẶT.";
        cout<<"\nTác Giả: kIM LÂN.";
        cout<<endl;
    }
    if(x == 2)
    {
        cout<<"\nTác Phẩm: VỢ CHÔNG A PHỦ.";
        cout<<"\nTác Giả: TÔ HOÀI.";
        cout<<endl;
    }
    if(x == 3)
    {
        cout<<"\nTác Phẩm: HỒN TRƯƠNG BA, DA HÀNG THỊT.";
        cout<<"\nTác Giả: LƯU QUANG VŨ.";
        cout<<endl;
    }
    if(x == 4)
    {
        cout<<"\nTác Phẩm: CHIẾC THUYỀN NGOÀI XA.";
        cout<<"\nTác Giả: NGUYỄN MINH CHÂU.";
        cout<<endl;
    }
    if(x == 5)
    {
        cout<<"\nTác Phẩm: NGƯỜI LÁI ĐÒ TRÊN SÔNG ĐÀ.";
        cout<<"\nTác Giả: NGUYỄN TÂN.";
        cout<<endl;
    }
    if(x == 6)
    {
        cout<<"\nTác Phẩm: TÂY TIẾN.";
        cout<<"\nTác Giả: QUANG DŨNG.";
    }
    if(x == 7)
    {
        cout<<"\nTác Phẩm: SÓNG.";
        cout<<"\nTác Giả: XUÂN QUỲNH.";
    }
}
int main()
{
    
    du_doan_de_van_2021();
	return 0;
}