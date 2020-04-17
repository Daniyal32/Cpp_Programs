#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num,remainder=0,decimal=0,i=0;
	cout<<"Enter a binary number: ";
	cin>>num;
	while(num>0)
	{
		remainder=num%10;
		num=num/10;
		decimal=decimal+remainder*pow(2,i);
		i++;
	}
    cout<<decimal;
	return 0;
}

