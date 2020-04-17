#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float num1=1.0,num2=1.0;
    char op;
    while(!(num1==0.0)||(num2==0.0))
    {
    	cout<<"\nType num1 and num2 0.0 to exit";
    	cout<<"\nType number1: ";
    	cin>>num1;
    	cout<<"\nType number2: ";
    	cin>>num2;
    	
    	if (num1==0.0 && num2==0.0)
    	{
        cout<<"You typed a wrong number";
        cout<<"\n Press any key to exit";
        getch();
        return 0;
		}
		cout<<"Type operator: ";
		op=getch();
		
		switch(op)
		{
		case '+':
		cout<<"number1+number2="<<(num1+num2);
		break;
		case '-':
		cout<<"number1-number2="<<(num1-num2);
		break;
		}
	}
	getch();
}

