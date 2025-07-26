#include<stdio.h>
float squarearea(float side);
float rectarea(float l,float b);
float circlearea(float r);
int main()
{   
    float side,l,b,r;
    printf("enter side, l, b, r values");
    scanf("%f%f%f%f",&side,&l,&b,&r);
    printf("area of square is %f\n",squarearea(side));
    printf("area of rectangle is %f\n",rectarea(l,b));
    printf("area of circle is %f\n",circlearea(r));
    
}
float squarearea(float side){
    return side*side;
}
float rectarea(float l,float b){
    return l*b;
}
float circlearea(float r){
    return 3.14*r*r;
}