#include<stdio.h>
int main()
{
    int hr1=15000, grc1=10000, bk1=5000, otrs1=3000, hr2=16500, grc2=8250, bk2=1540, otrs2=5750;
    double Exp, totalExp;
    Exp = hr1+grc1+bk1+otrs1+hr2+grc2;
    totalExp= Exp+otrs2+bk2;
    printf("Second friends report:\nTotal Expense :%lf\n\n", totalExp);
}