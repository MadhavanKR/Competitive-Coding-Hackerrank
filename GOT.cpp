/*https://www.hackerrank.com/challenges/game-of-thrones*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char string[10001];
	int i,n,a[26]={0};
	int even,odd;
	scanf("%s",string);
	n=strlen(string);
	for(i=0;i<n;i++)
		a[string[i]-'a']++;
	for(i=0;i<26;i++)
	{
		if(a[i]%2==0)
			even++;
		else
			odd++;
	}
	if(odd%2==0)
		printf("NO\n");
	else
		printf("YES\n");
	return 0;
}