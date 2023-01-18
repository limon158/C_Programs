#include<stdio.h>
#define N 100
int main()
{
    char set1[N]="REDLAH NAMIL";
    char set2[N];

    int i=0, lenth=0;
    while(set1[i]!='\0')
    {
        lenth++;
        i++;
    }
    printf("%d", lenth);
    int j;
    for(j=0, i=lenth-1; i>=0; i--, j++)
    {
        set2[j]=set1[i];
    }
    set2[j]='\0';
    printf("\nMy  name is: %s\n", set2);
}
