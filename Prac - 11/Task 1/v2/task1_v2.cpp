#include<iostream>
using namespace std;

class A
{
	public:
	int x;
	int y;
};

class B : public A
{
	public:
	void display()
	{	
		x=10;
		y=20;
		cout<<"X = "<<x<<endl;
		cout<<"Y = "<<y<<endl;
	}
};		

int main()
{
B obj;
obj.x = 30;
obj.y = 40;
cout<<"In main :-"<<endl;
cout<<"X = "<<obj.x<<endl;
cout<<"Y = "<<obj.y<<endl;
return 0;
}

