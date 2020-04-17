//Programming Languages Assignment
//Name= Daniyal Mahmood
//Roll no= CT-021

#include<iostream>
using namespace std;
int main() {
	int word;
	cout<<"Enter the length of word: ";
	cin>>word;
	char arr[7][4]={{'A','B','C','D'},{'E','F','G','H'},{'I','J','K','L'},{'M','N','O','P'},{'Q','R','S','T'},{'U','V','W','X'},{'Y','Z',' ',' '}};
	for (int i=0;i<7;i++) {
		for (int j=0;j<4;j++) {
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	char arr2[word][7];
	int choice_1[word];
    for (int i=0;i<word;i++) {
    	cout<<"Enter the columns in which your word exists(from 1,2,3,4)";
		cin>>choice_1[i];
	}
	for(int i=0;i<word;i++) 
	{
		switch (choice_1[i])
		{
			case 1:
			for (int j=0;j<7;j++) {
				arr2[i][j]=arr[j][0];
				cout<<" "<<arr2[i][j];
				}
			cout<<endl;
			break;	
			case 2:
			for (int j=0;j<7;j++) {
				arr2[i][j]=arr[j][1];
				cout<<" "<<arr2[i][j];
				}	
			cout<<endl;
			break;
			
		
		    case 3:
			for (int j=0;j<7;j++) {
				arr2[i][j]=arr[j][2];
				cout<<" "<<arr2[i][j];
				}	
			cout<<endl;
			break;
			 case 4:
			for (int j=0;j<7;j++) {
				arr2[i][j]=arr[j][3];
				cout<<" "<<arr2[i][j];
				}	
			cout<<endl;
			break;
}
	 } 

    int choice_2[word];
    for (int i=0;i<word;i++) {
    	cout<<"Enter the columns in which your word exists(from 1,2,3,4,5,6,7): ";
    	cin>>choice_2[i];
	}
	for (int i=0;i<word;i++)
	{
		switch (choice_2[i])
		{
			case 1:
			cout<<arr2[i][0];
			break;
			
			case 2:
			{
			cout<<arr2[i][1];
			break;
			}
			case 3:
			{
			cout<<arr2[i][2];
			break;
			}
			case 4: {
		   	cout<<arr2[i][3];
			break;
			}
			case 5:
			{
			cout<<arr2[i][4];
			break;
		    }
		    case 6:
			{
			cout<<arr2[i][5];
			break;
		    }
		    case 7:
			{
			cout<<arr2[i][6];
			break;
			}
	}
}
}
