#include<stdio.h>
int main()
{
   float price[3];
   printf("enter 3 prices: ");
   scanf("\n%f\n%f\n%f",&price[0],&price[1],&price[2]);
   printf("total price 1: %f",price[0]+(0.18*price[0]));
   printf("total price 2: %f",price[0]+(0.18*price[1]));
   printf("total price 1: %f",price[0]+(0.18*price[2]));
}