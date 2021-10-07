#include<iostream>
#include<string>
using namespace std;

int main()
{
string str = "Hello";
cout<<"String before change : "<<str<<endl;
cout<<"Address of string before change : "<<&str<<endl;

str[0] = 'J';

cout<<"String after change : "<<str<<endl;
cout<<"Address of string after change : "<<&str<<endl;

return 0;

}

