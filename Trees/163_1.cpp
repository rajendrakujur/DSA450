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

void printArray(vector<int> array)
{
	for(int i=0;i<array.size();i++)
	{
		cout << array[i] << " " ;
	}
}

void reverseLevelOrderIterative(struct bstNode* root)
{
	queue<bstNode*> q ;
	vector<int> treeElements ;
	treeElements.clear() ;
	q.push(root) ;
	bstNode* temp = new bstNode() ;
	while(!q.empty())
	{
		treeElements.push_back(q.front()->data) ;
		if(q.front()->left)
		{
			temp = q.front()->left ;
			if(temp)
			{
				q.push(temp) ;
			}
		}
		if(q.front()->right)
		{
			temp = q.front()->right ;
			if(temp)
			{
				q.push(temp) ;
			}
		}
		q.pop() ;
	}
	reverse(treeElements.begin(),treeElements.end()) ;
	printArray(treeElements) ;
}

void LevelOrderIterative(struct bstNode* root)
{
	queue<bstNode*> q ;

	q.push(root) ;
	bstNode* temp = new bstNode() ;
	while(!q.empty())
	{
		cout << q.front()->data << " " ;
		if(q.front()->left)
		{
			temp = q.front()->left ;
			if(temp)
			{
				q.push(temp) ;
			}
		}
		if(q.front()->right)
		{
			temp = q.front()->right ;
			if(temp)
			{
				q.push(temp) ;
			}
		}
		q.pop() ;
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
	cout << "\nReverse level Order Traversal : " ;
	reverseLevelOrderIterative(root) ;

	cout << "\nLevelOrderTraversal : " ;
	LevelOrderIterative(root) ;
	
	cout << endl ;
	return 0;
}