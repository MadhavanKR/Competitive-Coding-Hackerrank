/*https://www.hackerrank.com/challenges/sherlock-and-valid-string*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int findmin(int a[],int n)
{
	int min=a[0];
	for(int i=1;i<n;i++)
		if(a[i]<min)
			min=a[i];
	return min;
}

void print(int a[],int n)
{
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}

int main()
{
	char s[100005];
	int i,n,count[26]={0},remove=0,min,num=0,*a,one=0;
	scanf("%s",s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(count[s[i]-'a']==0)
			num++;
		count[s[i]-'a']++;
	}
	a=(int*)malloc(sizeof(int)*num);
	//print(count,26);
	//min=findmin(count,n);
	int j=0;
	for(i=0;i<26;i++)
	{
	 if(count[i])
		 a[j++]=count[i];
	 if(count[i]==1)
		 one++;
	}

	print(a,num);
	//printf("num=%d\n",num);
	printf("N=%d\n",n);
	min=findmin(a,num);
	printf("min=%d \n",min);
	printf("one=%d\n",one);
	if(one==1)
	{
		for(i=1;i<num;i++)
		{
			if(a[i]==1)
				continue;
			if(a[i]!=a[i-1])
				goto end;
		}
		printf("YES\n");
		exit(0);
	}
end:for(i=0;i<num;i++)
	{
		if(a[i]!=min)
			remove+=(a[i]-min);
	}
	if(remove>1)
		printf("NO\n");
	else
		printf("YES\n");
	return 0;
}