#include<iostream>
using namespace std;
int main()
{
	int i, j, rows;
	cout<<"Enter number of rows : ";
	cin>>rows;
	for(i=1; i<=rows; i++)
	{
	for(j=1;j<i; j++)
	{
		cout<<" ";
	}
	for(j=1;j<=(rows*2-(2*i-1));j++)
	{
	cout<<"*";
	}
	cout<<"\n";
	}
return 0;
}
