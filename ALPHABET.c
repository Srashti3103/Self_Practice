//print 'A' alphabet 
#include<stdio.h>
int main()
{
    int n;
    printf("Enter th evalue of n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=n/2;j++){
            if((((j==0 )||(j==n/2))&&( i!=0))
            ||( (i==0 )&&( j!=0) &&( j!=n/2))
            ||(i==n/2))
            {
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

