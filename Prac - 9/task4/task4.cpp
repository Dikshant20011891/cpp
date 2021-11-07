#include<iostream>
using namespace std;

class student
{
string name;
int marks;

public:
	friend void add(student x);
	void assign()
	{
		cout<<"Enter the name : ";
		cin>>name;
		cout<<"Enter the Marks : ";
		cin>>marks;
	}
};

int t=0;
void add(student x)
{
	t+=x.marks;
}

int main()
{
student obj1,obj2,obj3;
obj1.assign();
obj2.assign();
obj3.assign();
add(obj1);
add(obj2);
add(obj3);

cout<<"Total Marks : "<<t<<endl;
return 0;

}
