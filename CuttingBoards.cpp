/*https://www.hackerrank.com/challenges/board-cutting*/
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
	int t,*x,*y,m,n;    
	int l;
	scanf("%d",&t);
	for(l=0;l<t;l++)
	{
		int i,j;
		long int mod=pow(10,9)+7,cost=0;
		printf("mod=%ld\n",mod);
		scanf("%d %d",&m,&n);
		x=(int*)malloc(sizeof(int)*n);
		y=(int*)malloc(sizeof(int)*m);
		for(i=0;i<m-1;i++)
			scanf("%d",&y[i]);
		for(i=0;i<n-1;i++)
			scanf("%d",&x[i]);
		/*print(x,n-1);
		print(y,m-1);*/
		
		quicksort(x,0,n-2);
		quicksort(y,0,m-2);
		/*print(x,n-1);
		print(y,m-1);*/


		i=0;
		j=0;
		int segx=1,segy=1;
		while(1)
		{
			//printf("%d %d\n",x[i],y[j]);
			if(x[i]>=y[j] && i<n-1)
			{
				cost= (cost%mod + (x[i]*segy)%mod)%mod;
				segx+=1;
				//printf("select x%d with cost %d\n",i,x[i]);
				i++;
			}
			else if(y[j]>x[i] && j<m-1)
			{
				cost= (cost%mod + (y[j]*segx)%mod)%mod;
				segy+=1;
				//printf("select y%d\n",j);
				j++;
			}
			//printf("i=%d and j=%d\n",i,j);
			if(i>=n-1 && j>=m-1)
				break;
		}
		printf("%d\n",cost);
	}
    return 0;
}
