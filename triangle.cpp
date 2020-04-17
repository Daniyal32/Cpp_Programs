#include<iostream>
using namespace std;
int determinetriangle(int x,int y,int z)
{
   if(x<=0 || y<=0 || z<=0)
   {
   	cout<<"ERROR";
   }
   else if(x>y+z || y>x+z || z>x+y)
   {
   	cout<<"Error";
   }
   else if(x=y=z)
   {
   	cout<<"Equilateral";
   }
   else if(x==y+z || y==x+z || z==x+y)
   {
   	cout<<"Isosceles";
   }
   else 
   {
   	cout<<"Scalene";
   }
	
}
int main()
{ 
  int a,b,c;
  cout<<"Enter three sides of triangle: ";
  cin>>a>>b>>c;
  cout<<determinetriangle(a,b,c);


  return 0;
}

