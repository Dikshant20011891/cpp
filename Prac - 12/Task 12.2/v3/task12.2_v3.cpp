#include <iostream>
using namespace std;
 
class A
{  
    public:
    int a;
    A(int x)
    {
    	a = x;
        cout << "The value of a is "<<a<<endl;
    }
};

class B:public A
{
    public:
    int b;
    B(int a,int b):A(b)
    {
        b = a;
        cout<<"The value of b is "<<b<<endl;
    }
};

int main()
{
    B obj(10,12);
    return 0;
}
