#include<iostream>
using namespace std;
int main() {
	int arr[3][3][3]={{5,3,7},{6,8,3},{9,4,2}};
	for(int i=0; i<3; i++)
        {
                for(int j=0; j<1; j++)
                {
                	for(int k=0; k<3; k++) {
					
                        cout<<" "<<arr[i][j][k]<<" ";
             }
				
				}
                
                cout<<"\n";
        }
	return 0;
}
