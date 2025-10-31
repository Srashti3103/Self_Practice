//inverted left half pyramid
#include<stdio.h>
int main()
{
    int n=4;
    //outer loop for line 
    for(int i=0;i<n; i++){
        //inner loop for space
        for(int j=0;j<i+1;j++){
            printf(" ");
        }
        //inner loop for element 
        for(int j=0;j<n-i;j++){
            printf("*");
        }
         printf("\n");//\n for next line 
    }
   
}