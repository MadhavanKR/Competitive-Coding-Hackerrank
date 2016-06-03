/*https://www.hackerrank.com/challenges/crush*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,m,i,j;
	long int *array,a,b,k;
	scanf("%d %d",&n,&m);
	array=(long int*)malloc(sizeof(long int)*(n+1));
	for(i=1;i<=n;i++)
		array[i]=0;
	j=0;
	//print(a,n);
	while(j<m)
	{
		//printf("%d\n",j);
		scanf("%ld %ld %ld",&a,&b,&k);
		for(i=a;i<=b;i++)
			array[i]+=k;
		j++;
	}
	long int max=array[1];
	for(i=1;i<=n;i++)
		if(array[i]>max)
			max=array[i];
	printf("%ld\n",max);
	return 0;
}
