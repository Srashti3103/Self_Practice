//factorial of n using recursion
#include<stdio.h>
int fact(int n);
int main()
{
    printf("Factorial of n : %d",fact(4));
    return 0;
}
int fact(int n)
{
    if(n==0){
        return 1;
    }
    int factNm1 = fact(n-1);
    int factN =factNm1 * n;
    return factN;
}
// Anything that can be done with iteration can be done with recursion and vice-versa
// Recursion can something give the most simple solution 
// base case is the condition  which stops recursion [base case : if(n==0){return 1;}]
// iteration has infinite loop & recursion has stack overflow