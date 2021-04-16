/*InOrder iterative traversal of a tree */
#include<bits/stdc++.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>
using namespace std;

unsigned int microsecond = 1000000;
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

void inOrderIterative(struct bstNode* root)
{
	stack<bstNode*> s ;
	
	while(root)
	{
		if(root->left)
		{
			s.push(root) ;
			root = root->left ;
			continue ;
		}
		else
		{
			cout << root->data << " " ;
		}
		if(root->right)
		{
			root = root->right ;
		}
		else
		{
			if(s.size()==0)
				break ;
			else
			{
				
				label : cout <<  s.top()->data << " " ;
				if(s.top()->right)
				{
					root = s.top()->right ;
					s.pop() ;				}
				else
				{
					s.pop() ;
					if(s.size()==0)
					break ;
					goto label ;
				}
			}
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
		// cin >> number ;
		number = rand()%100 ;
		cout << number << " " ;
		insert(root,number) ;
	}

	cout << "\nInOrderTraversal : " ;
	inOrderIterative(root) ;

	cout << endl ;
	return 0;
}