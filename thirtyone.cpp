//program to print stair case pattern.
#include <stdio.h>
int main()
{
    int n = 6;? // for loop for rows
    for (int i = 1; i <= n; i++) {

        // conditional operator
        int k = (i % 2 != 0) ? i + 1 : i;

        // according to value of k carry
        // out further operation
        for (int j = 0; j < k; j++)
           printf("*");
           printf("\n");
    }
}
