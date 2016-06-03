/*https://www.hackerrank.com/challenges/palindrome-index*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n,i,t,l,j,res;
	char s[10005];
	scanf("%d",&t);
	for(l=0;l<t;l++)
	{
		res=-1;
		scanf("%s",s);
		n=strlen(s);
		printf("strlen = %d\n",n);
		for(i=0;i<n-2;i++)
		{
			j=n-1-i;
			if(s[i]!=s[j])
			{
			 //printf("mismatch occoured   @ i = %d and j= %d\n",i,j);
			 if(s[i]==s[j-1] && s[i]==s[j-2])
				  res=j;
			  else
				  res=i;
			  break;
			}
		}
		printf("%d\n",res);
	}
	return 0;
}