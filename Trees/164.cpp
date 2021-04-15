#include<bits/stdc++.h>
#include<time.h>
#include<stdlib.h>
using namespace std;

struct bstNode
{
	bstNode* left ;
	int data ;
	bstNode* right ;
};

void insert(struct bstNode* &root,int number)
{
	if(!root)
	{
		root = new bstNode() ;
		root->data = number ;
		root->left = NULL ;
		root->right = NULL ;
	}
	else if(root->data > number)
	{
		insert(root->left,number) ;
	}
	else
	{
		insert(root->right,number) ;
	}
}

int max(int a,int b)
{
	if(a>b)
		return a ;
	else return b ;
}

int height(struct bstNode* root)
{
	if(root==NULL)
		return -1 ;
	else
	{
		return max(height(root->left),height(root->right))+1 ;
	}
}

int main()
{
	srand(time(0)) ;
	struct bstNode* root = NULL ;
	int number ;
	int numberOfElements = 0;
	cout << "Enter number of elements you want to insert : " ;
	cin >> numberOfElements ;
	cout << "inserting in the following Order : " ;
	while(numberOfElements--)
	{
		number = rand()%100;
		insert(root,number) ;
		cout << number << " " ;
	}
	cout << "\nHeight of Binary Tree : " << height(root) ;
	cout << endl ;
	return 0;
}