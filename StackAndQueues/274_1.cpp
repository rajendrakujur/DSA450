/* /* Implement Circular Queue from scratch */ 
#include<iostream>
using namespace std;

struct queue
{
	int data[100] ;
	int front ;
	int rear ;
	int size ;
};

bool isEmpty(struct queue q )
{
	if((q.front+1)% q.size > q.rear)
		return true ;
	else 
		return false ;
}

bool isFull(struct queue q)
{
	if((q.rear+1)%q.size==q.front)
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
			q.front = (q.front+1)%q.size ;
			q.rear = (q.rear+1)%q.size ;
		}
		cout << "\nInserted Element : " << number ;
		q.data[q.rear] = number ;
		q.rear = (q.rear+1)%q.size ;
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
		int temp = q.data[q.front] ;
		q.front = (q.front+1)%q.size ;
		return temp ;
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
	q.size = 100 ;
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