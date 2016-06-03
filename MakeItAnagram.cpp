/*https://www.hackerrank.com/challenges/make-it-anagram*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int check1[26]={0},check2[26]={0},used[26]={0};
	char string1[10000],string2[10000];
	int count=0,i;
/*	for(i=0;i<26;i++)
		printf("%d ",check1[i]);
	printf("\n");

	for(i=0;i<26;i++)
		printf("%d ",check2[i]);
	printf("\n");*/


	scanf("%s",string1);
	scanf("%s",string2);

	for(i=0;i<strlen(string1);i++)
		check1[string1[i]-97]+=1;

	for(i=0;i<strlen(string2);i++)
		check2[string2[i]-97]+=1;

	/*for(i=0;i<26;i++)
		printf("%d ",check1[i]);
	printf("\n");

	for(i=0;i<26;i++)
		printf("%d ",check2[i]);
	printf("\n");*/

	for(i=0;i<strlen(string1);i++)
	{
		if(check2[tolower(string1[i])-97]==0 && used[string1[i]-97]==0)
		{
			count+=check1[string1[i]-97];
			used[string1[i]-97]=1;
		}
        else if((check1[string1[i]-97]-check2[string1[i]-97])>0 && used[string1[i]-97]==0)
		{
			count+=(check1[string1[i]-97]-check2[string1[i]-97]);
			used[string1[i]-97]=1;
		}
	  // printf("%d",tolower(string1[i])-97);
	}
	//printf("\n %d \n",count);
/*	for(i=0;i<26;i++)
		printf("%d ",used[i]);
	printf("\n");*/

    for(i=0;i<strlen(string2);i++)
	{
		if(check1[string2[i]-97]==0 && used[string2[i]-97]==0)
		{
			count+=check2[string2[i]-97];
			used[string2[i]-97]=1;
		}
		else if((check2[string2[i]-97]-check1[string2[i]-97])>0 && used[string2[i]-97]==0)
		{
			count+=(check2[string2[i]-97]-check1[string2[i]-97]);
			used[string2[i]-97]=1;
		}
		//printf("%d",tolower(string2[i])-97);
	}
/*	for(i=0;i<26;i++)
		printf("%d ",used[i]);
	printf("\n");*/

	printf("%d",count);
	return 1;
}
