/*https://www.hackerrank.com/challenges/service-lane*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int t; 
    scanf("%d %d",&n,&t);
    int width[n];
    for(int width_i = 0; width_i < n; width_i++){
       scanf("%d",&width[width_i]);
    }
    for(int a0 = 0; a0 < t; a0++){
        int a,min,i; 
        int b; 
        scanf("%d %d",&a,&b);
        min=width[a];
        for(i=a+1;i<=b;i++)
            if(width[i]<min)
               min=width[i];
        printf("%d\n",min);
    }
    return 0;
}
