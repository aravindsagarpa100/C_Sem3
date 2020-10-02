#include<stdio.h>
void merge(int a[],int f,int m,int l)
{int n,p,b[10],c[10],i,j,k;
n=m-f+1;
p=l-m;
for(i=0;i<n;i++)
{	b[i]=a[i+f];
}
for(i=0;i<p;i++)
{	c[i]=a[i+m+1];
}
for(i=0,j=0,k=f;i<n && j<p;k++)
{	if(b[i]<=c[j])
	{	a[k]=b[i];
		i++;
	}
	else
	{	a[k]=c[j];
		j++;
	}
}
for(;i<n;i++,k++)
{	a[k]=b[i];
}
for(;j<p;j++,k++)
{	a[k]=c[j];
}
}

int r=0;
int mergesort(int a[],int f,int l)
{
int m;
if(f<l)
{	
	m=(f+l)/2;
	mergesort(a,f,m);
	mergesort(a,m+1,l);
	merge(a,f,m,l);
}
r++;
return r;
}


void main()
{
int n,a[20],i,c;
printf("Enter n:");
scanf("%d",&n);
printf("Enter array:");
for(i=0;i<n;i++)
{	scanf("%d",&a[i]);
}
c=mergesort(a,0,n-1);
printf("Sorted list is:");
for(i=0;i<n;i++)
{	printf("%d\n",a[i]);
}
printf("The loop has been executed %d times\n",c);
}
