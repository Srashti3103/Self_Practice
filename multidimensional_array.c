//MULTIDIMENSIONAL ARRAY , 2D - ARRAY
// int arr[][]= {(1,2),(3,4)} ---->>> declaration
//arr[0][0] ------>>>> Access
//arr[0][1] ------>>>> Access
//arr[1][0] ------>>>> Access
//arr[1][1] ------>>>> Access
//visualization through matrix
#include<stdio.h>
int main()
{
    int marks[2][3];
    marks[0][0] = 90;
    marks[0][1] = 89;
    marks[0][2] = 78;
     
    marks[1][0] = 90;
    marks[1][1] = 89;
    marks[1][2] = 78;

    printf("%d",marks[0][1]);
    return 0;
}