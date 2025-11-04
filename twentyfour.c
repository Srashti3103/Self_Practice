//diamond shape pttern
#include<stdio.h>
int main()
{
    int n=4;
    //upper pyramid
    for(int i=0;i<n;i++){
        for(int j=0; j<n-i-1;j++)
        {
            printf(" ");
        }
        for(int j=0; j<i+1; j++)
        {
            printf("*");
        }
        for(int j=1; j<i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //lower inveryed pyramid
    for(int i=0; i<n; i++){
        for(int j=1; j<i+1;j++)
        {
            printf(" ");
        }
        for(int j=0; j<n-i; j++)
        {
            printf("*");
        }
        for(int j=0; j<n-i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}