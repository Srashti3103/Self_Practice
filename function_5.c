//argument parameter and returntype function 
#include<stdio.h>
int sum(int a,int b);
void printtable(int n);
int main ()
{
    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);
    printtable(n);//argument parameter
    int a,b;
    printf("Enter the value of first  number :");
    scanf("%d",&a);
    printf("Enter the value of second number :");
    scanf("%d",&b);
   int s= sum(a,b);
    printf("sum is :%d",s);
    return 0;
}
int sum(int x,int y){
    return x+y;
}
void printtable(int n){//parameter/ formal parameter
    for(int i=1; i<10; i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
}