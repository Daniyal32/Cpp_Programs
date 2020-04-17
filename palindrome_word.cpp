#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  int wl;
  bool palindrome=1;
  string word;
  
  cout<<"Enter the word: ";
  cin>>word;
  
  for(int i=0,j=word.length()-1;j>i;i++,j--)
  {
  	if(word[i]!=word[j])
  	{
  		palindrome=0;
	}
  }
  if(palindrome==1)
  {
  	cout<<"It's a palindrome";
  }
  else
  {
  	cout<<"It's not a palindrome";
  }
  return 0;
}


