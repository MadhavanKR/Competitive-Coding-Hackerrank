/*https://www.hackerrank.com/challenges/kaprekar-numbers*/
#include<stdio.h>
#include<stdlib.h>

int countdigits(int n);
int getdivisor(int count);

int main()
{
	int p,q,count,divisor,numbercount=0,yes;
	long int l,r,i,j;
	scanf("%d %d",&p,&q);
	for(i=p;i<=q;i++)
	{
	  j=i;
	  yes=0;
	  count=countdigits(j*j);
      divisor=getdivisor(count/2);
	  r=(j*j)%divisor;
	  l=(j*j)/divisor;
	 // printf("r=%d l=%d \n",r,l);
	  if(j<10 && (l+r)==j && (countdigits(l)-countdigits(r)<=1 || countdigits(r)-countdigits(l)<=1))
	  {
		  printf("%d ",i);
		  numbercount++;
		  yes=1;

	  }
     else if((l+r)==j && r!=0 && (countdigits(l)-countdigits(r)<=1 || countdigits(r)-countdigits(l)<=1))
	 {
		 printf("%d ",i);
		 numbercount++;      
		 yes=1;
	 }
	 if(yes==0 && count%2!=0)
	 {
		 divisor=getdivisor((count/2)+1);
		  r=(j*j)%divisor;
		  l=(j*j)/divisor;
	  	//  printf("r=%d l=%d \n",r,l);
		  if(j<10 && (l+r)==j && (countdigits(l)-countdigits(r)<=1 || countdigits(r)-countdigits(l)<=1))
		  {
			  printf("%d ",i);
			  numbercount++;
			  yes=1;
	
		  }
	     else if((l+r)==j && r!=0 &&(countdigits(l)-countdigits(r)<=1 || countdigits(r)-countdigits(l)<=1))
		 {
			 printf("%d ",i);
			 numbercount++;      
			 yes=1;
		 }
	 }
	}
	if(numbercount==0)
		printf("INVALID RANGE\n");
    return 0;
}

int countdigits(int n)
{
	int count=0;
	while(n!=0)
	{
		n=n/10;
		count++;
	}
//	printf("count =%d \n",count);
	return count;
}

int getdivisor(int count)
{
	int i,fact=1;
    for(i=0;i<count;i++)
		fact=fact*10;
//	printf("divisor =%d \n",fact);
	return fact;
}
