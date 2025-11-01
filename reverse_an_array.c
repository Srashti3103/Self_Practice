//REVERSE AN ARRAY
#include<stdio.h>
int reversearray(int arr[], int n);
void printarray(int arr[], int n);
int main()
{
    int arr[] = {1,2,3,4,5,6};
    reversearray(arr,6);
    printarray(arr,6);
    return 0;
}
void printarray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("\n");
}
int reversearray(int arr[], int n)
{
    int temp;
    for(int i=0; i<n/2; i++)
    {
        int firstvalue = arr[i];
        int secondvalue = arr[n-i-1];
        arr[i]= secondvalue;
        arr[n-i-1] = firstvalue;
        
    }
}