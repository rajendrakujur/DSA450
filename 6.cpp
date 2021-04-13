#include<bits/stdc++.h>
using namespace std;

struct UnionAndIntersection
{
	vector<int> Union ;
	vector<int> Intersection ;
};
void printArray(vector<int> array)
{
	cout << "\nUpdated Array : " ;
	for(int i=0;i<array.size();i++)
	{
		cout << array[i] << " " ;
	}
	cout << endl ;
}

void printUnionIntersection(struct UnionAndIntersection mergedArray)
{
	cout << "\nUnion : " ;
	for(int i=0;i<mergedArray.Union.size();i++)
	{
		cout << mergedArray.Union[i] << " " ;
	}
	cout << "\nIntersection : " ;
	for(int i=0;i<mergedArray.Intersection.size();i++)
	{
		cout << mergedArray.Intersection[i] << " " ;
	} 
}

struct UnionAndIntersection MergeSortedArray(vector<int> firstArray,vector<int> secondArray)
{
	struct UnionAndIntersection mergedArray ;
	mergedArray.Union.clear() ;
	mergedArray.Intersection.clear() ;

	int i=0;
	int j=0;
	for( ; i<firstArray.size() && j<secondArray.size() ;)
	{
		if(firstArray[i] == secondArray[j])
		{
			mergedArray.Intersection.push_back(firstArray[i]);
			mergedArray.Union.push_back(firstArray[i]);
			i++;
			j++ ;
		}
		else if(firstArray[i] < secondArray[j])
		{
			mergedArray.Union.push_back(firstArray[i++]) ;
		}
		else
		{
			mergedArray.Union.push_back(secondArray[j++]) ;
		}

	}

	while(i<firstArray.size())
	{
		mergedArray.Union.push_back(firstArray[i++]) ;
	}
	while(j<secondArray.size())
	{
		mergedArray.Union.push_back(secondArray[j++]) ;
	}
	return mergedArray ;
}

int main()
{
	int number ;
	vector<int> firstArray , secondArray ;
	cout << "Enter first sorted Array (-1 to terminate): " ;
	while(1)
	{
		cin >> number ;
		if(number==-1)
			break ;
		firstArray.push_back(number) ;
	}
	cout << "First Array : " ;
	printArray(firstArray) ;

	cout << "Enter second sorted Array (-1 to terminate): " ;
	while(1)
	{
		cin >> number ;
		if(number==-1)
			break ;
		secondArray.push_back(number) ;
	}
	cout << "Second Array : " ;
	printArray(secondArray) ;

	struct UnionAndIntersection result = MergeSortedArray(firstArray,secondArray) ;
	printUnionIntersection(result) ;
	cout << endl ;
	return 0;
}