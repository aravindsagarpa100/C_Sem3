#include<stdio.h>
#include<stdlib.h>

struct node
{float data;
struct node *next;
};

struct node *head=NULL;

void insertfirst()
{float value;
struct node *p=(struct node*)malloc(sizeof(struct node*));
printf("Enter value:");
scanf("%f",&value);
p->next=head;
head=p;
p->data=value;
}

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

void deletelast()
{struct node *p,*ptr;
ptr=head;
p=NULL;
if(head==NULL)
{printf("Queue is empty\n");}
else
{	if(ptr->next==NULL)
	{	head=NULL;
		free(ptr);	
	}	
	else
	{	while(ptr->next!=NULL)
		{	p=ptr;
			ptr=ptr->next;
		}
		p->next=NULL;
		free(ptr);
	}
}
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
printf("\nEnter\n1.Insert at first\n2.Insert at last\n3.Delete at first\n4.Delete at last\n5.Traversal\n6.Exit\n");
scanf("%d",&i);
switch(i)
{case 1:insertfirst();break;
case 2:insertlast();break;
case 3:deletefirst();break;
case 4:deletelast();break;
case 5:traversal();break;
case 6:goto d;break;
default:printf("Enter only from 1 to 6\n");break;
}
goto c;
d:
printf("********************\n");
}
