//staircase pattern inverted
//staircase pattern
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        int k=(i%2!=0)?i+1:i;
        for(int g=n;g>k;g--){
            printf(" ");
        }
        for(int j=0;j<k;j++){
            printf("* ");
        } 
        printf("\n");
    }
}