#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
	struct node
{
	int data;
	struct node*left;
	struct node*right;
};
	struct node*newNode(int data);
	void printpostorder(struct node*node);
	int main()
{
	struct node*root=newNode(1);
	root->left=newNode(2);
	root->right=newNode(3);
	root->left->left=newNode(4);
	root->left->right=newNode(5);
	cout<<"\n postorder traversal of binary tree";
	printpostorder(root);
	getchar();
	return 0;
}
	struct node*newNode(int data)
{
	struct node*node=(struct node*)malloc(sizeof (struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return (node);
}
	void printpostorder(struct node*node)
{
	if(node==NULL)
	return;
	printpostorder(node->left);
	printpostorder(node->right);
	cout<<"node->data";
}
