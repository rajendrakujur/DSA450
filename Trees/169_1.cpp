/*Post Order Tree traversal using recursion*/
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

void Insert(struct bstNode* &root,int number)
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
		Insert(root->left,number) ;
	}
	else
	{
		Insert(root->right,number) ;
	}
}

void postOrderRecursive(struct bstNode* root)
{
	if(root)
	{
		PostOrderRecursive(root->left) ;
		PostOrderRecursive(root->right) ;
		cout << root->data << " " ;
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
	cout << "Inserting in the following Order : " ;
	while(numberOfElements--)
	{
		number = rand()%100;
		Insert(root,number) ;
		cout << number << " " ;
	}
	cout << "\nPostOrderTraversal : " ;
	postOrderRecursive(root) ;
	
	cout << endl ;
	return 0;
}