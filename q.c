#include<stdio.h>
int main()
{
    int i,score=0,answer;
    printf("1 to enter 2 for rules");
    printf("\nenter i to enter game:");
    scanf("%d",&i);
    if(i==1){
        printf("\nwelcome to the game!!");
        printf("\nto know rules of the game enter 2");
        }if(i==2){
            printf("\n> RULES");
            printf("\n>total number of questions asked are 3");
            printf("\n>total marks alloted for 3 questions is 12marks");
            printf("\n>initially your score is zero");
            printf("\n>you will score 4 mark for each question u have answered correctly");
            printf("\n>your score will be decreased by 1 mark if answered incorectly");
            printf("\n>ur score will be zero for the unattempted questions");
        }
        else{
            printf("\nhope u know the rules before u play the game!");
        }
 printf("\n1. what is 2-2\n");
    printf("1. 2\n2. 1\n3. 0\n4. 4\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 3) {
        printf("Correct!\n\n");
        score=score+4;
        printf("score is %d",score);
    } else {
        printf("Wrong! The correct answer is 3. 0\n\n");
        score=score-1;
        printf("score is %d",score);
    }
printf("\n2. what is my name\n");
    printf("1. harshitha\n2. harshu\n3. maggie\n4. hyna\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 1) {
        printf("Correct!\n\n");
        score=score+4;
        printf("score is %d",score);
    } else {
        printf("Wrong! The correct answer is 1. harshitha\n\n");
        score=score-1;
        printf("score is %d",score);
    }
printf("\n3. 45+55\n");
    printf("1. 100\n2. 200\n3. 300\n4. 400\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 1) {
        printf("Correct!\n\n");
        score=score+4;
        printf("score is %d",score);
    } else {
        printf("Wrong! The correct answer is 1. 100\n\n");
        score=score-1;
        printf("score is %d",score);
    }
}