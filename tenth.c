#include<stdio.h>
int main ()
{  
    int n = 5;
    int sum =0;
    for (int i = n;i<=50;i++)
    {
        sum = sum +i;
    }
    printf("sum of number:%d",sum);
    return 0;
}