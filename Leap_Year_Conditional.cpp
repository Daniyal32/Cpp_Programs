#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter year: ";
    cin>>year;
    (year%4==0 && year%100!=0)?cout<<"It's a leap year":(year%400==0)?cout<<"It's a leap year":cout<<"It's not a leap year";
    
	return 0;
}

