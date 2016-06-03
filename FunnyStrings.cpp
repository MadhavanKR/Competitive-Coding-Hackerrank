/*https://www.hackerrank.com/challenges/funny-string*/
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int t,i=0,flag,j;
	char string[10000],reverse[10000];
	int length,val1,val2;

	cin>>t;

	for(int k=0;k<t;k++)
	{
		cin>>string;
		length=strlen(string);
		i=length-1;
		j=0;
		while(i>=0)
			reverse[j++]=string[i--];
		reverse[j]='\0';
        /*cout<<"string : "<<string<<endl;
		cout<<"reverse : "<<reverse<<endl;*/

		flag=1;
		for(i=0;i<length-1;i++)
		{
			val1=abs(string[i]-string[i+1]);
			val2=abs(reverse[i]-reverse[i+1]);
			if(val1!=val2)
			{   
				flag=0;
				cout<<"not funny"<<endl;
				break;
			}
		}
		if(flag==1)
			 cout<<"funny"<<endl;
	}
   return 0;
}



		