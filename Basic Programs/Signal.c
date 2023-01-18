#include<stdio.h>
int main()
{
    int temp, press;

    printf("Enter the temperature : ");
    scanf("%d", &temp);
    printf("Enter the pressure : ");
    scanf("%d", &press);

    if(temp>20 && press>20)
    {
        printf("Save >>");
    }
    else
    {
        printf("Danger");
    }
    return 0;

}