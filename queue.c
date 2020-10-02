#include<stdio.h>
#include<stdlib.h>

struct node
{float data;
struct node *next;
};

struct node *head=NULL;

void insertlast()
{float value;
struct node *ptr;
ptr=head;
struct node *p=(struct node*)malloc(sizeof(struct node*));
printf("Enter value:");
scanf("%f",&value);
p->data=value;
if(head==NULL)
{	p->next=NULL;
	head=p;
}
else
{	while(ptr->next!=NULL)
		{ptr=ptr->next;}
	p->next=NULL;
	ptr->next=p;
}
}

void deletefirst()
{struct node *p;
p=head;
if(head==NULL)
{printf("Queue is empty\n");}
else
{	head=p->next;
}
free(p);
}

void traversal()
{struct node *ptr;
ptr=head;
if(head==NULL)
{printf("Queue is empty\n");}
else
{	printf("Queue is:");
	while(ptr->next!=NULL)
	{	printf("%f\n",ptr->data);
		ptr=ptr->next;	
	}
	printf("%f",ptr->data);
}
}

void main()
{
int i;
c:
printf("\nEnter\n1.Enqueue\n2.Dequeue\n3.Traversal\n4.Exit\n");
scanf("%d",&i);
switch(i)
{case 1:insertlast();break;
case 2:deletefirst();break;
case 3:traversal();break;
case 4:goto d;break;
default:printf("Enter only from 1 to 4\n");break;
}
goto c;
d:
printf("********************\n");
}
