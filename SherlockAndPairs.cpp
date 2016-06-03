/*https://www.hackerrank.com/challenges/sherlock-and-pairs*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int t,n,i,j,l;
	int *a;
	scanf("%d",&t);
	for(l=0;l<t;l++)
	{
		int count[100001]={0},used[100001]={0};
		scanf("%d",&n);
		a=(int*)malloc(sizeof(int));
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			count[a[i]]++;
		}
		long int sum=0;
		for(i=0;i<n;i++)
		{
		   if(!used[a[i]])
		   {
			   sum+=count[a[i]]*count[a[i]]-1;
			   used[a[i]]=1;
		   }
		}
		printf("%ld\n",sum);
	}
	return 0;
}