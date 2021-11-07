#include<iostream>
using namespace std;

class student 
{
string name;
long roll;
string num;

public:
	void assign(string x,long y,string z)
	{
			name = x;
			roll = y;
			num = z;
	}
	void print()
	{
			cout<<"Name : "<<name<<endl;
			cout<<"Roll : "<<roll<<endl;
			cout<<"Number : "<<num<<endl;	
	}
};

int main()
{
student obj1,obj2;
obj1.assign("sam",18,"8990803804");
obj2.assign("john",45,"8958298387");
obj1.print();
obj2.print();
return 0;

}

