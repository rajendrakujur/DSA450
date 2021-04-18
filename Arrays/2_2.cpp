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

struct StructPair findMinMax(int array[],int startIndex,int lastIndex)
{
	static StructPair p ;
	if(startIndex==lastIndex)
	{
		p.min = array[startIndex] ;
		p.max = array[startIndex] ;
		return p ;
	}
	else if(startIndex==lastIndex-1)
	{
		if(array[startIndex] > array[lastIndex])
		{
			p.min = array[lastIndex] ;
			p.max = array[startIndex] ;
		}
		else
		{
			p.min = array[startIndex] ;
			p.max = array[lastIndex] ;
		}
		return p ;
	}
	else
	{
		static StructPair pairLeft, pairRight ;
		static int middleIndex ;
		middleIndex = (startIndex+lastIndex)/2;
		pairLeft = findMinMax(array,startIndex,middleIndex) ;
		pairRight = findMinMax(array,middleIndex+1,lastIndex) ;

		if(pairRight.min > pairLeft.min)
		{
			p.min = pairLeft.min ;
		}
		else
		{
			p.min = pairRight.min ;
		}

		if(pairRight.max > pairLeft.max)
		{
			p.max = pairRight.max ;
		}
		else
		{
			p.max = pairLeft.max ;
		}
		return p ;
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
	struct StructPair result = findMinMax(array,0,sizeOfArray-1) ;
	cout << "\nMin Element : " << result.min << "\tMax Element : " << result.max << endl ;
	return 0;
}