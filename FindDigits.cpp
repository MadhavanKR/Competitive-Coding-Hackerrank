/*Given an integer,N , traverse its digits ( , ,..., ) and determine how many digits evenly divide (i.e.:
count the number of times divided by each digit has a remainder of ). Print the number of evenly
divisible digits.
Note: Each digit is considered to be unique, so each occurrence of the same evenly divisible digit should be
counted (i.e.: for , the answer is ).
Input Format
The first line is an integer, , indicating the number of test cases.
The subsequent lines each contain an integer, .
Constraints
Output Format
For every test case, count and print (on a new line) the number of digits in that are able to evenly divide
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
  int* p;
  int i=0,n,t,count,m,j,digits=0,k;
  
  scanf("%d",&t);
  for(j=0;j<t;j++)
  {
	  i=0;
	  count=0;
	  digits=0;
	  scanf("%d",&n);
	  m=n;
	  while(m!=0)
	  {
       m=m/10;
	   digits++;
	  }
	  m=n;
	  p=(int*)malloc(sizeof(int)*digits);
	  while(m!=0)
	  {
		  p[i++]=m%10;
		  m=m/10;
	  }
	  for(k=0;k<i;k++)
	  {
		  if((p[k]!=0)&&n%p[k]==0)
			  count++;
	  }
	  printf("%d\n",count);
  }
}
		  