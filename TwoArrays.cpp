/*https://www.hackerrank.com/challenges/two-arrays*/
#include<stdio.h>
#include<stdlib.h>

void print(int a[],int n)
{
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}

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
	int i,n,*a,*b,key,j,t,flag,*check1,*check2,just,k;
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
	  scanf("%d %d",&n,&key);
	  a=(int*)malloc(sizeof(int)*n);
	  b=(int*)malloc(sizeof(int)*n);
	  check1=(int*)malloc(sizeof(int)*n);
	  check2=(int*)malloc(sizeof(int)*n);
	  for(i=0;i<n;i++)
		  scanf("%d",&a[i]);
	  for(i=0;i<n;i++)
	  {
		  scanf("%d",&b[i]);
		  check1[i]=check2[i]=0;
	  }
	  quicksort(b,0,n-1);
	  //print(b,n);
	  flag=1;
	  for(i=0;i<n;i++)
	  {
		  for(j=0;j<n;j++)
		  {
			  if((a[i]+b[j])>=key && check2[j]==0)
			  {
				  check1[i]=j+1;
				  check2[j]=i+1;
				  break;
			  }
		  }
	  }
	  //print(check1,n);
	 // print(check2,n);
	  for(i=0;i<n;i++)
	  {
		  if(check1[i]==0)
		  {
			  flag=0;
			  break;
		  }
	  }
	  if(flag)
	   printf("YES\n");
	  else
		printf("NO\n");
	}
}