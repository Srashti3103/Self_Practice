//WHEN A FUNCTION CALL ITSELF IS CALLED RECURSION
//prinit hello world using recursion 
#include<stdio.h>
void printhelloworld (int count);
int main()
{
    printhelloworld(5);
    return 0;
}
void printhelloworld (int count)
{
    if(count == 0){
        return ;
    }
    printf("HELLO WORLD\n");
    printhelloworld(count - 1);
}