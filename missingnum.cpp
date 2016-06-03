/*https://www.hackerrank.com/challenges/missing-numbers*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *a,*b,i,j,max=0,min=0,*count1,*count2,max1,min1,m,n;
	scanf("%d",&n);
	//reading input of first array
	a=(int*)malloc(n*sizeof(int));
	scanf("%d",&a[0]);
	max=min=a[0];
	for(i=1;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
    count1=(int*)malloc((max-min+1)*sizeof(int));
	count2=(int*)malloc((max-min+1)*sizeof(int));
	scanf("%d",&m);
	//reading inputs of second array
	b=(int*)malloc(m*sizeof(int));
	scanf("%d",&b[0]);
	max1=min1=b[0];
	for(i=1;i<m;i++)
	{
		scanf("%d",&b[i]);
		if(a[i]>max)
			max1=b[i];
		if(a[i]<min)
			min1=b[i];
	}
    for(i=0;i<max-min+1;i++)
		count1[i]=count2[i]=0;
	for(i=0;i<n;i++)
		count1[a[i]-min]++;
	for(i=0;i<m;i++)
		count2[b[i]-min]++;
    
	/*for(i=0;i<max-min+1;i++)
		printf("%d ",count1[i]);
	printf("\n");
	for(i=0;i<max-min+1;i++)
		printf("%d ",count2[i]);*/

    for(i=0;i<max-min+1;i++)
		if(count1[i]!=count2[i])
			printf("%d ",i+min);


}