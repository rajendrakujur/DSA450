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

void moveNegatives(int array[],int sizeOfArray)
{
	int leftIndex = 0 ;
	int rightIndex = sizeOfArray-1 ;
	while(leftIndex <= rightIndex)
	{
		if(array[leftIndex]>0)
		{
			if(array[rightIndex]<0)
			{

				swap(array[leftIndex++],array[rightIndex--]) ;
			}
			else
			{
				rightIndex--;
			}
		}
		else
		{
			leftIndex++ ;
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
	moveNegatives(array,sizeOfArray) ;
	printArray(array,sizeOfArray) ;
	cout << endl ;
	return 0;
}