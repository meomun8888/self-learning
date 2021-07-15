#include <iostream>
#include <string>
#include <fstream>
#include "Personlist.h"
#include <unistd.h>

using namespace std;

int main()
{
    Personlist ps;
    string username, password;
    cout<<"--------------------Please login to the server--------------------"<<endl;
    cout<<"+ Username : ";
    getline(cin, username);
    cout<<"+ Password : ";
    getline(cin, password );
    cout<<endl;
    while(username != "admin" || password != "1month1000USD"){
		cout<<"Invalid username or password !! Please re-enter."<<endl;
		system("pause");
		system("cls");
		cout<<"+ Username : ";
		getline(cin, username);
		cout<<"+ Password : ";
		getline(cin, password );
    }
    cout<<"====================Logged In Successfully===================="<<endl;
    system("pause");
    system("cls");
    char choose, choose1, choose2;
    do{

		 cout << "--------------------Select the function you want to perform--------------------" << endl;
		 cout << " [1]Add more people"<<endl;
		 cout << " [2]Information export"<<endl;
	     cout << " [3]Find people by ID"<<endl;
	     cout << " [4]Add 1 new person to the list"<<endl;
	     cout << " [5]Remove person by ID  "<<endl;
	     cout << " [6]Sort the ID in ascending or descending order"<<endl;
	     cout << " [s]STOP THE PROGRAM!!!!"<<endl;
		 cout << "Enter choose : " ;
		 cin >> choose;
		 system("cls");
	     switch(choose)
	     {
	        case '1':{
	            ps.inputList();
	            break;
	            }
	        case '2':{
	            ps.outputFile();
	            break;
	            }
	        case '3':{
	            ps.search();
	            break;
	            }
	        case '4':{
	            ps.add();
                break;
	         }
	        case '5':{
	         	ps.remove();
	         	cout << "Do you want to see the list after deleting it (Y/N): "<<endl;
	         	cin >> choose1;
	         	if(choose1 == 'y' || choose1 == 'Y')
	         	{
	         		cout<<"List after deletion is : "<<endl;
	         		ps.outputList();
				}
	         	break;
	         	}
	        case '6':{
	        	cout << "You want to see ID  ascending or descending (T/G) : "<<endl;
	        	cin >> choose1;
	        	if(choose1 == 't' ||  choose1 == 'T')
	        	{
	        		ps.sortAscending();
				} else {
					ps.sortDescending();
				}
				cout<<"Do you want to see the list after sorting(Y/N) : "<<endl;
				cin >> choose2;
				if(choose2 == 'Y' || choose2 == 'y')
				{
					cout<<"The list after sorting is : "<<endl;
					ps.outputList();
				}
				break;
			}

	        case 's':
	        	case 'S':
	        	{
                    exit(0);
                    break;
	        	}
	        default :
	        	{
	        		cout<<"You entered incorrectly, Please re-enter!!!!"<<endl;
	        		break;
	        	}
	        }
	    cout<<" \nDo you want to return to MENU (Y/N) "<<endl;
		cin >> choose1;
		system("cls");
  }	while(choose1 == 'y' || choose1 == 'Y');
  cout<<"You have exited the program !!! Press Enter to finish."<<endl;
    return 0;
}
