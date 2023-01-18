#include<stdio.h>
#define N 100
int main()
{
    int i, j;
    printf("\nDo you enter the  game?\n");
    printf("Press 1 for enter...\n");
    scanf("%d", &j);
    printf("----------------------------------------------------\n");
    printf("\t\tWELCOME\n\t\tto\n\t\tTHE GAME\n");
    printf("----------------------------------------------------\n");
    printf("----------------------------------------------------\n");
    printf("\t\tBECOME A MILLIONIRE...\n");
    printf("----------------------------------------------------\n");
    int ans;
    printf("What the Robinson Room number?\n");
    printf("1) Five\t2) Ten\n3) Six\t4) Seven");
    printf("\nGive your answer here: ");
    scanf("%d", &ans);
    if(ans==6)
    {
        printf("You are right");
    }
    else
    {
        printf("You are Wrong! Try again...\n");
        printf("\nGive your answer here: ");
        scanf("%d", &ans);
    }
    return 0;
}