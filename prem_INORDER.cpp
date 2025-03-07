#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<cstdio>
struct node
{
	int data;
	struct node*left;
	struct node*right;
};
	struct node*newNode(int data);
	void printinorder(struct node*node);
	int main()
{
	clrscr();
	struct node*root=newNode(1);
	root->left=newNode(3);
	root->right=newNode(6);
	root->left->left=newNode(7);
	root->left->left->right=newNode(8);
	root->left->left->right->left=newNode(9);
	root->left->left->right->left->left=newNode(10);
	root->right->left=newNode(2);
	root->right->right=newNode(4);
	root->right->right->left=newNode(5);
	root->right->right->right=newNode(11);
	root->right->right->right->left=newNode(12);
	cout<<"\n inorder traversal of binary tree";
	printinorder(root);
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
	void printinorder(struct node*node)
{
	if(node==NULL)
	return;
	printinorder(node->left);
	cout<<"\n"<<node->data;
	printinorder(node->right);
}
