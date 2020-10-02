#include<stdio.h>

struct stack
{	float a[20];
	int j1;
	int j2;
}*s,t;

void push(int h)
{	int j;
	float n;
	printf("Enter no. to push:");
	scanf("%f",&n);
	if(h==1)
	{	j=s->j1;
		s->a[j]=n;
	}
	else
	{	j=s->j2;
		s->a[j]=n;	
	}
	
}

void pop(int h)
{	int j;
	float n;
	if(h==1)
	{	j=s->j1;
		n=s->a[j+1];
		printf("Popped element is:%f",n);	
	}
	else
	{	j=s->j2;
		n=s->a[j-1];
		printf("Popped element is:%f",n);	
	}	

}

void main()
{
int i,k,g,n;
s=&t;
s->j1=-1;
printf("Enter size of stack:");
scanf("%d",&g);
s->j2=g;
f:
printf("Enter\n1.stack1\n2.stack2\n3.exit\n");
scanf("%d",&n);
if(n==1)
{
	printf("\nEnter \n1.push\n2.pop\n");
	scanf("%d",&i);
	if(i==1)
	{	if(s->j1!=s->j2-1)
			{	s->j1++;
				push(n);
			}
		else {printf("Overflow\n");}
	}
	else if(i==2)
 	{	if(s->j1>=0)
		{	s->j1--;
			pop(n);
		}
		else{printf("Underflow\n");}
	}
	
}
else if(n==2)
{	printf("\nEnter \n1.push\n2.pop\n");
	scanf("%d",&i);
	if(i==1)
	{	if(s->j2!=s->j1+1)
			{	s->j2--;
				push(n);
			}
		else{printf("Overflow\n");}
	}
	else if(i==2)
 	{	if(s->j2<g)
		{	s->j2++;
			pop(n);
		}
		else{printf("Underflow\n");}
	}
		
}
else if(n==3){goto d;}
else{printf("\nEnter 1,2 or 3\n");}
goto f;
d:
	
		printf("Stack1 after all operations is :\n");
		for(k=0;k<=s->j1;k++)
			{printf("%f\n",s->a[k]);}
		printf("Stack2 after all operations is :\n");
		for(k=g-1;k>=s->j2;k--)
			{printf("%f\n",s->a[k]);}
	
		
}
