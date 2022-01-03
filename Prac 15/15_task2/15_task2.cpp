#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream myfile;
	char str;
	myfile.open("sample.txt",ios::in);
	while(!myfile.eof())
	{
		str = myfile.get();
		cout<<str;
	}
	myfile.close();
	myfile.open("sample.txt",ios::out);
	myfile <<"Indian army ";
	myfile.close();
	myfile.open("sample.txt",ios::app);
	myfile<< "is awesome";
	myfile.close();
	return 0;
}
	
