/*https://www.hackerrank.com/challenges/manasa-and-stones*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i=1,a,b,t,j,temp;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
	 scanf("%d",&n);
	 scanf("%d",&a);
	 scanf("%d",&b);
     if(a>b)
      {
        temp=a;
         a=b;
         b=temp;
     }
        if(a==b)
        {
            printf("%d",(n-1)*a);
            printf("\n");
            continue;
        }
	 for(i=1;i<=n;i++)
		printf("%d ",((n-i)*a+((i-1)*b)));
     printf("\n");
	}
}