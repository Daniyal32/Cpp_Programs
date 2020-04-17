#include <iostream>
using namespace std;

int recur(int n) 
{
    if (n <= 0) 
    {
    	return 1;
        
    }
    else 
    {
    	cout<<recur<<" ";
        recur(n-1);
        cout<<recur<<" ";
        return n;
    }
}

int main() 
{
    int n;
    cout<<"Enter a number: ";
    cin >> n;
    recur(n);
    return 0;
}


