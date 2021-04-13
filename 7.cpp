#include<bits/stdc++.h>
using namespace std;

void printArray(int array[],int sizeOfArray)
{
	cout << "\nUpdated Array : " ;
	for(int i=0;i<sizeOfArray;i++)
	{
		cout << array[i] << " " ;
	}
	cout << endl ;
}

void RotateByOne(int array[],int sizeOfArray)
{
	if(sizeOfArray>1)
	{

		int prevNumber = array[0] ;
		int nextNumber = array[1] ;
		
		for(int i=1;i<sizeOfArray;i++)
		{
			array[i] = prevNumber ;
			prevNumber = nextNumber ;
			if(i<sizeOfArray-1)
			{
				nextNumber = array[i+1] ;
			}
		}
		array[0] = nextNumber ;
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
	RotateByOne(array,sizeOfArray) ;
	printArray(array,sizeOfArray) ;
	cout << endl ;
	return 0;
}