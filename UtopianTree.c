/*The Utopian Tree goes through 2 cycles of growth every year. Each spring, it doubles in height. Each
summer, its height increases by 1 meter.
Laura plants a Utopian Tree sapling with a height of 1 meter at the onset of spring. How tall will her tree be
after growth cycles?
Input Format
The first line contains an integer, , the number of test cases.
subsequent lines each contain an integer, , denoting the number of cycles for that test case.
Constraints
Output Format
For each test case, print the height of the Utopian Tree after cycles. Each height must be printed on a
new line.
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
  int n,t,i,k,length=1;
  scanf("%d",&t);
  for(k=0;k<t;k++)
  {
    length=1;
	scanf("%d",&n);
    for(i=1;i<=n;i++)
	{
	  if(i%2==0)
		  length++;
	  else
		  length=2*length;
	}
   printf("%d \n",length);
  }
}