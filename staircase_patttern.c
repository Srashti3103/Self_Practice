//staircase pattern 
#include<stdio.h>
int main()
{
    //initialization
    int n;
    //input size of array
    printf("Enter the size of pattern");
    scanf("%d",&n);
    //loop for rows
    for(int i=1;i<=n;i++){
         int k = ( i % 2 != 0) ? i + 1 : i;
         //loop for coloumn
        for (int j=1;j<=k;j++){
            printf("* ");
        }
        printf("\n");
    }
}
