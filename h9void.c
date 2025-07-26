#include<stdio.h>

void namaste();//func call
void bonjour();
int main()
{
    printf("enter f for french & i for indian: ");
    char ch;
    scanf("%c",&ch);
    if(ch=='i'){
        namaste();
    }
    else{
        bonjour();
    }
}//func definition
void namaste(){
    printf("namaste\n");
}
void bonjour(){
    printf("bonjour\n");
}