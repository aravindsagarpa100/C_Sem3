#include<stdio.h>
void main()
{
int n,a[15],j,temp,d,c=0,h=0,i;
printf("Enter n:");
scanf("%d",&n);
printf("Enter array elements:");
for(i=0;i<n;i++)
{	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{	d=i;
	for(j=i+1;j<n;j++)
	{	if(a[j]<a[d])
		{	d=j;
		}
		c++;	
	}
	if(d!=i)
	{	temp=a[i];
		a[i]=a[d];
		a[d]=temp;
		h++;
	}
}
printf("Sorted array is:");
for(i=0;i<n;i++)
{	printf("%d\n",a[i]);
}
printf("No. of comparisons done is %d\n",c);
printf("No. of swappings done is %d\n",h);
}
