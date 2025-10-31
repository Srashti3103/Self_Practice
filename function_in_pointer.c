//ppointer in function call----------1.call by value  ,  2. call by referencce
// 1. call by value - we pass value of variable as argument ( copy is passed)
// 2. call by reference - We pass address of variable as argument (refernce is passed)
#include<stdio.h>
void square(int n);
void _square(int *n);
int main()
{
    int number =4;
    //this is an argument 
    square(number);//pass by value form copy of number  is passed to n
    printf("value of number is %d\n",number);
    _square(&number);//pass by reference address of number is passed to n
    printf("value of number is %d\n",number);
    return 0;
}

//call by value  (copy is passed, pass the value of argument,pass value of variable as argument )
void square(int n)
{
    n=n*n;
    printf("square of a number is %d\n",n);
}

//call by reference (reference is passed , pass the address of argument , pass address of variable as argument)
void _square(int *n )
{
    *n=(*n) * (*n);
    printf("square of a number is %d\n",*n);
}
