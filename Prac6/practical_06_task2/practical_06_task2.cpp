#include<iostream>
#include<string.h>
#define MAX 10
using namespace std;

int main()
{
int i,j,f=0;
string str;
cout<<"Enter the string : ";
getline(cin,str);

for(i=0,j=str.length()-1;i<j;i++,j--)
{
if(str[i] != str[j])
{
f=1;
break;
}
}

(f==0)?cout<<"palindrome\n":cout<<"Not palindrome\n";

return 0;
}

