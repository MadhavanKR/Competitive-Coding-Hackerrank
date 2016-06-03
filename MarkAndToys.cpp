/*https://www.hackerrank.com/challenges/mark-and-toys*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void quicksort(int a[],int p,int r)
{
   int i,temp,pivot,j;
   if(p<r)
   {
      i=p;
      j=r;
      pivot=a[p];
      while(1)
      {
           i++;
          while(pivot>a[i] && i<r)
               i++;
          while(pivot<a[j])
               j--;
           if(i<j)
           {
               temp=a[i];
               a[i]=a[j];
              a[j]=temp;
           }
           else break;
      }
      a[p]=a[j];
      a[j] =pivot;
     quicksort (a,p,j-1);
     quicksort(a,j+1,r);
   }
}


int main() 
{
	int n,k,*a,i,sum=0,count=0;
	scanf("%d %d",&n,&k);
	a=(int*)malloc(sizeof(int)*(n+1));
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	a[n]=0;
	quicksort(a,0,n-1);
	/*for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");*/
	if(a[0]>k)
	{
		count=0;
		goto end;
	}
	count=1;
	i=0;
	while(1)
	{
		sum=sum+a[i];
		//printf("sum = %d \n",sum);
		if((sum+a[i+1])>k)
			break;
		i=i+1;
		count=count+1;
	}
end:printf("%d",count);
		return 0;
}