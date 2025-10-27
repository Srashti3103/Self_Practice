//intialization of array 
// pointer arithmetic
#include<stdio.h>
int main()
// {
//      int age = 22;
//      int *ptr = &age;
//      printf("ptr = %u\n", ptr);
//      ptr++;
//      printf("ptr = %u\n", ptr);
//      ptr++;
//      printf("ptr = %u\n", ptr);
//      ptr--;
//      return 0;
// }
// {
//     float price = 100;
//     float *ptr = &price;
//      printf("ptr = %u\n", ptr);
//      ptr++;   
//      printf("ptr = %u\n", ptr);
//      ptr++;
//      printf("ptr = %u\n", ptr);
//      ptr--;
//      return 0;

// }

// {
//     char star = '*';
//     char *ptr = &star;
//      printf("ptr = %u\n", ptr);
//      ptr++;   
//      printf("ptr = %u\n", ptr);
//      ptr++;
//      printf("ptr = %u\n", ptr);
//      ptr--;
//      return 0;
// }


//pointer Arithmeetic  
// 1. We can also subtract one pointer from another
//we can also compare 2 pointers
{
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("%u, %uDifference = %u\n",ptr , _ptr,ptr-_ptr);
    _ptr = &age;
    printf("Comparisom = %u\n",ptr == _ptr);
    return 0;
} 