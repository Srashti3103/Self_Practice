//A variablethst stores the memory address of another variable is known as pointer
// '*' means  value at address operator
// '&' means  address of operator
#include<stdio.h>
int main()
{
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;
    printf("%p\n",&age);
    printf("%u\n",&age);
    printf("%u\n",ptr);
    printf("%u\n",&ptr);
    printf("%u\n",age);
    printf("%u\n",*ptr);
    printf("%d\n",*(&age));

    return 0;
}            
//formate specifiier for pointer is %p
//for unsigned int is %u
