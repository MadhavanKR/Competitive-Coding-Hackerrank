/*A Discrete Mathematics professor has a class of students. Frustrated with their lack of discipline, he
decides to cancel class if fewer than students are present when class starts.
Given the arrival time of each student, determine if the class is canceled.
Input Format
The first line of input contains , the number of test cases.
Each test case consists of two lines. The first line has two space-separated integers, (students in the class)
and (the cancelation threshold).
The second line contains space-separated integers ( ) describing the arrival times for each
student.
Note: Non-positive arrival times ( ) indicate the student arrived early or on time; positive arrival
times ( ) indicate the student arrived minutes late.
Output Format
For each test case, print the word YES if the class is canceled or NO if it is not.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t,k,n,before=0,after=0,i,j,a[1000];
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
         scanf("%d %d",&n,&k);
        after = before = 0;
        for(i=0;i<n;i++)
         scanf("%d",&a[i]);
     for(i=0;i<n;i++)
      {
         if(a[i]>0)
             after++;
         else
             before++;
     }
        if(before<k)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
