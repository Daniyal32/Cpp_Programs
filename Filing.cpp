#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
  string data;
  
  ofstream outfile;
  outfile.open("dani.dat");
  
  cout<<"Writing to the file"<<endl;
  cout<<"Enter your name: ";
  getline(cin,data);
  outfile<<data<<endl;
  
  cout<<"Enter age: ";
  cin>>data;
  cin.ignore();
  outfile<<data<<endl;
  outfile.close();
  
  ifstream infile;
  infile.open("dani.dat");
  
  cout<<"Reading from the file"<<endl;
  while(getline(infile,data))
  {
  cout<<data<<endl;
 }
  
  
  infile.close();
  return 0;
}


