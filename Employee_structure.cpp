#include<iostream>
using namespace std;
struct Person
{
	int id;
	char name[50];
	float salary;
};
int main()
{
    Person p[2];
    int i=0;
    while(i<2)
	{
	cout<<"Enter full name: ";
    cin.getline(p[i].name,50);
    cout<<"Enter id: ";
    cin>>p[i].id;
    cout<<"Enter salary: ";
    cin>>p[i].salary;
    cin.ignore();
    i++;
    cout<<"\n";
	}
	i=0;
    cout<<"\nDisplaying information"<<endl;
    
	while(i<2)
	{
    cout<<p[i].name<<endl<<p[i].id<<endl<<p[i].salary<<endl;
    i++;
	}
  return 0;
}

