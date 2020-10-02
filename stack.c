#include<stdio.h>

struct stack
{	float a[20];
	int j;
}*s,t;

void push()
{	float n;
	printf("Enter no. to push:");
	scanf("%f",&n);
	s->a[s->j-1]=n;
}

void pop()
{	float n;
	n=s->a[s->j];
	s->a[s->j+1]=0;
	printf("Popped element is:%f",n);
}

void main()
{
int c,i,k,g;
s=&t;
s->j=0;
printf("Enter size of stack:");
scanf("%d",&g);
f:
	printf("\nEnter \n1.push\n2.pop\n3.exit\n");
	scanf("%d",&i);
	if(i==1)
	{	if(s->j<g)
			{	s->j++;
				push();
			}
		else{printf("Overflow\n");}
	}
	else if(i==2)
 	{	if(s->j>0)
		{	s->j--;
			pop();
		}
		else{printf("Underflow\n");c=1;}
	}
	else if(i==3){goto d;}
	else{printf("\nEnter 1,2 or 3 only\n");}
goto f;
d:
	if(c!=1)
	{	printf("Array after all operations is :\n");
		for(k=0;k<s->j;k++)
			{printf("%f\n",s->a[k]);}
	}
		
}
