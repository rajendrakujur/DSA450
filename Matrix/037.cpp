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

void PrintSpiral(vector<vector<int> > matrix)
{
	cout << "\nSpiral Traversal : " ;
	
	int countElements = 0 ;
	int numberOfElements = matrix.size() * matrix[0].size() ;
	int upLimit = 0 ;
	int downLimit = matrix.size() -1 ;
	int leftLimit = 0 ;
	int rightLimit = matrix[0].size()-1 ;
	int i , j ;
	int temp = 0 ;
	
	while(countElements<numberOfElements)
	{
		switch(temp%4)
		{
			case 0 : // cout << "\nTraversing Right : " ;
					 for(i=upLimit,j=leftLimit;j<=rightLimit;j++)
					 {
					 	cout << matrix[i][j] << " " ;
					 	countElements++;
					 }
					 upLimit++ ;
					 break ;
			case 1 : // cout << "\nTraversing Down : " ;
					 for(j=rightLimit,i=upLimit;i<=downLimit;i++)
					 {
					 	cout << matrix[i][j] << " " ;
					 	countElements++;
					 }
					 rightLimit-- ;
					 break ;
			case 2 : // cout << "\nTraversing Left : " ;
					 for(i=downLimit,j=rightLimit;j>=leftLimit;j--)
			 		 {
			 		 	cout << matrix[i][j] << " " ;
			 		 	countElements++;
			 		 }
			 		 downLimit--;
			 		 break ;
			case 3 : // cout << "\nTraversing Up : " ;
					 for(j=leftLimit,i=downLimit;i>=upLimit;i--)
					 {
					 	cout << matrix[i][j] << " " ;
					 	countElements++;
					 }
					 leftLimit++ ;
					 break ;
		}
		temp ++ ;
		// cout << "\n\tUpLimit : " << upLimit ;
		// cout << "\n\tDownLimit : " << downLimit ;
		// cout << "\n\tLeftLimit : " << leftLimit ;
		// cout << "\n\tRightLimit : " << rightLimit ;  
	}
}


int main()
{
	vector<vector<int>> matrix ;
	int numberOfRows ;
	int numberOfcolumns ;
	cout << "Enter number of Rows : " ;
	cin >> numberOfRows ;
	cout << "Enter number of Columns : " ;
	cin >> numberOfcolumns ;
	cout << "Enter Matrix Elements (Row-Major Order) : " ;
	int number = 1 ;
	for(int i=0;i<numberOfRows;i++)
	{
		vector<int> row ;
		for(int j=0;j<numberOfcolumns;j++)
		{
			cin >> number ;
			row.push_back(number) ;
		}
		matrix.push_back(row) ;
	}

	PrintMatrix(matrix) ;
	PrintSpiral(matrix) ;
	cout << endl ;
}