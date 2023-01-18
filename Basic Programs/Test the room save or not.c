#include<stdio.h>
int main()
{
    // temperature =t and pressure=p;
    //now declare the variable
    int t, p;
    printf("Input the tempareture (Celcious) :");
    scanf("%d", &t);
    printf("Input the pressure (atm) :");
    scanf("%d", &p);

    if(t<40 && p<30)
    {
        printf("safe");
    }
    else
    {
        printf("danger");
    }

    return 0;

}