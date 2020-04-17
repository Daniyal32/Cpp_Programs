#include<iostream>
using namespace std;
int main()
{
  //Largest number in an array
  int arr[5];
  cout<<"Enter five numbers: ";
  for(int i=0;i<5;i++)
  {
  	cin>>arr[i];
  }
  int n=sizeof(arr)/sizeof(arr[0]);
  int small=arr[0];
  for(int i=0;i<n;i++)
  {
  	if(arr[i]<small)
  	{
  		small=arr[i];
	}
  }
  cout<<"The largest number is: "<<small;


  return 0;
}

