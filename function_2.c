//2 function calling 
#include<stdio.h>
void printhello();
void printbye();
int main()
{
    printhello();
    printbye();
    printbye();
    printhello();
    return 0;
}
void printhello(){
    printf("hello\n");
}
void printbye(){
    printf("bye\n");
}
