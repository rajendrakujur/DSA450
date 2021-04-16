#include<iostream>
#include<stdlib.h>
using namespace std;

struct stack
{
	int data[100] ;
	int top ;
	int size ;
};


void push(struct stack &s,int number)
{
	if(s.top <= s.size)
	{
		cout << "\nInserted Element : " << number ;
		s.data[++s.top] = number ;
	}
	else
	{
		cout << "\nStack Overflow " ;
	}
}

int pop(stack &s)
{
	if(s.top == -1)
	{
		cout << "\nStack Underflow " ;
		return -1 ;
	}
	else
	{
		return s.data[s.top--] ;
	}
}

void printStack(struct stack s)
{
	cout << "\nPrinting Stack in LIFO order : " ;
	while(s.top!=-1)
	{
		cout << pop(s) << " " ;
	}
}

int main()
{

	srand(time(0)) ;

	struct stack s ;
	s.top = -1 ;
	s.size = 100 ;
	int numberOfElements ;
	int number ;

	cout << "Enter number of Elements : " ;
	cin >> numberOfElements ;
	
	while(numberOfElements--)
	{
		number = rand()%1000 ;
		push(s,number) ;
	}

	// while printing don't want to change stack so call by value
	printStack(s) ;
	cout << endl ;
}