//write a program to calculate percentage of a student from marks in science , math & ssanskrit
#include<stdio.h>
int calcpercentage(int science , int math , int sanskrit );
int main ()
{
    int science=98;
    int math =95;
    int sanskrit =99;
    printf("percentage : %d", calcpercentage(science,math, sanskrit));
    return 0;
}
int calcpercentage(int science , int math ,int sanskrit){
    return ((science + math + sanskrit)/3);
}