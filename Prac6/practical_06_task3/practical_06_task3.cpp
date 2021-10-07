#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
string str;
string b,c="";
cout<<"Enter the string : ";
getline(cin,str);

for(string::iterator i = str.end();i>=str.begin();i--)
{
c+=*i;
}

cout<<"Reverse sting without using inbuilt function : "<<c<<endl;
reverse(str.begin(),str.end());
cout<<"Reverse sting using inbuilt function : "<<str<<endl;

return 0;

}

