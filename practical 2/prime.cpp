#include<iostream>
using namespace std;
#include<cmath>

int main()
{
int n,i,f=1;
cout<<"Enter the number to check - ";
cin>>n;

for(i=2;i<sqrt(n);i++)
{
if(n%i==0)
{
f=0;
break;
}
}
if(f==0)
{
cout<<n<<" is not a prime number"<<endl;
}
else
{
cout<<n<<" is a prime number"<<endl;
} 
return 0;
}



