#include<stdio.h>
void calcprice(float value);
int main()
{
    float value=200;
    calcprice(value);
}
void calcprice(float value){
    value=value+(0.18*value);//18%gst
    printf("final price is %f",value);
}