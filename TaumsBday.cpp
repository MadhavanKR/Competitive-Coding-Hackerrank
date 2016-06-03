/*https://www.hackerrank.com/challenges/taum-and-bday*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	long double B,W,x,y,z,cost=0,t,i;
	scanf("%Lf",&t);
	for(i=0;i<t;i++)
	{
		cost=0;
		scanf("%Lf %Lf",&B,&W);
		scanf("%Lf %Lf %Lf",&x,&y,&z);
		if(x==y && y==z)
			cost=(B+W)*x;
		else if(x>=(y+z))
			cost=B*(y+z)+(W*y);
		else if(y>=(x+z))
			cost=W*(x+z)+(B*x);
		else
			cost=B*x+W*y;
		printf("%.0Lf \n",cost);
	}
    return 0;
}
	