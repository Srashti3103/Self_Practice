//write a program to calculate the sum , product and average of 2 numbers . print that average in that int the main function 
#include<stdio.h>
void calculate(int a, int b, int *sum, int *product , int *avg);
int main()
{
    int a=3 , b=5;
    int sum , product , avg;
    calculate(a,b,&sum,&product,&avg);
    printf("sum = %d, prod=%d, avg= %d\n", sum , product , avg);
    return 0;
}
void calculate(int a, int b, int *sum , int *product , int *avg){
    *sum = a+b;
    *product =a*b;
    *avg = (*sum)/2;
}
