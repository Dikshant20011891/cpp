#include<iostream>
using namespace std;

class A
{
public:
int k = 15;
};

class B
{
public:
int k = 10;
};

class C:public A,public B{};

int main()
{
C obj;
//cout<<"The value of k "<<obj.k<<endl;
cout<<"the value of k in class A"<<obj.A::k<<endl;
cout<<"the value of k in class B"<<obj.B::k<<endl;
return 0;
}
 
