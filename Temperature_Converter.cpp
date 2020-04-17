#include <iostream>
using namespace std;
float x;
float celsius(float fahr)
{
	x=(fahr-32) * 5/9;
	return x;
	
}
int main()
{
    float fahr;
    cout<<"Enter temperature in Fahrenheit: ";
    cin>>fahr;
    celsius(fahr);
    cout<<"Temperature in Celsius is: "<<x;
    return 0;    
}
