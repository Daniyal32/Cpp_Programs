#include<iostream>
using namespace std;
int ADD(int x,int y)
{

	return (x+y);
}
double ADD(double x,double y) 
{

	return (x+y);
}
int main() 
{
  cout<<ADD(6,5)<<endl;
  cout<<ADD(5.9,7.6);

}
