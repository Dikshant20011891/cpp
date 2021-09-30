#include<iostream>
namespace first{
void saysomething()
{
cout<<"hello";
}
}

namespace second{
void saysomething()
{
cout<<"hi";
}
}

using namespace std;
int main()
{
std::cout<<"hello";
return 0;
}


