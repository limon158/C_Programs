//Switch
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value of a range(0-6):");
    scanf("%d", &a);
    while(a>6)
    {
        printf("\nYouur input is out of range! Take input again\n");
        printf("Enter the value of a range(0-6):");
        scanf("%d", &a);
    }
    if(a<6)
    {
        switch(a)
    {
        case 1:
        printf("Alex");
        break;
        case 2:
        printf("Prome");
        break;
        case 3:
        printf("Limon");
        break;
        case 4:
        printf("Anup");
        break;
        case 5:
        printf("Robin");
        break;
    }
    }
    
    
    return 0;
}