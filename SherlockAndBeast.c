/*Sherlock Holmes suspects his archenemy, Professor Moriarty, is once again plotting something diabolical.
Sherlock's companion, Dr. Watson, suggests Moriarty may be responsible for MI6's recent issues with their
supercomputer, The Beast.
Shortly after resolving to investigate, Sherlock receives a note from Moriarty boasting about infecting The
Beast with a virus; however, he also gives him a clue—a number, . Sherlock determines the key to
removing the virus is to find the largest Decent Number having digits.
A Decent Number has the following properties:
1. Its digits can only be 3's and/or 5's.
2. The number of 3's it contains is divisible by 5.
3. The number of 5's it contains is divisible by 3.
4. If there are more than one such number, we pick the largest one.
Moriarty's virus shows a clock counting down to The Beast's destruction, and time is running out fast. Your
task is to help Sherlock find the key before The Beast is destroyed!
Constraints
Input Format
The first line is an integer, , denoting the number of test cases.
The subsequent lines each contain an integer, , detailing the number of digits in the number.
Output Format
Print the largest Decent Number having digits; if no such number exists, tell Sherlock by printing -1.*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,t,l,k,p;
	scanf("%d",&t);
	for(l=0;l<t;l++)
	{
		scanf("%d",&n);
		if(n<3)
		{
			printf("-1\n");
			goto end;
		}
		if(n%3==0)
		{
			for(i=0;i<n;i++)
				printf("5");
			printf("\n");
			goto end;
		}
		k=n/3;
		p=n%3;
		//printf("k=%d \n",k);
		while((p%5)!=0)
		{
			k--;
			p=n-(3*k);
			if(k==0)
				break;
		}
		if(p%5 == 0)
		{
		 for(i=0;i<n-p;i++)
			printf("5");
		 for(i=0;i<p;i++)
			printf("3");
		}
		else
			printf("-1");
		printf("\n");
end:;
	}
	return 0;
}