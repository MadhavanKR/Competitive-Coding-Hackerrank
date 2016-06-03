/*https://www.hackerrank.com/challenges/anagram*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int min(int i,int j);
int main()
{
	char string[10000],s1[5000],s2[5000];
	int t,n,m,check1[26]={0},check2[26]={0},count=0,i,used[26]={0},k;
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
	 count=0;
     for(i=0;i<26;i++)
	 {
		check1[i]=0;
	 }
     for(i=0;i<26;i++)
	 {
 		check2[i]=0;
	 }
     for(i=0;i<26;i++)
	 {
		used[i]=0;
	 }
    
	 //gets(string);
	 scanf("%s",string);
	 n=strlen(string);
	 m=n/2;
	 strncpy(s1,string,m);
	 s1[m]='\0';
	 strncpy(s2,string+m,n-m);
     s2[n-m]='\0';
	 /*puts(string);
	 puts(s1);
     puts(s2);*/
	 n=strlen(s1);
	 m=strlen(s2);
     if(m!=n)
     {
        printf("-1\n");
        continue;
     }
     for(i=0;i<n;i++)
	 {
		check1[s1[i]-'a']+=1;
	 }
     for(i=0;i<m;i++)
	 {
 		check2[s2[i]-'a']+=1;
	 }
    /* for(i=0;i<26;i++)
 		printf("%d ",check1[i]);
 	 printf("\n");
	 for(i=0;i<26;i++)
		printf("%d ",check2[i]);
	 printf("\n");*/
	 for(i=0;i<n;i++)
	 {
		/*for(t=0;t<26;t++)
		 printf("%d ",used[t]);
	    printf("\n");*/
		if(used[s1[i]-'a']==0)
		{
			count+=min(check1[s1[i]-'a'],check2[s1[i]-'a']);
			used[s1[i]-'a']=1;
		}
	 }
	 printf("%d\n",n-count);
	 
	}
	return 1;
}

int min(int i,int j)
{
	if(i==j)
		return i;
	if(i>j)
		return j;
	else
		return i;
}