#include <iostream>
using namespace std;

int main() {
	long n,k;
	cin>>n,k;
	long count=0;
	for(long i=0;i<n;++i)
	{
	    long temp;
	    cin>>temp;
	    if(temp%k==0)
	    {
	        count++;
	    }
	}
	cout<<count<<endl;
	return 0;
}


