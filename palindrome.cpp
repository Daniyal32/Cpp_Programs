#include<iostream>
using namespace std;
int main()
{
	int num,rev=0,digits,n;
	
	cout<<"Enter a number to check whether it's a palindrome: ";
	cin>>num;
	n=num;
	do {
		digits=num%10;
		rev=(rev*10)+digits;
		num=num/10;
		
	}while(num!=0);
	
	if(rev==n)
	{
		cout<<"The number is a palindrome.";
	}
	else
	{
		cout<<"The number is not a palindrome.";
	}
	

  return 0;
}


