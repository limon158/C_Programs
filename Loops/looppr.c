
#include<stdio.h>
int main()
{
    int row, column, n;
    printf("press an integer:");
    scanf("%d", &n);
    for(row=1; row<=n; row++)
    {
        for(column=1; column<=row; column++)
        {
            printf("%d ", column);
        }
        printf("\n");
    }
    return 0;
}
