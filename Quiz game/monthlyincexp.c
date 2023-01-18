#include<stdio.h>
int main()
{
    int i, j, k;
    int s1=50000, ex1=5000, hr1=15000, grc1=10000, bk1=5000, otrs1=3000,
        s2=50000, ex2=0, hr2=16500, grc2=8250, bk2=1540, otrs2=5750;
    printf("\n\t\tMonthly Inc-Exp & Savings report of MR. X\t\t\n\n\n");
    int totalInc, totalExp, totalSavings;
    totalInc = s1+s2+ex1+ex2;
    printf("First friends report:\nTotal income :%d$\n\n", totalInc);
    totalExp = hr1+hr2+grc1+grc2+bk1+bk2+otrs1+otrs2;
    printf("Second friends report:\nTotal Expense :%d$\n\n", totalExp);
    totalSavings = totalInc - totalExp;
    printf("third frind report:\nTotal Savings:%d$\n\n", totalSavings);
    printf("Final report:\n\nTotal Incomes=%d$\nTotal Expense=%d$\nTotal Savings=%d$",
    totalInc, totalExp, totalSavings);
    printf("\nThank you guys for helping me...");

    return 0;
}