#include<stdio.h>
#include<stdlib.h>

struct node
{float data;
struct node *next;
};

struct node *last=NULL;

void insertlast()  
{float value;
struct node *ptr;
ptr=last;
struct node *p=(struct node*)malloc(sizeof(struct node*));
printf("Enter value:");
scanf("%f",&value);
p->data=value;
if(last==NULL)
{	p->next=p;
	last=p;
}
else
{	while(ptr->next!=last->next)
		{ptr=ptr->next;}
	p->next=last->next;
	last->next=p;
	last=p;
}
}

void deletefirst()   
{struct node *p;
if(last==NULL)
{printf("Queue is empty\n");}
else
{	p=last->next;
	if(last->next!=last)
	{	last->next=p->next;
	}
	else
	{	last=NULL;
	}
}
free(p);
}

void traversal()    
{struct node *ptr;
if(last==NULL)
{printf("Queue is empty\n");}
else
{	ptr=last->next;
	printf("Queue is:");
	while(ptr->next!=last->next)
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
printf("\n********************\n");
}
