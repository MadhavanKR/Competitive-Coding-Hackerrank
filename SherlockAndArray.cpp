/*https://www.hackerrank.com/challenges/sherlock-and-array*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *a,n,i,rsum=0,lsum=0,j,k,t,r,temp;
	scanf("%d",&t);
	for(r=0;r<t;r++)
	{
	 scanf("%d",&n);
	 a=(int*)malloc(n*sizeof(int));
	 rsum=lsum=0;
	 for(i=0;i<n;i++)
	 {
		 scanf("%d",&a[i]);
		 rsum+=a[i];
	 }
     rsum-=a[0];
     temp=rsum;
	 printf("lsum=%d rsum=%d \n",lsum,rsum);   
 	 for(i=0;i<n;i++)
	 {
        if(i==0)
        {
         lsum=0;
        }
       else if(i==n-1)
        {
         rsum=0;
         lsum+=a[i-1];
        }
	   else
	   {
		  rsum-=a[i];
          lsum+=a[i-1];
	   }
		 if(rsum==lsum)
		{
			printf("YES \n");
			goto next;
		}
		
        printf("lsum=%d rsum=%d \n",lsum,rsum);   
	 }
	 printf("NO \n");
     next: ;
	}
 return 0;
}