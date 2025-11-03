//ttriangle pattern of alphabet
#include<stdio.h>
int main()
{
    int n;
    char ch ='A';
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            printf("%c ",ch);
            ch =ch + 1;
        }
        printf("\n");
    }
}