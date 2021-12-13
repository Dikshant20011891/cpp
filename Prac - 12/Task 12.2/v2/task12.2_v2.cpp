#include <iostream>
using namespace std;
 
class A
{  
    public:
    ~A()
    {
        cout << "Destructor of A" << endl;
    }
};
 
class B
{
    public:
    ~B()
    {
        cout << "Destructor of B" << endl;
    }
};
 
class C : public A, public B
{
    public:
    ~C()
    {
        cout << "Destructor of C" << endl;
    }
};
 
int main() {
     C obj;
    return 0;
}
