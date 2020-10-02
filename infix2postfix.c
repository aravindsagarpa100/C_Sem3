#include<stdio.h>
#include<string.h>

char b[20];
int t=-1;

void push(char c)
{t++;	
b[t]=c;
}

char pop()
{if(t==-1)	
	return -1;
else
	t--;
	return (b[t+1]);
}

int p(char c)
{
if(c=='(')
	return 0;
else if(c=='+' || c=='-')
	return 1;
else if(c=='/' || c=='*')
	return 2;
}

void main()
{
char x,c,i,a[20];
printf("Enter expression:");
scanf("%s",a);
c=strlen(a);
for(i=0;i<c;i++){
if(a[i]!='\0')
{	if(isalnum(a[i]))
		printf("%c",a[i]);
	else if(a[i]=='(')
		push(a[i]);
	else if(a[i]==')')
	{x=pop();
		while(x!='(')
			{printf("%c",x);
			x=pop();}
		
	}
	else
	{while(t!=-1 && p(b[t])>=p(a[i]))
		{printf("%c",pop());}
	push(a[i]);
	}
}
}
while(t!=-1)
	{printf("%c",pop());}
printf("\n");
}
