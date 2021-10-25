#include<iostream>
using namespace std;

class Abc
{ 
int a,b;
public:
Abc(int a,int b)
{
this->a = a;
this->b= b;
}
int sum()
{
return a+b;
}
};

int main()
{
Abc obj(10,20);
cout<<obj.sum()<<endl;
return 0;
}


