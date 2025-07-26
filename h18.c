#include<stdio.h>
float calcpercentage(float s,float m,float sa);
int main()
{
   float s,m,sa;
   printf("enter marks of s,m,sa");
   scanf("%f%f%f",&s,&m,&sa);
   printf("percentage is %f",calcpercentage(s,m,sa));
}
float calcpercentage(float s,float m,float sa){
    return((s+m+sa)/3)*100;
}