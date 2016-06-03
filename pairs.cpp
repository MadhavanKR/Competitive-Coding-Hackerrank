/*https://www.hackerrank.com/challenges/pairs*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

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
	int n,k,i,*a,count=0,j;
	scanf("%d %d",&n,&k);
	a=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	quicksort(a,0,n-1);
    for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((a[j]-a[i])==k)
				count++;
			else if((a[j]-a[i])>k)
				break;

		}
	}
	printf("%d",count);
	return 0;
}