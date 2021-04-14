#include<bits/stdc++.h>
using namespace std;

void printArray(int array[],int sizeOfArray)
{
	cout << "\nUpdated array : " ;
	for(int i=0;i<sizeOfArray;i++)
	{
		cout << array[i] << " " ;
	}
}

void swap(int &a,int &b)
{
	int temp = a;
	a = b ;
	b = temp ;
}

void sort012(int array[],int sizeOfArray)
{
	int leftIndex = 0 ;
	int middleIndex = 0 ;
	int rightIndex = sizeOfArray-1 ;

	while(middleIndex <= rightIndex)
	{
		switch(array[middleIndex])
		{
			case 0 : swap(array[leftIndex],array[middleIndex]) ;
					 leftIndex++ ;
					 middleIndex++;
				     break ;
			case 1 : middleIndex ++ ;
					 break ;
			case 2 : swap(array[middleIndex],array[rightIndex]) ;
					 rightIndex-- ;
					 break ;
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
	sort012(array,sizeOfArray) ;
	printArray(array,sizeOfArray) ;
	cout << endl ;
	return 0;
}
