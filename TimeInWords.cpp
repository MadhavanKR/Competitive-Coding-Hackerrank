/*https://www.hackerrank.com/challenges/the-time-in-words*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
using namespace std;
class number
{
public: char string[13];
		void store(char x[])
		{
			strcpy(string,x);
		}
};

int main()
{
	int h,m,n;
	number numbers[30];
	numbers[1].store("one");
	numbers[2].store("two");
    numbers[3].store("three");
	numbers[4].store("four");
	numbers[5].store("five");
	numbers[6].store("six");
	numbers[7].store("seven");
	numbers[8].store("eight");
	numbers[9].store("nine");
	numbers[10].store("ten");
	numbers[11].store("eleven");
	numbers[12].store("twelve");
	numbers[13].store("thirteen");
	numbers[14].store("fourteen");
	numbers[16].store("sixteen");
	numbers[17].store("seventeen");
	numbers[18].store("eighteen");
	numbers[19].store("nineteen");
	numbers[20].store("twenty");
	numbers[21].store("twenty one");
	numbers[22].store("twenty two");
	numbers[23].store("twenty three");
	numbers[24].store("twenty four");
	numbers[25].store("twenty five");
	numbers[26].store("twenty six");
	numbers[27].store("twenty seven");
	numbers[28].store("twenty eight");
	numbers[29].store("twenty nine");

	cin>>h;
	cin>>m;
	if(m==0)
		n=0;
	else if(m==15)
		n=1;
	else if(m<30)
		n=2;
	else if(m==30)
		n=3;
	else if(m==45)
		n=4;
	else
		n=5;
	switch(n)
	{
	case 0: printf("%s o' clock",numbers[h].string);
			break;
	case 1: printf("quarter past %s",numbers[h].string);
		    break;
	case 3: printf("half past %s",numbers[h].string);
		    break;
	case 2: printf("%s minutes past %s",numbers[m].string,numbers[h].string);
		    break;
	case 4: printf("quarter to %s",numbers[h+1].string);
		    break;
	case 5: printf("%s minutes to %s",numbers[60-m].string,numbers[h+1].string);
			break;
	}
    return 0;
}
