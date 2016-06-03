/*https://www.hackerrank.com/challenges/library-fine*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int date1[10],date2[10],i,fine;
    int days,months,years;
    for(i=0;i<3;i++)
        scanf("%d",&date1[i]);
    for(i=0;i<3;i++)
        scanf("%d",&date2[i]);
    years = date1[2]-date2[2];
    months = date1[1]-date2[1];
    days = date1[0]-date2[0];
    if(years>0)
       {
        printf("%d",10000);
        exit(0);
    }
    else if(years<0)
        {
        printf("%d",0);
        exit(0);
    }
    if(months>0)
        fine = months*500;
    else if(months<0)
        fine = 0;
    else if(days>0)
        fine = days*15;
    else
        fine = 0;
    printf("%d",fine);   
    return 0;
}
