/*https://www.hackerrank.com/challenges/closest-numbers*/
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
	int n,*a,i,j=0,min,*b,k=1,l;
	scanf("%d",&n);
	a=(int*)malloc(sizeof(int)*n);
	b=(int*)malloc(sizeof(int)*n);
	scanf("%d",&a[0]);
	scanf("%d",&a[1]);
	min=abs(a[1]-a[0]);
	/*b[j]=a[0];
	b[k]=a[1];*/
	for(i=2;i<n;i++)
	{
		scanf("%d",&a[i]);
		for(l=i-1;l>=0;l--)
		{
			if(abs(a[l]-a[i])<min)
			{
				/*b[j]=l;
				b[k]=i;*/
				min=abs(a[l]-a[i]);
			}
		}
	}
	/*j+=2;
	k+=2;*/
	for(i=1;i<n;i++)
	{
	  for(l=i-1;l>=0;l--) 
	  {
	   if(abs(a[l]-a[i])==min)
	   {
		if(l!=b[j] && i!=b[k])
		{
	     b[j]=l;
		 b[k]=i;
		 j+=2;
		 k+=2;
		}
	   }
	  }
	}
	for(i=0;i<j;i++)
	{
	//	printf("%d ",a[b[i]]);
		b[i]=a[b[i]];
		//printf("%d ",a[b[i]]);
	}
	//printf("\n");
	quicksort(b,0,j-1);
	for(i=0;i<j;i++)
	{
	//	b[i]=a[b[i]];
		printf("%d ",b[i]);
	}
	return 0;
}