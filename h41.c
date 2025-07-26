#include<stdio.h>
struct student
{
    int rollno;
    char name[100];
    float marks;
};/*we can declare s1 and all without main also*/
void main()
{
    struct student s1={1,"harshu",88.76};
    struct student s2;
    s2=s1;
    //struct student s3={3,"me",56.76};
   // struct student s4={4,"u",66.76};
    printf("info for s1");
    printf("\n %d %s %f",s1.rollno,s1.name,s1.marks);
    printf("\ninfo for s2");
    printf("\n %d %s %f",s2.rollno,s2.name,s2.marks);
    //printf("\ninfo for s3");
    //printf("\n %d %s %f",s3.rollno,s3.name,s3.marks);
   //printf("\ninfo for s4");
    //printf("\n %d %s %f",s4.rollno,s4.name,s4.marks);
}
