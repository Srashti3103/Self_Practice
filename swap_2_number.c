//swap 2 number , a & b usiind third variable c
#include<stdio.h>
void swap(int a ,int b);
void _swap(int *a, int *b);
int main ()
{
    int x=3, y=5;
    _swap(&x,&y);
    printf("after swapping in ,main x=%d y=%d\n",x,y);
    swap(x,y);
    printf("after swappinig in ,main x=%d y=%d\n",x,y);
    return 0;
}
//call by reference
void _swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
////call by value 
void swap(int a , int b)
{
    int temp;
    temp =a;
    a=b;
    b=temp;
    printf("after swapping in function a=%d b=%d\n",a,b);
}