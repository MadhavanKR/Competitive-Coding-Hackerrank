/*QUESTION*/
/*Sunny and Johnny together have MM dollars they want to spend on ice cream. The parlor offers NN flavors, and they want to choose two flavors so that they end up spending the whole amount.

You are given the cost of these flavors. The cost of the iithth flavor is denoted by ccii. You have to display the indices of the two flavors whose sum is MM.

Input Format

The first line of the input contains TT; TT test cases follow. 
Each test case follows the format detailed below: The first line contains MM. The second line contains NN. The third line contains NN space-separated integers denoting the price of each flavor. Here, the iithth integer denotes ccii.

Output Format

Output two integers, each of which is a valid index of a flavor. The lower index must be printed first. Indices are indexed from 11 to NN.

Constraints

1=T=501=T=50 
2=M=100002=M=10000 
2=N=100002=N=10000 
1=c1=cii =10000,where i?[1,N]=10000,where i?[1,N] 
The prices of any two items may be the same and each test case has a unique solution.*/

#include<stdio.h>
#include<stdlib.h>

int linearsearch(int a[],int q,int p,int n);

int main()
{
	int i,j,n,m,p,q,t,k;
	int *a,*b;
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
	 scanf("%d %d",&m,&n);
	 a=(int*)malloc(sizeof(int)*n);
	 b=(int*)malloc(sizeof(int)*n);
	 for(i=-0;i<n;i++)
	 {
		scanf("%d",&a[i]);
		b[i]=a[i];
	 }
	 
	 for(i=0;i<n;i++) //each iteration select the current array element to be the selected flavour
	 {
          q=m-a[i]; //now we have to try and select a flavour whose cost is same as what's left with us after buying first flavor
		  j=linearsearch(b,q,i,n);//linear search for that element in the array excluding the selected flavour i.e index i
		  if(j>0)                  //if a flavor is found then returned value is greater than 0
		  {
		   printf("%d %d\n",i+1,j+1); // print the ansewer and skip all further iterations
		   goto next; 
		  }
	  
	 }
next: ;
	}
	 return 0;
}


int linearsearch(int a[],int key,int p,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(i==p)
		  continue;
		else if(a[i]==key)
			return i;
	}
	return -1;
}