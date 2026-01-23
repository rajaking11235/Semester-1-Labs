#include<iostream>
using namespace std;

int main()
{
// Declaring variables   
    int choice, choice2, n, N;
    double discount, total;
//Getting user choice
    cout <<"Enter a number for your interest of goods you want to buy\n";
    cout <<"1 for Electronics\n2 for Clothes\n3 for Groceries\n";
    cin >> choice;
//using Switch to make selection easier
    switch(choice)
    {
        case 1:
            cout<<"\33[32mYou choose Electronics\33[0m\n";
            cout<<"1 for Laptop (1000$)\n2 for Smartphone (700$)\n3 for Headphones (150$)\n";
            cin >> choice2;

            switch(choice2)
            {
                case 1:
                    cout<<"Enter the ammount you want"<<endl;
                    cin >>n;
                    N=1000*n;
				    discount = N * 0.20;
                    total = N - discount;
                    cout<<"Total Bill: "<< total <<"$\n";
                    break;

                case 2:
                     cout<<"Enter the ammount you want"<<endl;
                    cin >>n;
                    N=700*n;
				    discount = N * 0.20;
                    total = N - discount;
                    cout<<"Total Bill: "<< total <<"$\n";
                    break;

                case 3:
                    cout<<"Enter the ammount you want"<<endl;
                    cin >>n;
                    N=150*n;
                    //using if for calculating discount
				    if(N>1000)
					{
						discount=N*0.20;
						total = N - discount;
						cout<<"Total Bill: "<< total <<"$\n";
					}
					else if(N>100 && N<=500)
					{
						discount = N * 0.10;
						total = N - discount;
						cout<<"Total Bill: "<< total <<"$\n";
					}
					else
					{
						cout<<"\33[31mNO DISCOUNT\33[0m"<<endl;
						total = N;
						cout<<"Total Bill: "<< total <<"$\n";
					}
                    break;

                default:
                    cout<<"Invalid item choice\n";
            }
            break;

        case 2:
            cout<<"\33[32mYou choose Clothes\33[0m\n";
            cout<<"1 for Jacket (120$)\n2 for T-shirt (40$)\n3 for Jeans (60$)\n";
            cin >> choice2;

            switch(choice2)
            {
                case 1:
                    cout<<"Enter the ammount you want"<<endl;
                    cin >>n;
                    N=120*n;
                    //using if for discount
				    if(N>1000)
					{
						discount=N*0.20;
						total = N - discount;
						cout<<"Total Bill: "<< total <<"$\n";
					}
					else if(N>100 && N<=500)
					{
						discount = N * 0.10;
						total = N - discount;
						cout<<"Total Bill: "<< total <<"$\n";
					}
					else
					{
						cout<<"\33[31mNO DISCOUNT\33[0m"<<endl;
						total = N;
						cout<<"Total Bill: "<< total <<"$\n";
					}
                    break;

                case 2:
                    cout<<"Enter the ammount you want"<<endl;
                    cin >>n;
                    N=40*n;
				//using if for discount
				    if(N>1000)
					{
						discount=N*0.20;
						total = N - discount;
						cout<<"Total Bill: "<< total <<"$\n";
					}
					else if(N>100 && N<=500)
					{
						discount = N * 0.10;
						total = N - discount;
						cout<<"Total Bill: "<< total <<"$\n";
					}
					else
					{
						cout<<"\33[31mNO DISCOUNT\33[0m"<<endl;
						total = N;
						cout<<"Total Bill: "<< total <<"$\n";
					}
                    break;

                case 3:
                    cout<<"Enter the ammount you want"<<endl;
                    cin >>n;
                    N=60*n;
				 //using if for discount
				    if(N>1000)
					{
						discount=N*0.20;
						total = N - discount;
						cout<<"Total Bill: "<< total <<"$\n";
					}
					else if(N>100 && N<=500)
					{
						discount = N * 0.10;
						total = N - discount;
						cout<<"Total Bill: "<< total <<"$\n";
					}
					else
					{
						cout<<"\33[31mNO DISCOUNT\33[0m"<<endl;
						total = N;
						cout<<"Total Bill: "<< total <<"$\n";
					}
                    break;
                default:
                    cout<<"Invalid item choice\n";
            }
            break;

        case 3:
            cout<<"\33[32mYou choose Groceries\33[0m\n";
            cout<<"1 for Milk (2$)\n2 for Bread (3$)\n3 for Eggs (5$)\n";
            cin >> choice2;

            switch(choice2)
            {
                case 1:
                    cout<<"Enter the ammount you want"<<endl;
                    cin >>n;
                    N=2*n;
				   //using if for discount
				    if(N>1000)
					{
						discount=N*0.20;
						total = N - discount;
						cout<<"Total Bill: "<< total <<"$\n";
					}
					else if(N>100 && N<=500)
					{
						discount = N * 0.10;
						total = N - discount;
						cout<<"Total Bill: "<< total <<"$\n";
					}
					else
					{
						cout<<"\33[31mNO DISCOUNT\33[0m"<<endl;
						total = N;
						cout<<"Total Bill: "<< total <<"$\n";
					}
                    break;
                case 2:
                    cout<<"Enter the ammount you want"<<endl;
                    cin >>n;
                    N=3*n;
				  //using if for discount
				    if(N>1000)
					{
						discount=N*0.20;
						total = N - discount;
						cout<<"Total Bill: "<< total <<"$\n";
					}
					else if(N>100 && N<=500)
					{
						discount = N * 0.10;
						total = N - discount;
						cout<<"Total Bill: "<< total <<"$\n";
					}
					else
					{
						cout<<"\33[31mNO DISCOUNT\33[0m"<<endl;
						total = N;
						cout<<"Total Bill: "<< total <<"$\n";
					}
                    break;

                case 3:
                    cout<<"Enter the ammount you want"<<endl;
                    cin >>n;
                    N=5*n;
				   //using if for discount
				    if(N>1000)
					{
						discount=N*0.20;
						total = N - discount;
						cout<<"Total Bill: "<< total <<"$\n";
					}
					else if(N>100 && N<=500)
					{
						discount = N * 0.10;
						total = N - discount;
						cout<<"Total Bill: "<< total <<"$\n";
					}
					else
					{
						cout<<"\33[31mNO DISCOUNT\33[0m"<<endl;
						total = N;
						cout<<"Total Bill: "<< total <<"$\n";
					}
                    break;
                default:
                    cout<<"Invalid item choice\n";
            }
            break;

        default:
            cout<<"Invalid category choice\n";
    }

    return 0;
}
