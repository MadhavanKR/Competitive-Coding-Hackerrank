/*https://www.hackerrank.com/challenges/jim-and-the-orders*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,*t,*d,*delivery,*used,count=0,i,min;
	scanf("%d",&n);
	t=(int*)malloc(sizeof(int)*n);
	d=(int*)malloc(sizeof(int)*n);
	used=(int*)malloc(sizeof(int)*n);
	delivery=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&t[i],&d[i]);
		delivery[i]=t[i]+d[i];
		used[i]=0;
	}
	
	while(count!=n)
	{
	  for(i=0;i<n;i++)
		  if(used[i]==0)
			  min=i;
	  printf("min=%d \n",min);
	  for(i=0;i<n;i++)
	  {
		 if(delivery[i]<delivery[min] && used[i]==0)
			 min=i;
	  }
	  printf("min=%d \n",min);
	  count++;
	  used[min]=1;
	  printf("%d ",min+1);
	}
	return 0;
}