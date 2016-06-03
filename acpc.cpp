/*https://www.hackerrank.com/challenges/acm-icpc-team*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int m;
class member
{
	private:int a[500],i;
			 char string[500];
	public: 
			void convert()
			{
			  cin>>string;
			  for(i=0;i<m;i++)
				a[i]=string[i]-'0';
			}

			void teamus(member x,member y)
			{
				for(i=0;i<m;i++)
					a[i]=x.a[i]||y.a[i];
			}

			int count()
			{
				int count=0;
				for(i=0;i<m;i++)
					if(a[i]==1)
						count++;
				return count;
			}
};


int main()
{
	member obj[500],result;
	int i,j,count,n,teamcount=0,max;
	max=0;
	cin>>n;
	cin>>m;
	for(i=0;i<n;i++)
		obj[i].convert();
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			result.teamus(obj[i],obj[j]);
			count=result.count();
			if(count>max)
				max=count;
		}
	}
	cout<<max<<endl;
    	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			result.teamus(obj[i],obj[j]);
			count=result.count();
			if(count==max)
				teamcount++;
		}
	}
		cout<<teamcount;
	return 0;
}			
	
