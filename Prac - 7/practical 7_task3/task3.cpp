#include<iostream>
using namespace std;

int main()
{ 
	int i,j;
	int count = 1,arr[3][3];
	cout<<"Inputed Array "<<endl;
	for(i=0;i<3;i++)
	{	for(j=0;j<3;j++)
		{	arr[i][j] = count++;
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\nOutputed Array "<<endl;
	for(i=2;i>=0;i--)
	{	for(j=2;j>=0;j--)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}	
