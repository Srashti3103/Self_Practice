//Array is a collection of similar data types stored at contiguous memory locations.
#include<stdio.h>
int main()
{
    int marks[3];
    printf("Enter phy  :");
    scanf("%d",&marks[0]);

    printf("Enter chem  :");
    scanf("%d",&marks[1]);

    printf("Enter math  :");
    scanf("%d",&marks[2]);

    printf("phy = %d,  chem = %d , math = %d", marks[0],marks[1], marks[2]);
    return 0;

}