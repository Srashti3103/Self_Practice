//triangukar alphabet 
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of element :");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            printf("%c",'A'+i);
        }
        printf("\n");
    }
}