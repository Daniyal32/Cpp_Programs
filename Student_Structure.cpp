#include<iostream>
using namespace std;
struct student
{
	int id;
	char name[20];
};
int main()
{
	struct student std1;
	struct student std2;
	std1.id=23;
	strcpy (std1.name,"XYZ");
	std2.id=66;
	strcpy (std2.name,"ABC");
	cout<<std1.id<<" "<<std1.name;
	cout<<std2.id<<" "<<std2.name;
}

