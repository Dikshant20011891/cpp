#include<iostream>
using namespace std;

class A
{
	public:
	int x;
};

class B:public A{};
class C:public A{};
class D:public B,public C{};

int main()
{
D obj;
obj.x = 10;
cout<<"In Main:-"<<endl;
cout<<"Value of x :"<<obj.x<<endl;
return 0;

}
 
