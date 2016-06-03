/*https://www.hackerrank.com/challenges/cavity-map*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int i,j,x,n;
    int a[100][100];
    char string[101];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",string);
		for(j=0;j<n;j++)
		{
			a[i][j]=string[j]-'0';
		}
	}
	for(i=1;i<n-1;i++)
	{
		for(j=1;j<n-1;j++)
		{
			if(a[i][j-1]<a[i][j] && a[i][j+1]<a[i][j] && a[i+1][j]<a[i][j] &&  a[i-1][j]<a[i][j])
				a[i][j]='X';	     
		}
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==88.000)		  
             printf("%c",a[i][j]);
            
			else
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
    return 0;
}