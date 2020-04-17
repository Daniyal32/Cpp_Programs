#include<iostream>
using namespace std;
int main() 
{
	int number,c=0;
	cout<<"Enter a number: ";
	cin>>number;
    for (int i=1;i<=number;i++)
    {
    	if (number%i==0)
    	{
    		c++;
		}
	}
	if (c==2) 
	{
		cout<<"Prime";
	}
	else 
	{
		cout<<"Not a prime";
	}
	
	
	
}

