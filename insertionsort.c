#include<stdio.h>

void insert(float a[],int n)
{
int i,j,s=0;
float key;
for(i=1;i<n;i++)
{	key=a[i];
	j=i-1;
	while(j>=0 && a[j]>key)
	{	a[j+1]=a[j];
		j--;
	}
	a[j+1]=key;
	s++;
}
printf("Sorted array is :");
for(i=0;i<n;i++)
{	printf("%f\n",a[i]);
}
printf("No. of shifting done is :%d\n",s);
}

void main()
{int n,i;
float a[20];
printf("Enter n:");
scanf("%d",&n);
printf("Enter array:");
for(i=0;i<n;i++)
{	scanf("%f",&a[i]);
}
insert(a,n);
}
