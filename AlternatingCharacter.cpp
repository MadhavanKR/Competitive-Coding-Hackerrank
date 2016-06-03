/*https://www.hackerrank.com/challenges/alternating-characters*/
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int t,i,k,deletions;
	char string[100000];
	cin>>t;
//	cout<<"reading t "<<t;
	for(k=0;k<t;k++)
	{
		cin>>string;
		
		deletions=0;
		for(i=0;i<strlen(string)-1;i++)
		{
			if(string[i]==string[i+1])
				deletions++;
		}
	  cout<<deletions<<endl;
	}
	return 0;
}
