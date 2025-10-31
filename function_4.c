//print namaste if user is indian and print bonjour if  user is french
#include<stdio.h>
void indian();
void french();
int main()
{
    char ch;
    printf("Enter i for indian and f for french :\n");
    scanf("%c",&ch);
    if(ch == 'i'){
        indian();
    }else if (ch == 'f'){
        french();
    }
    return 0;
}
void indian(){
    printf("NAMASTE\n");
    french();//indirectly called function
}
void french(){
    printf("BONJOUR\n");
}