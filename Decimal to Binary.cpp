#include<iostream>
using namespace std;
int main()
{
	int num,binary[10],i=0;
	cout<<"enter num";
	cin>>num;
	while (num>0)
	{
		binary[i]=num%2;
		num=num/2;
		i++;
	}
	for (int j=i-1;j>=0;j--)
	{
		cout<<binary[j];
	}
}
