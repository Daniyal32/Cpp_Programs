#include<fstream>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{ 
  string data;

  ofstream outfile;
  outfile.open("file.txt");
  
  cout<<"Enter id: ";
  cin>>data;
  cin.ignore();
  outfile<<data<<endl;
  cout<<"Enter name: ";
  getline(cin,data);
  outfile<<data<<endl;
  
  outfile.close();
  
  ifstream infile;
  infile.open("file.txt");
  while(getline(infile,data))
    cout<<data;
  
  infile.close();

  return 0;
}

