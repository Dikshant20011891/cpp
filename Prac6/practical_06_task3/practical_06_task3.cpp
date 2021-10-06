#include<iostream>
using namespace std;
#define MAX 10

int main()
{
char a = "hello";
char b[MAX],c[MAX];
reverse(a.begin(),a.end());
cout<<"Reverse string using inbuilt function : "<<b<<endl;
for(int i= a.end;,j=0;i>a.begin();i--,j++)
{
c[j] = *i;
}

