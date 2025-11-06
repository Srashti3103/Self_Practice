//inverted pyramid
#include<stdio.h>
int main ()
{
    int n = 3;
    //outer loop
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++)//inner loop for space
        {
            printf(" ");
        }
        for(int j=0;j<n-i;j++)//inner loop for left triangle element
        {
            printf("*");
        }
        for(int j=0;j<n-i-1;j++)//inner loop for right triangle element 
        {
            printf("*");
        }
          printf("\n");
        }
       
    }