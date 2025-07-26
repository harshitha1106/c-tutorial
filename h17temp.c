#include<stdio.h>
float converttemp(float celsius);
int main(){
    float far=converttemp(32);
    printf("far is %f",far);
}
float converttemp(float celsius){
    float far=celsius*(9/5)+32;
    return far;
}