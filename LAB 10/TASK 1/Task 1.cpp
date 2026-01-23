#include<iostream>
using namespace std;
int main()
{
//declaring variable and pointer
	int i=4;
	int *ptr;
//storing the adderss of variable in pointer and displaying it	
	ptr=&i;
	cout<<*ptr<<endl;
}
