#include<iostream>
#include <string>
#include<cctype>
#include <limits>
using namespace std;

/*declaring Global Array and Variable
decraling and inzilizing the arrays
question array*/	
	string Questions[5]={"Which component of the CPU is responsible for performing mathematical calculations and bitwise logical operations?",
	"Which of the following logic gates is considered a Universal Gate because it can be used to implement any other Boolean function?",
	"The process of converting human-readable source code into machine-understandable code is known as:",
	"What is the function of the Program Counter (PC) register?",
	"How many different values can be represented using a standard 8-bit byte?"};
//option array (2D)
	string options[5][4]={{"A) Control Unit","B) Arithmetic Logic Unit (ALU)","C) Memory Management Unit","D) Input/Output Unit "},
	{"A) AND","B) OR","C) NAND","D) XOR"},
	{"A) Debugging","B) Compiling","C) Interpreting","D) Linking"},
	{"A) To store the result of the last calculation.","B) To hold the current instruction being executed.","C) To store the address of the next instruction to be fetched.","D) To count the number of programs running on the system."},
	{"A) 8","B) 128","C) 256","D) 512"}};
//correct answere array
	char CorrectAnswere[5]={'B','C','B','C','C'};
	char userAnswere;
	int score=0;
	float grade;
	int i,t,delay;

//Defining paper Function which will display Paper's Question and give hold of 10s until user can enter a Answere
int Paper()
{
	//using for loop to display question and there options
	for(i=0; i<5; i++)
	{
		cout<<"\nQ"<<i+1<<":"<<Questions[i]<<endl;
		cout<<options[i][0]<<endl;
		cout<<options[i][1]<<endl;
		cout<<options[i][2]<<endl;
		cout<<options[i][3]<<endl;
		cout<<"Enter Your Answere in 10 sec"<<endl;
		//Timer
	for(int t = 10; t > 0; t--)
   		{
        	cout << "\rTime left: " << t << " seconds " << flush;
        	for(long long delay = 0; delay < 1000000000; delay++);		//<100000000 cause this processing almost takes 1 sec
    	}
		cin>>userAnswere;
		userAnswere=toupper(userAnswere);
		if(userAnswere==CorrectAnswere[i])
		{
			score++;
		}
		
	}
}

//Defining Grade Function for calculating Grade
int Grade()
{
	grade=(score* 100) / 5;
		if(grade>90)
		{
			cout<<"\33[32mGRADE A+\33[0m"<<endl;
		}
		else if(grade>80 && grade<=90)
		{
			cout<<"\33[33mGRADE A\33[0m"<<endl;
		}
		else if(grade>70 && grade<=80)
		{
			cout<<"\33[34mGRADE B\33[0m"<<endl;
		}
		else if(grade>60 && grade<=70)
		{
			cout<<"\33[34mGRADE C\33[0m"<<endl;
		}
		else
		{
			cout<<"\33[31mYOU ARE FAIL\33[0m"<<endl;
		}
}

//MAIN FUNCTION
int main()
{

	Paper();
	Grade();
}
