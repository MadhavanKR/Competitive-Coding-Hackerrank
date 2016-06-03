/*https://www.hackerrank.com/challenges/two-strings*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char str1[100000],str2[100000];
	int check1[26],check2[26],i,n,m,t,k,count=0;;
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
	 scanf("%s",str1);
	 scanf("%s",str2);
	 n=strlen(str1);
	 m=strlen(str2);
     for(i=0;i<26;i++)
	 {
	   check1[i]=2;
       check2[i]=0;
	 }
	 for(i=0;i<n;i++)
	 {
        if(check1[str1[i]-'a']==2)
		{
			check1[str1[i]-'a']=1;
			count++;
		}
		if(count==26)
			break;

	 }
	 count=0;
     for(i=0;i<m;i++)
	 {
 		if(check2[str2[i]-'a']==0)
		{
			check2[str2[i]-'a']=1;
			count++;
		}
		if(count==26)
			break;

	 }

	 for(i=0;i<26;i++)
	 {
		if(check1[i]==check2[i])
		{
			printf("YES \n");
			break;
		}
	 } 
	 if(i==26)
	 {
	  printf("NO \n");
	 }
	}
    	 return 1;
}