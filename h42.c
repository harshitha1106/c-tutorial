//array of structure
#include<stdio.h>
struct student 
{
    int rollno;
    char name[100];
    float marks;
};
int main()
{
    struct student s[5];
    for(int i=0;i<5;i++){
        scanf("%d %s %f",&s[i].rollno,&s[i].name,&s[i].marks);
    }
    for(int i=0;i<5;i++){
        printf("%d %s %f",s[i].rollno,s[i].name,s[i].marks);
    }
}
// (*ptr).rollno==ptr->rollno.