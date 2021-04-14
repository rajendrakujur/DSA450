#include<bits/stdc++.h>
using namespace std;

struct StructPair
{
	int min ;
	int max ;
};

void printArray(int array[],int sizeOfArray)
{
	cout << "\nUpdated Array : " ;
	for(int i=0;i<sizeOfArray;i++)
	{
		cout << array[i] << " " ;
	}
	cout << endl ;
}

struct StructPair findMinMax(int array[],int sizeOfArray)
{
	StructPair p ;
	p.min = array[0] ;
	p.max = array[0] ;
	for(int i=0;i<sizeOfArray;i++)
	{
		if(p.min > array[i])
		{
			p.min = array[i] ;
		}
		else if(p.max < array[i])
		{
			p.max = array[i] ;
		}
	}
	return p ;
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
	struct StructPair result = findMinMax(array,sizeOfArray) ;
	cout << "\nMin Element : " << result.min << "\tMax Element : " << result.max << endl ;
	return 0;
}
