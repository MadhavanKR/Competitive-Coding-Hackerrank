/*https://www.hackerrank.com/challenges/the-grid-search*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int linearsearch(int a[][1000],int i,int b[][1000],int s);
int gridsearch(int a[][1000],int i,int b[][1000],int s);

int r,c,R,C;
int main()
{
	int i,j,a[1000][1000],b[1000][1000],flag=1,row_b,t,x;
	char string[1001];
	scanf("%d",&t);
	for(x=0;x<t;x++)
	{
     flag=1;
	 scanf("%d %d",&R,&C);
     for(i=0;i<R;i++)
	 {	
      scanf("%s",string);
	  for(j=0;j<C;j++)
		 a[i][j]=string[j]-'0';
	 }
	/*for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}*/
	 scanf("%d %d",&r,&c);
	 for(i=0;i<r;i++)
	 {
      scanf("%s",string);
	  for(j=0;j<c;j++)
		 b[i][j]=string[j]-'0';
	 }
	/*for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",b[i][j]);
		printf("\n");
	}*/

	 for(i=0;i<=R-r;i++)
	 {
	 	flag=gridsearch(a,i,b,0);
		if(flag==1)
		{
			printf("YES\n");
			break;
		}
	 }
        if(flag==0)
	     printf("NO \n");
	}
    return 1;
}
int gridsearch(int a[][1000],int i,int b[][1000],int s)
{
	int flag=1;
    flag=flag*linearsearch(a,i,b,s);
	if(flag==0)
		return 0;
	if(flag==1 && s==r-1)
		return 1;
	else
		return flag*gridsearch(a,i+1,b,s+1);
}

int linearsearch(int a[][1000],int i,int b[][1000],int s)
{
  int m,n,j=0,k;
  n=C;
  m=c;
  for(j=0;j<n-m;j++)
  {
	  k=0;
	  while(k<m && a[i][j+k]==b[s][k])
		  k++;
	  if(k==m)
		  return 1;
  }
  return 0;
}
