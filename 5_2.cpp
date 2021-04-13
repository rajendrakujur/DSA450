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
	int swappingIndex = 0 ;
	for(int i=0;i<sizeOfArray;i++)
	{
		if(array[i]<0)
		{
			if(i!=swappingIndex)
			{
				swap(array[swappingIndex],array[i]) 
			}
			swappingIndex ++ ;
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
	return 0;
}