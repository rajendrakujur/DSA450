#include<bits/stdc++.h>
using namespace std;

void PrintMatrix(vector<vector<int>> matrix)
{
	cout << "\nUpdated Matrix : \n\n" ;
	for(int i=0;i<matrix.size();i++)
	{
		cout << "\t\t" ;
		for(int j=0;j<matrix[i].size();j++)
		{
			cout << matrix[i][j] << "\t" ;
		}
		cout << endl ;
	}
}


int main()
{
	vector<vector<int>> matrix ;
	int numberOfRows ;
	int numberOfcolumns ;
	cout << "Enter number of Rows : " ;
	cin >> numberOfRows ;
	cout << "Enter number of COlumns : " ;
	cin >> numberOfcolumns ;
	cout << "Enter Matrix Elements (Row-Major Order) : " ;
	for(int i=0;i<numberOfRows;i++)
	{
		vector<int> row ;
		static int number ;
		for(int j=0;j<numberOfcolumns;j++)
		{
			cin >> number ;
			row.push_back(number) ;
		}
		matrix.push_back(row) ;
	}

	PrintMatrix(matrix) ;
}