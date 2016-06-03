/*https://www.hackerrank.com/challenges/find-median*/
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
	int n,*a,i,j;
	scanf("%d",&n);
	a=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	quicksort(a,0,n-1);
	int mid=n/2;
	printf("%d\n",a[mid]);
	return 0;
}