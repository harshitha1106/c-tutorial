#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,root1,root2,real,img,disc;
    printf("enetr a,b,c val:");
    scanf("%lf%lf%lf",&a,&b,&c);
    disc=(b*b)-(4*a*c);
    if(disc==0){
        root1=root2;
        printf("root1=%lf root 2:%lf\n",root1,root2);
    }
    else if(disc>0){
        root1=(-b+sqrt(disc))/(2*a);
        root2=(-b-sqrt(disc))/(2*a);
        printf("root1=%lf root2=%lf \n",root1,root2);
    }
    else{
        real=-b/(2*a);
        img=-b/(2*a);
        printf("root1=%lf+%lf root2=%lf+%lf \n",real,img,real,img);
    }
}