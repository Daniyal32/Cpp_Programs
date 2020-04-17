#include<fstream>
#include<iostream>
using namespace std;
int main()
{ 
    int empid;
    int sal;
    char empname[100];
    ofstream outfile;
    outfile.open("employee.dat");
    
    cout<<"Writing to the file: "<<endl;
    cout<<"Enter employee id: "<<endl;
    cin>>empid;
    cin.ignore();
    outfile<<empid<<endl;
    
    cout<<"Enter employee name: "<<endl;
    cin.getline(empname,100);
    outfile<<empname<<endl;
    
    cout<<"Enter salary: "<<endl;
    cin>>sal;
    cin.ignore();
    outfile<<sal<<endl;
    outfile.close();
    
    ifstream infile;
    infile.open("employee.dat");
    
    cout<<"Reading from the file"<<endl;
    infile>>empid;
    cout<<empid<<endl;
    infile>>empname;
    cout<<empname<<endl;
    infile>>sal;
    cout<<sal<<endl;    
	infile.close();
	return 0;
}

