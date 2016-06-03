/*https://www.hackerrank.com/challenges/larrys-array*/
#include<stdio.h>
#include<stdlib.h>

void print(int a[],int n)
{
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}

int main()
{
	int n,t,i,*a,l,count,temp;;
	scanf("%d",&t);
	for(l=0;l<t;l++)
	{
		scanf("%d",&n);
		a=(int*)malloc(sizeof(int)*n);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		do
		{
			count=0;
			for(i=0;i<n-2;i++)
			{	
				if(a[i]<a[i+1] && a[i]<a[i+2])
					continue;
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=a[i+2];
				a[i+2]=temp;
				count++;
				if(a[i]<a[i+1] && a[i]<a[i+2])
					continue;
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=a[i+2];
				a[i+2]=temp;
				count++;
			}
	//print(a,n);
		
		}while(count!=0);
		for(i=0;i<n-1;i++)
			if(a[i]>a[i+1])
			{
			  printf("NO\n");
			  goto end;
			}
			printf("YES\n");
end:;
	}
	return 0;
}
