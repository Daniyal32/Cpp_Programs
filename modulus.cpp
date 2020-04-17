#include<iostream>
using namespace std;
int main()
{
   int num,divisor;
   cout<<"Enter a number: ";
   cin>>num;
   cin>>divisor;
   int ans=num/divisor;
   int x=num-ans*divisor;
   cout<<x;

  return 0;
}

