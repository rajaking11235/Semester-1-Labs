#include<iostream>
using namespace std;
int main()
{
//declaring variable and pointer	
	int i=7;
	int *ptr;
//assiging te adderss of variable to pointer and modifing value of variable and displaying its modified value
	ptr=&i;
	*ptr=10;
	cout<<*ptr<<endl;	
}
