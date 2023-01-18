/*
16. Write a C program to read an amount (integer value) and break the amount into 
smallest possible number of bank notes. Go to the editor
Test Data :
sample Input the amount: 375
Expected Output:
There are:
3 Note(s) of 100.00
1 Note(s) of 50.00
1 Note(s) of 20.00
0 Note(s) of 10.00
1 Note(s) of 5.00
0 Note(s) of 2.00
0 Note(s) of 1.00
*/
#include<stdio.h>
int main()
{
    int amount, total;

    printf("The Amount Must Be Greater Than 1000 !!\n");
    printf("Input amount :");
    scanf("%d", &amount);

    total = (int)amount/1000;

    printf("The notes of 1000 is : %d\n", total);

    amount = amount-(total*1000);
    total = (int)amount/500;

    printf("The notes of 500 is : %d\n", total);

    amount = amount-(total*500);
    total = (int)amount/100;

    printf("The notes of 100 is : %d\n", total);

    amount = amount-(total*100);
    total = (int)amount/50;

    printf("The note of 50 is : %d\n", total);

    amount = amount -(total*50);
    total = (int)amount/20;

    printf("The notes of 20 is : %d\n", total);

    amount = amount-(total*20);
    total = (int)amount/10;

    printf("The note of 10 is : %d\n", total);

    amount = amount-(total*10);
    total = (int)amount/5;

    printf("The notes of 5 is : %d\n", total);

    amount = amount-(total*5);
    total = (int)amount/2;

    printf("The notes of 2 is : %d\n", total);

    amount = amount-(total*2);
    total = (int)amount/2;

    printf("The notes of 1 is : %d", total);

return 0;
}
