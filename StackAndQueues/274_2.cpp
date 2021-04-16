/* /* Implement Linear Queue from scratch */ 
#include<iostream>
using namespace std;

struct queue
{
	int data[5] ;
	int front ;
	int rear ;
	int size ;
};

bool isEmpty(struct queue q )
{
	if(q.front==q.rear)
		return true ;
	else 
		return false ;
}

bool isFull(struct queue q)
{
	if(q.rear==q.size)
		return true ;
	else
		return false ;
}

void enqueue(struct queue &q,int number)
{
	if(isFull(q))
	{
		cout << "\nQueue is full " ;
	}
	else
	{
		if(q.front==-1)
		{
			++q.front ;
			++q.rear ;
		}
		cout << "\nInserted Element : " << number ;
		q.data[q.rear++] = number ;
	}
}

int dequeue(struct queue &q)
{
	if(isEmpty(q))
	{
		cout << "\nQueue is empty " ;
		return -1 ;
	}
	else
	{
		return q.data[q.front++] ;
	}
}

void printQueue(struct queue q)
{
	cout << "\nPrinting Queue (FIFO) : \n" ;
	while(!isEmpty(q))
	{
		cout << dequeue(q) << " " ;
	}
}

int main()
{
	queue q ;
	q.size = 5 ;
	q.front = -1 ;
	q.rear = -1 ;
	int numberOfElements ;
	int number ;

	cout << "Enter number of Elements : " ;
	cin >> numberOfElements ;
	
	while(numberOfElements--)
	{
		number = rand()%1000 ;
		enqueue(q,number) ;
	}

	// call by value to not affect the original Queue 
	printQueue(q) ;
	cout << endl ;
	return 0;
}