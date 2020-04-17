#include<iostream>
using namespace std;
int main() {
	int arr[3];
	int result,num1,num2,sum;
	for (int i=0;i<3;i++) {
		if (i==0) {
			cout<<"Enter first value: ";
			cin>>arr[i];
			result=1998+arr[i];
			cout<<"The final result will be: "<<result<<endl;
		}
		else if (i==1) {
			cout<<"Enter second value: ";
			cin>>arr[i];
			num1=999-arr[i];
			cout<<"My first value is: "<<num1<<endl;
		}
	else {
		cout<<"Enter third value: ";
		cin>>arr[i];
		num2=999-arr[i];
		cout<<"My second value is: "<<num2<<endl;
	}
	}
	sum=arr[0]+arr[1]+num1+arr[2]+num2;
	cout<<"The sum will be: "<<sum<<endl;
	return 0;
	
	}
