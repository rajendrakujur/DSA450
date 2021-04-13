#include<bits/stdc++.h>
using namespace std;

void printArray(int array[],int sizeOfArray)
{
	cout << "\nUpdated Array : " ;
	for(int i=0;i<sizeOfArray;i++)
	{
		cout << array[i] << " " ;
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

	int countZeroes = 0 ;
	int countOnes = 0 ;
	int countTwos = 0 ;

	// Counting Zeroes Ones and Twos
	for(int i=0;i<sizeOfArray;i++)
	{
		if(array[i]==0)
			countZeroes ++ ;
		else if(array[i]==1)
			countOnes ++ ;
		else if(array[i]==2)
			countTwos ++ ;
	}

	for(int i=0;i<sizeOfArray;)
	{
		while(countZeroes--)
		{
			array[i++] = 0 ;
		}
		while(countOnes--)
		{
			array[i++] = 1 ;
		}
		while(countTwos--)
		{
			array[i++] = 2 ;
		}
	}
	printArray(array,sizeOfArray) ;
	cout << endl ;
	return 0;
}