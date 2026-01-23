#include<iostream>
using namespace std;
//declaring the global variables
int choice,quantity,N,total;

//defining the function for menu
int menu(int num)
{
	cout<<"Enter the Related number to oder a dish.\n1 for Black Coffee\n2 for baryani\n3 for Naan Chana\n4 for BBQ\n5 for Karai"<<endl;
	cin>>choice;
}
//defining function for selection of dishes
int sel(int a)
{
	switch(choice)
	{
		case 1:
			cout<<"The price of Black Coffee is 1$\nEnter the Quantity you want?"<<endl;
			cin>>N;
			total=N*1;
			cout<<"Total Bill: "<< total <<"$\n";
            break;
        case 2:
        	cout<<"The price of Baryani is 5$\nEnter the quantity you want?"<<endl;
        	cin>>N;
			total=N*5;
			cout<<"Total Bill: "<< total <<"$\n";
            break;
        case 3:
        	cout<<"The price of Naan Chana is 5$\nEnter the quantity you want?"<<endl;
        	cin>>N;
			total=N*5;
			cout<<"Total Bill: "<< total <<"$\n";
            break;    
			
		case 4:
        	cout<<"The price of BBQ is 8$ per dozen\nEnter the quantity you want?"<<endl;
        	cin>>N;
			total=N*8;
			cout<<"Total Bill: "<< total <<"$\n";
            break;    
		
		case 5:
        	cout<<"The price of Karai is 8$ per KG\nEnter the quantity you want?"<<endl;
        	cin>>N;
			total=N*8;
			cout<<"Total Bill: "<< total <<"$\n";
            break; 		
	}
}

int main()
{
	int n,i,choice1;
	do
	{
		menu(n);
		sel(choice1);

		cout<<"Do you want to oder another dish?\n\33[32m1 for Yes.\33[0m\n\33[31m2 for No.\33[0m"<<endl;	
		cin>>n;
	}while(n!=0);	
}
