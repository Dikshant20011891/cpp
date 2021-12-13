#include<iostream>
using namespace std;

class A
{
	public:
	int x;
	protected:
	int y;
	private:
	int z;
};

class B : protected A
{
	public:
	void display()
	{	
		x=10;
		y=20;
		//z=30;	   Error will be there
		cout<<"In Fuction :-"<<endl;
		cout<<"X = "<<x<<endl;
		cout<<"Y = "<<y<<endl;
		//cout<<"Z = "<<z<<endl;   Error will be there
	}
};		

int main()
{

B obj;
//obj.x = 30;  Error will be there
//obj.y = 40;  Error will be there
//obj.z = 50;  Error will be there
obj.display();
return 0;
}

