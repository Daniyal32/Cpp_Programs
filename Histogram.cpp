#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,19,5,1,7};
    
    cout<<"Element"<<"\t"<<"Value\t"<<"Histogram"<<endl;
    
    int maximum=sizeof(arr)/sizeof(arr[0]);
    
    for(int j=0;j<maximum;j++)
    {
    	cout<<j<<"\t";
    	cout<<arr[j]<<"\t";
    	for (int i=0;i<arr[j];i++)
    	{
    		cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}

