#include<iostream>
using namespace std;
int main()
{
	int fact=1,num;
	cout<<"Enter a number to calculate factorial: ";
	cin>>num;
	if(num<=1)
	{
		fact=1;
	}
	else
	{
		for(int count=1;count<=num;count++)
		{
			fact=fact*count;
		}
	}
	cout<<fact;


  return 0;
}

