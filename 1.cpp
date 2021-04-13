#include<bits/stdc++.h>
using namespace std;

void swap(int &a,int &b)
{
	int temp = a ;
	a = b ;
	b = temp ;
}

void printArray(int array[],int sizeOfArray)
{
	cout << "\nUpdated Array : " ;
	for(int i=0;i<sizeOfArray;i++)
	{
		cout << array[i] << " " ;
	}
	cout << endl ;
}

void reverseArray(int array[],int sizeOfArray)
{
	if(sizeOfArray%2==0)
	{
		for(int i=0;i<=sizeOfArray/2;i++)
		{
			swap(array[i],array[sizeOfArray-1-i]) ;
		}
	}
	else
	{
		for(int i=0;i<=sizeOfArray/2;i++)
		{
			swap(array[i],array[sizeOfArray-1-i]) ;
		}
	}
}

int main()
{
	int sizeOfArray ;
	cout << "Enter size of array : " ;
	cin >> sizeOfArray ;
	int array[sizeOfArray] ;
	cout << "Enter array elements : " ;
	for(int i=0;i<sizeOfArray;i++)
	{
		cin >> array[i] ;
	}
	printArray(array,sizeOfArray) ;
	reverseArray(array,sizeOfArray) ;
	printArray(array,sizeOfArray) ;
}