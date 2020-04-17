#include<iostream>
#include<conio.h>
using namespace std;
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
  int x=50,y=35;
  cout<<"Before swapping"<<endl;
  cout<<"x="<<x<<" y="<<y<<endl;
  swap(&x,&y);
  cout<<"After swapping"<<endl;
  cout<<"x="<<x<<" y="<<y<<endl;
  
  return 0;
}


