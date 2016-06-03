/*https://www.hackerrank.com/challenges/pangrams*/
#include<iostream>
#include<string.h>
using namespace std;

int CheckPan(int a[]);
int main()
{
	char string[1000],ch,index;
	int i,len,a[26]={0};
	int flag;
	gets(string);
	len=strlen(string);
	for(i=0;i<len;i++)
	{
		ch=string[i];
		if(ch==' ')
			continue;
		ch=tolower(ch);
	//	cout<<ch<<endl;
		index=ch-'a';
		a[index]=1;
	}

	flag=CheckPan(a);
	if(flag==1)
		cout<<"pangram";
    else
		cout<<"not pangram";
	return 0;
}


int CheckPan(int a[])
{
	for(int i=0;i<26;i++)
		if(a[i]==0)
			return 0;
	return 1;
}