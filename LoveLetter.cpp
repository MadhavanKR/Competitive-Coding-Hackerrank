/*https://www.hackerrank.com/challenges/the-love-letter-mystery*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
 int i,n,k,j,t,count=0,flag;
 char string[10001];
 scanf("%d",&t);
 //printf("%s is of length %d\n",string,n);
 for(j=0;j<t;j++)
 {
   scanf("%s",string);
   n=strlen(string);
   count=0;
   for(i=0;i<n;i++)
  {
   flag=string[i]-string[n-1-i];
  // printf("flag = %d \n",flag);
   if(!flag)
	   continue;
   else if(flag<0)
   {
	   flag=flag*-1;
	   //printf("am i here ?");
	   for(k=0;k<flag;k++)
	   {
		   string[n-i-1]-=1;
		   count++;
	   }
//	   printf("%s \n",string);
   }
   else
   {
	   //
	   for(k=0;k<flag;k++)
	   {
		   string[i]-=1;
		   count++;
	   }
//	   printf("%s \n",string);
   }
  }
// printf("%s",string);
  printf("%d \n",count);
 }
 return 0;
}
