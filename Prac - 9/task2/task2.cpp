#include<iostream>
using namespace std;

class area
{
public:
	area(int l,int b)
	{
		cout<<"Area of Rectangle : "<<l*b<<endl;
	}
	
	area(int l)
	{
		cout<<"Area of Square : "<<l*l<<endl;
	}

};
	
int main()
{
	area x(10,15),y(7);
	return 0;
}

