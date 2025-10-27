//will the address output the same value as value output ?
#include<stdio.h>
void printaddress(int *n);
int main()
{
    int n =4;
    printaddress(&n);
    printf("address of n is : %d\n",&n);
    return 0;
}
//
void printaddress(int *n){
    printf("address of n in function is : %d\n",n);

}