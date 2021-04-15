/* Pre order traversal using iteration */

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

void preOrderIterative(struct bstNode* root)
{
	stack<bstNode*> s ;

	while(root)
	{
		cout << root->data << " " ;
		if(root->right)
		{
			s.push(root->right) ;
		}
		if(root->left)
		{
			root = root->left ;
		}
		else
		{
			if(s.empty())
				break ;
			root = s.top() ;
			s.pop() ;
		}
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
		insert(root,number) ;
		cout << number << " " ;
	}

	cout << "\nPreOrderTraversal : " ;
	preOrderIterative(root) ;

	cout << endl ;
	return 0;
}