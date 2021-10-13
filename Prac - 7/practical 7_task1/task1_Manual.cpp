#include<iostream>
using namespace std;

int main()
{
	int ch;
	cout<<"1.Print Year\n2.Print Month\n3.Print Date\nEnter your choice : ";
	cin>>ch;
	switch(ch)
	{
		case 1:cout<<"Year : 2021"<<endl;
		break;
		case 2:cout<<"Month : October"<<endl;
		break;
		case 3:cout<<"Date : 13/10/2021"<<endl;
		break;
		default: cout<<"Not Applicable "<<endl;
	}
	return 0;
}
	                                            
