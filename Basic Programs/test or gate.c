#include<stdio.h>
int main()
{
    int temp, press;
    printf("Enter room temperature(Celcious) :");
    scanf("%d", & temp);
    printf("Enter pressure of room(Pascal) :");
    scanf("%d", &press);

    if(temp<30 || press<20)
    {
        printf("The room is safe >>");
    }
    else
    {
        printf("The room is danger!!");
    }
    return 0;
}
