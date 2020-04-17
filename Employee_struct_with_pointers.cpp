#include<iostream>
#include<string.h>
using namespace std;
struct employee
{
	int id;
	char name[50];
};

int employ(employee *emp2)
{
  cout<<emp2->id;
  cout<<emp2->name;
}
int main()
{
  employee emp1;
  emp1.id=44;
  strcpy(emp1.name,"Daniyal");
 
  employ(&emp1);

  return 0;
}

