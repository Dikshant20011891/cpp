#include <iostream>
using namespace std;
 
class A
{  
    public:
    A()
    {
        cout << "ConStructor of A" << endl;
    }
};
 
class B
{
    public:
    B()
    {
        cout << "ConStructor of B" << endl;
    }
};
 
class C : public A, public B
{
    public:
    C()
    {
        cout << "ConStructor of C" << endl;
    }
};
 
int main() {
     C obj;
    return 0;
}
