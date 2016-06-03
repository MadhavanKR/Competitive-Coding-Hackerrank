/*https://www.hackerrank.com/challenges/grid-challenge*/
#include<stdio.h>
#include<stdlib.h>

void quicksort(char a[],int p,int r)
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
  char a[101][101],temp;
  int i,j,n,l,t;
  scanf("%d",&t);
  for(l=0;l<t;l++)
  {
	  scanf("%d",&n);
	  //printf("n=%d\n",n);
	  for(i=1;i<n+1;i++)
	  {
		 scanf("%s",a[i]);
	  }
	 /*for(i=1;i<n+1;i++)
	  {
		  for(j=0;j<n;j++)
			  printf("%d ",a[i][j]);
		  printf("\n");
	  }*/
    for(i=1;i<n+1;i++)
	{
	  quicksort(a[i],0,n-1);
	}
	for(j=0;j<n;j++)
	{
	  for(i=1;i<n;i++)
	  {
		if(a[i][j]>a[i+1][j])
		{
			printf("NO\n");
			goto end;
		}
	  } 
	}
    printf("YES\n");
end:;
  }
  return 0;
}