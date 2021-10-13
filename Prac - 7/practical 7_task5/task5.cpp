#include<iostream>
#define MAX 3
using namespace std;

int main()
{ 
	int i,j;
	int count = 1,arr[MAX][MAX];
	cout<<"Inputed Array "<<endl;
	for(i=0;i<MAX;i++)
	{	for(j=0;j<MAX;j++)
		{	arr[i][j] = count++;
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\nNew Array"<<endl;
	for(i=0;i<MAX;i++)
	{	for(j=0;j<MAX;j++)
		{	
			arr[i][j] = 10 - arr[i][j];
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
