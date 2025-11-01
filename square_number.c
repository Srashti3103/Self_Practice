//calculate square of a number using library function 
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);
    int square = pow(n,2);
    printf("%d",square);
}