#include<stdio.h>
#include<stdlib.h>
int main()
{
    int compchoice,userchoice;
    while(1){
        printf("\nyour choice: 0 for rock, 1 for paper, 2 for scissors, 3 for exit:");
        scanf("%d",&userchoice);
        compchoice= rand()%3;
        printf("comp choice is :%d\n",compchoice);
        if(compchoice==0 && userchoice==2 || compchoice==1 && userchoice==0 || compchoice==2 && userchoice==1){
        printf("computer wins");
        printf("\ndefeat");
        }
        else if(compchoice==0 && userchoice==1 || compchoice==1 && userchoice==2 || compchoice==2 && userchoice==0){
        printf("you won");
        }
        else if(compchoice==userchoice){
            printf("tie");
        }
        if(userchoice>3){
            printf("\ninvalid data \n choose either 0 or 1 or 2 only!");
        }
        }
}