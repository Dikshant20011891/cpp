#include<iostream>
#include<string>
using namespace std;

int main()
{
cout<<"Difference in given characters (a-c) = "<<(int)('a'-'c')<<endl;
 
string a,b;
cout<<"Enter the 1st string - ";
getline(cin,a);
cout<<"Enter the 2nd string - ";
getline(cin,b);

int x = a.compare(b);
cout<<"Difference in given strings = "<<x<<endl;

return 0;
}

