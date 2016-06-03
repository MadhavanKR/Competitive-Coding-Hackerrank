/*https://www.hackerrank.com/challenges/cut-the-sticks*/
#include<stdio.h>
#include<stdlib.h>

int findmin(int a[],int n);

void main()
{
	int a[1000],n,i,min,count=0,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	j=n;
    while(j!=0)
	{
		count=0;
		min=a[findmin(a,n)];
		if(min==0)
			break;
		for(i=0;i<n;i++)
		{
			if(a[i]!=0 && a[i]>0)
			{
				a[i]=a[i]-min;
				count++;
			}
		}
		printf("%d\n",count);
		j--;
	}
}

int findmin(int a[],int n)
{
	int i,min=0;
	for(i=0;i<n;i++)
    {
		if(a[i]!=0)
		{
			min=i;
			break; 
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=0&&a[i]<a[min])
			min=i;
	}
	return min;
}
	
   

		
				
