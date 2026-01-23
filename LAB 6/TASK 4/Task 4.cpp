#include <iostream>
using namespace std;
int main()
{
//declaring currencies	
	float usd;
	float pkr;
	float inr;
	float euors;
	int selection;
	cout<<"Enter the currencies converter \n1 for USD to PKR\n2 for USD to INR\n3 for USD to Euors"<<endl;
	cin>>selection;
	cout<<"Enter the ammount in USD for conversion"<<endl;
	cin>>usd;
//currencies converter
	switch(selection)
	{
		case 1:
			cout<<"The rate of one Dollar in PKR is 280.60"<<endl;
			pkr=280.60*usd;
			cout<<"The converted amount is:"<<pkr<<endl;
			break;
		case 2:
			cout<<"The of one dollar in INR is 89.85"<<endl;
			inr=89.85*usd;
			cout<<"The converted amount is:"<<inr<<endl;
			break;
		case 3:
			cout<<"The of one dollar in Euors is 0.86"<<endl;
			euors=0.86*usd;
			cout<<"The converted amount is:"<<euors<<endl;
			break;
	}
			
}
