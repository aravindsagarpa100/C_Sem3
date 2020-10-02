#include<stdio.h>
struct node
{
	int data;
	struct node *right;
	struct node *left;
};
struct node *create()
{
	int x;
	printf("Enter the value to be inserted(-1for NULL) \n");
	scanf("%d",&x);
	if(x==-1)
		return NULL;
	else
	{
		struct node *p=(struct node *)malloc(sizeof(struct node*));
		p->data=x;
		printf("Enter the left child of %d \n",x);
		p->left=create();
		printf("Enter the right child of %d \n",x);
		p->right=create();
		return p;
	}
}
void preorder(struct node *t)
{
	if(t!=NULL)
	{
		printf("%d\t",t->data);
		preorder(t->left);
		preorder(t->right);
	}
	
}
void main()
{
	struct node *root;
	root=create();
	preorder(root);	
}
