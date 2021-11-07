#include<iostream>
using namespace std;

class student 
{
string name;
int roll;
int year;
char sec;

public:
	static int x;
	void assign()
	{
		cout<<"Enter the name : ";
		cin>>name;
		cout<<"Enter the roll number : ";
		cin>>roll;
		cout<<"Enter the year : ";
		cin>>year;
		cout<<"Enter the Section : ";
		cin>>sec;
		x++;
	}
};
int student::x=0;

int main()
{
int ch=1,i=0;
student obj[50];
do
{
cout<<"1.Enter the Information"<<endl;
cout<<"0.Exit"<<endl;
cout<<"Enter your choice : ";
cin>>ch;
if(ch == 1)
{
	obj[i++].assign();
	cout<<"\n";
}
}while(ch!=0);

cout<<"Number of students in the college : "<<student::x;
return 0;

}

