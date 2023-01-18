#include<stdio.h>
int main() {
    int T, P;
    printf("Enter room tempereture(Celcius) :");
    scanf("%d", &T);
    printf("Enter pressure inside room(Pa) :");
    scanf("%d", &P);

    if(T>30 && P>30)
    {
        printf("\nYou can enter the room !!");
    }
    else{
        printf("You can't enter the room >>");
    }
    return 0;
}