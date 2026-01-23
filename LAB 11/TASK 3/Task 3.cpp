#include<iostream>
using namespace std;
int main()
{
//declaring variable array and pointer	
	int arr[4]={1,2,3,4};
	int *ptr,i;
//as arr and ptr are the same so we can just use it by assining it to ptr
	ptr=arr;
//using for loop to display the array values	
	for(i=0; i<4; i++)
	{
		cout<<ptr[i]<<endl;
	}
}
