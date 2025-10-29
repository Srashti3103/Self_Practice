//inverted triangle right half pyramid
#include<stdio.h>
int main()
{
    int n=4;
    //outer loop for line
    for(int i=0; i<n; i++){
        //inner loop for elment 
        for(int j=0; j<n-i;j++){
            printf("*");
        }
        printf("\n");
    }
}