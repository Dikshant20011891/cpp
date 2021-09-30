#include<iostream>
using namespace std;
void boolfun()
{
bool b = 1;
cout<<"Value of bool : "<<b<<endl;
}
void intfun()
{
int a =31625;
cout<<"Value of int : "<<a<<endl;
}
void shortfun()
{
short s =10;
cout<<"Value of short : "<<s<<endl;
}
void charfun()
{
char ch = 'a';
cout<<"Value of char :"<<ch<<endl;
}
void floatfun()
{
float f =10.1f;
cout<<"Value of float : "<<f<<endl;
}
void longfun()
{
long l =10;
cout<<"Value of long : "<<l<<endl;
}
void doublefun()
{
double d =105;
cout<<"Value of double : "<<d<<endl;
}
void ldoublefun()
{
long double ld  = 738l;
cout<<"Value of long double : "<<ld<<endl;
}
void wcharfun()
{
wchar_t  wch = L'm';
cout<<"Value of wide char : "<<wch<<endl;
}

int main()
{
intfun();
shortfun();
longfun();
boolfun();
wcharfun();
ldoublefun();
floatfun();
charfun();
doublefun();
return 0;
}
