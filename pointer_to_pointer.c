//pointer to pointer
//A variable that store the memory address of another pointer
// syntax of pointer to pointer int **pptr,**char **pptr, float **pptr
#include<stdio.h>
int main ()
{
    float price =100.00;
    float  *ptr =&price;
    float **pptr = &ptr;
    printf("%2f\n",**pptr);
    return 0;
 }
    