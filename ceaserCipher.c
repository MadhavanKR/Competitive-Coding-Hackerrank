/*https://www.hackerrank.com/challenges/caesar-cipher-1*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char string[100];
    int n,k,i,j;
    scanf("%d",&n);
    scanf("%s",string);
    scanf("%d",&k);
    for(i=0;i<n;i++)
     {
        if(isalpha(string[i]))
         {
          j = string[i];
          if( j>=65 && j<=90)
          {
           j=j+k;
           while(j>90)
               j=j-26;
          }
          else if(j>=97 && j<=122)
          {
              j=j+k;
              while(j>122)
                  j=j-26;
          }  
          string[i]=j;  
        }
        
    }
           printf("%s",string);
    return 0;
}
