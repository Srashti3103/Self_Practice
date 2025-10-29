//write a function to convert celcius to fahrenheit
//fahrenheit =(celcius *9/5)+32
#include<stdio.h>
float converttemp(float celcius);
int main()
{
    float far = converttemp(37);
    printf("far : %f",far);
    return 0;
}
float converttemp(float celcius){
    float far = celcius *(9.0/5.0) +32;
    return far;
}