/*https://www.hackerrank.com/challenges/countingsort4*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int *a;
	int i,j,n,count[100]={0},max=0,counter[100]={0};
	char ***str,read[11];
	char dash[]="-";
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));//dynamically allocating array
    str=(char***)malloc(n*sizeof(char));//dynamically allocation char 3d array (rows)
	for(i=0;i<n;i++)
		str[i]=(char**)malloc(10*sizeof(char)); //dynamically allocating (cols)
	for(i=0;i<n;i++)
		for(j=0;j<10;j++)
		str[i][j]=(char*)malloc(10*sizeof(char)); //dynamically defining each coloumn;
     for(i=0;i<n/2;i++) // the loop for the twist : first half of the input is to be filled with "-"
	{
	  scanf("%d",&a[i]);
	  scanf("%s",read);
	  strcpy(str[a[i]][count[a[i]]],dash);
	  count[a[i]]++;
	}

	for(i=n/2;i<n;i++)// loop for the second half of input. 
	{
	  scanf("%d",&a[i]);
	  scanf("%s",str[a[i]][count[a[i]]]);
	  count[a[i]]++;
	}

/*	for(i=0;i<100;i++)
	{
		printf("%d ",count[i]);
	}*/
    
    /*for(i=0;i<100;i++)
	{
		for(j=0;j<=i;j++)
			counter[i]+=count[j];
	}*/
    for(i=0;i<100;i++)
	{
		for(j=0;j<count[i];j++)
		printf("%s ",str[i][j]);
	}

    return 1;
}