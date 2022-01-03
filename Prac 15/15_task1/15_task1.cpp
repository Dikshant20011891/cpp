#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char str;
	string s = "Indian Army";
	ifstream myfile;
	myfile.open("sample.txt");
	while(!myfile.eof())
	{
		str = myfile.get();
		cout<<str;
	}
	myfile.close();
	ofstream myfile2;
	myfile2.open("sample.txt");
	myfile2 << s;
	myfile2.close();
	return 0;
}
