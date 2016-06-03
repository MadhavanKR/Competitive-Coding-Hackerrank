/*https://www.hackerrank.com/challenges/encryption*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int l,r,c,k,i,j;
	char s[82],a[10][10];
	//scanf("%s",s);
	gets(s);
	//printf("read string is %s \n",s);
	l=strlen(s);
	r=floor(sqrt(l));
	c=ceil(sqrt(l));
	if((r*c)<l)
	{
		if(r==c)
			c=c+1;
		else
			r=r+1;
	}
	else if((r*c)>l)
	{
		c=l/r;
		if(r*c<l)
			c=c+1;
	}
//	printf("stelen=%d r=%d c=%d \n",l,r,c);
	k=0;
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		{
			if(k==l)
				a[i][j]='\0';
			else
			 a[i][j]=s[k++];
		}
  /* for(i=0;i<l;i++)
	   printf("%c",s[i]);*/
 
 /* for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(k==l)
				goto end;
			printf("%c",a[i][j]);
			k++;
		}
		printf(" ");
	}*/
    k=0;
    for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			if(k==l)
				goto end;
			if(a[j][i]=='\0')
				continue;
			printf("%c",a[j][i]);
			k++;
		}
		printf(" ");
	}
end:	return 0;
}