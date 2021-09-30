#include<iostream>
using namespace std;
namespace first{
void say()
{
cout<<"hello";
}
}

namespace second{
void say()
{
cout<<"hmlo";
}
}

int main()
{
first :: say();
cout<<"\n";
second :: say();
return 0;
}


