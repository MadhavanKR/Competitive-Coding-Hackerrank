/*Watson gives two integers ( and ) to Sherlock and asks if he can count the number of square integers between  and  (both inclusive).

Note: A square integer is an integer which is the square of any integer. For example, 1, 4, 9, and 16 are some of the square integers as they are squares of 1, 2, 3, and 4, respectively.

Input Format 
The first line contains , the number of test cases.  test cases follow, each in a new line. 
Each test case contains two space-separated integers denoting  and .

Output Format 
For each test case, print the required answer in a new line
*/

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
	
	int count=0,t,a,b,j,i,value1,value2;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
         count=0;        
		 scanf("%d %d",&a,&b);
		 for(i=a;i<=b;i++)
		 {
			 if(sqrt(i)==floor(sqrt(i)))
			 {
				 value1=sqrt(i);
				 break;
			 }
             value1=0;
		 }
		 for(i=b;i>=a;i--)
		 {
			 if(sqrt(i)==floor(sqrt(i)))
			 {
				 value2=sqrt(i);
				 break;
			 }
             value2=0;
		 }
        if(value1&&value2)
		 count=value2-value1+1;
		 printf("%d \n",count);
	}
}

