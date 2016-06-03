/*https://www.hackerrank.com/challenges/greedy-florist*/
#include<stdio.h>
#include<stdlib.h>
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
          while(pivot<a[i] && i<r)
               i++;
          while(pivot>a[j])
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
void print(int a[],int n)
{
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
int main()
{
	int n,k,sum=0,i,j,*p,count,index;
	scanf("%d %d",&n,&k);
	p=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
		scanf("%d",&p[i]);
	quicksort(p,0,n-1);
	//print(p,n);
	count=0;
	i=0;
	index=0;
	while(count!=n)
	{
		for(j=0;j<k && index<n;j++)
		{
			sum+=((i+1)*p[index++]);
			count++;
		}
		i++;
	}
	printf("%d",sum);
}

