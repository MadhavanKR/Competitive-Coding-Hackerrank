/*https://www.hackerrank.com/challenges/chocolate-feast*/
#include<stdio.h>
#include<stdlib.h>

void main()
{
	int t,n,c,m,count,i,wraps;
	scanf("%d",&t);
    for(i=0;i<t;i++)
	{
		count=0;
		scanf("%d %d %d",&n,&c,&m);
		count+=(n/c);
		wraps=count;
		/*if(count%m==0)
		 count+=(count/m);*/
		else
		{
			count+=(wraps/m);
			wraps = wraps%m + wraps/m;
			while(wraps!=0)
			{
				if(wraps<m)
					break;
				else
				{
				 count+=(wraps/m);
		         wraps = wraps%m + wraps/m;
				}
			}
		}


		printf("%d\n",count);
	}
}


