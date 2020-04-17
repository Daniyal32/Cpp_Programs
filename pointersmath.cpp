#include<iostream>
using namespace std;
void print(int *x)
{
	cout<<*x;
}
int main()
{
	int arr[4]={1,2,3,4};
	for (int i=0;i<4;i++)
	{
		print(&arr[i]);
		cout<<endl;
	}

	return 0;
}

