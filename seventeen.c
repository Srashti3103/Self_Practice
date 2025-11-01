//right half pyramid
#include<stdio.h>
int main()
{
    int n=4;
    //outer loopfor line
    for(int i=0; i<n; i++){
        //inner loop for element
        for(int j=0; j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }
}