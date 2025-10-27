//area of square , circle ,rectangle
#include<stdio.h>
#include<math.h>
float pi =3.14;
float areasquare(float side);
float areacircle(float radius);
float arearectangle(float a, float b);
int main ()
{
    float a=9;
    float b=4;
    float radius =4;
    float side =2;
    printf("area of square : %f\n",areasquare(side));
    printf("area of circle : %f\n",areacircle(radius));
    printf("area of rectangle : %f\n",arearectangle(a,b));

}
float areasquare(float side)
{
    return side*side;
}
float areacircle(float radius)
{
    return pi*radius*radius;
}
float arearectangle(float length,float width)
{
    return length * width;
}