/*https://www.hackerrank.com/challenges/angry-children*/
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
	int n,*a,i,j,k,max,temp;
	scanf("%d %d",&n,&k);
	a=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	quicksort(a,0,n-1);
	max=a[k-1]-a[0];
	for(i=0;i<=n-k;i++)
	{
		temp=a[k+i-1]-a[i];
	//	printf("temp=%d\n",temp);
		if(temp<max)
			max=temp;
	//	printf("max=%d\n",max);
	}
	printf("%d\n",max);
	return 0;
}