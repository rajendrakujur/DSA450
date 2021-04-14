#include<bits/stdc++.h>
using namespace std;

void printMatrix(vector<vector<int> > matrix,int numberOfRows,int numberOfColumns) 
{
	cout << "\nUpdated Matrix : \n" ;
	for(int i=0;i<numberOfRows;i++)
	{
		cout << "\t\t" ;
		for(int j=0;j<numberOfColumns;j++)
		{	
			cout << matrix[i][j] << "\t" ;
		}
		cout << endl ;
	}
}

bool SearchMatrix(vector<vector<int>> matrix,int targetValue)
{
	for(int i=0;i<matrix.size();i++)
	{
		for(int j=0;j<matrix[i].size();j++)
		{
			if(targetValue==matrix[i][j])
				return true ;
		}
	}
	return false ;
}

int main()
{
	vector<vector<int> > matrix ;
	int numberOfRows ;
	int numberOfColumns ;
	
	cout << "Enter matrix size (Number of rows) : " ;
	cin >> numberOfRows ;
	cout << "Enter matrix size (Number of columns) : " ;
	cin >> numberOfColumns ;

	cout << "Enter matrix elements in Row major order : " ;
	for(int i=0;i<numberOfRows;i++)
	{
		vector<int> row ;
		row.clear() ;
		static int number ;
		for(int j=0;j<numberOfColumns;j++)
		{
			cin >> number ;
			row.push_back(number) ;
		}
		matrix.push_back(row) ;
	}
	
	printMatrix(matrix,numberOfRows,numberOfColumns) ;
	
	int targetValue ;
	cout << "Enter target value you want to search : " ;
	cin >> targetValue ;

	if(SearchMatrix(matrix,targetValue))
	{
		cout << "Target Value Found " ;
	}
	else 
	{
		cout << "Target Value not Found " ;
	}
	cout << endl ;
}	
