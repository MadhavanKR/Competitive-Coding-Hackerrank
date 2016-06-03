/*https://www.hackerrank.com/challenges/bear-and-workbook*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,k,*a,i,j;
	int page=1,no,max,count=0;
	scanf("%d %d",&n,&k);
	a=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		no=1;
		max=0;
		//printf("chapter %d starting at page number %d \n",i+1,page);
		while(no<=a[i])
		{
			if(no==page)
				count++;
			no++;
			max++;
			if((max%k)==0)
				page=page+1;
		}
		if(max%k!=0)
			page=page+1;
		//printf("chapter %d ending at page number %d \n",i+1,page);
	}
	printf("%d",count);
	return 0;
}