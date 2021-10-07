#include<iostream>
#include<string>
using namespace std;

int main()
{
string a,b;
cout<<"Enter the 1st string : ";
getline(cin,a);
cout<<"Enter the 2nd string : ";
getline(cin,b);

int s1,s2,f=1;
s1 = a.size() -1;
s2 = b.size() -1;

if(s1!=s2)
{
cout<<"Strings are not equal\n";
}
else
{
for(int i=0;i<=s1;i++)
{
if(a[i]!=b[i])
{
f=0;
break;
}
}
(f==0)?cout<<"Strings are not equal\n":cout<<"Strings are equal\n";
}
return 0;
}


