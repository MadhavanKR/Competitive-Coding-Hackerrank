/*https://www.hackerrank.com/challenges/bfsshortreach*/
#include<stdio.h>
#include<stdlib.h>

int **a,*visited,n,*cost;

void print(int a[])
{
	for(int i=1;i<n+1;i++)
		printf("%d ",a[i]);
	printf("\n");
}
int deque(int q[],int *f,int *r)
{
  int t=q[*f];
  if(*f==*r)
  {
	  *f=0;
	  *r=-1;
  }
  else 
	  *f=*f+1;
  return t;
}

void enque(int q[],int *r,int item)
{
	*r=*r+1;
	q[*r]=item;
}

void bfs(int v)
{
	visited[v]=1;
	int f=0,r=-1,*q;
	q=(int*)malloc(sizeof(int)*n);
	enque(q,&r,v);
	while(f<=r)
	{
		v=deque(q,&f,&r);
		for(int i=1;i<=n;i++)
		{
		  if(visited[i]==0 && a[i][v]==1)
		  {
			  cost[i]=6+cost[v];
			  visited[i]=1;
			  enque(q,&r,i);
		  }
		}
	}
/*	printf("---visited matrix---\n");
	print(visited);
	printf("---cost matrix---\n");
	print(cost);*/
}

int main()
{
	int t,i,m,l,x,y,s,j;
	scanf("%d",&t);
	for(l=0;l<t;l++)
	{
		scanf("%d %d",&n,&m);
		a=(int**)malloc(sizeof(int*)*n);
		for(i=1;i<n+1;i++)
			a[i]=(int*)malloc(sizeof(int)*n);
		visited=(int*)malloc(sizeof(int)*n);
		cost=(int*)malloc(sizeof(int)*n);
		for(i=1;i<n+1;i++)
		{
			visited[i]=0;
			cost[i]=0;
		}
		for(i=1;i<n+1;i++)
			for(j=1;j<n+1;j++)
				a[i][j]=0;
		for(i=1;i<m+1;i++)
		{
			scanf("%d %d",&x,&y);
			a[x][y]=a[y][x]=1;
		}
		scanf("%d",&s);
		bfs(s);
		for(i=1;i<n+1;i++)
		{
			if(i==s)
				continue;
			if(visited[i]==0)
				printf("-1 ");
			else
				printf("%d ",cost[i]);
		}
		printf("\n");
	}
	return 0;
}