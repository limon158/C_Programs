#include<stdio.h>
int main()
{
    int digit;
    scanf("%d", &digit);
    switch (digit)
    {
        case 1:
        printf("This is one");
        break;
        case 2:
        printf("This is two");
        break;
        default:
        printf("No match");
    }
}
