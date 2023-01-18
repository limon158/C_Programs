// Find that how many kinds of bangladeshi notes are possible in a given amount.

#include<stdio.h>
int main()
{
    int amount;

    printf("Enter the amount : ");
    scanf("%d", &amount);

    if(1000<=amount)
    {
        printf("Possible notes are : 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1");
    }
    else if(500<=amount)
    {
        printf("Possible notes are : 500, 200, 100, 50, 20, 10, 5, 2, 1");
    }
    else if(200<=amount)
    {
        printf("Possible notes are : 200, 100, 50, 20, 10, 5, 2, 1");
    }
    else if(100<=amount)
    {
        printf("Possible notes are : 100, 50, 20, 10, 5, 2, 1");
    }
    else if(50<=amount)
    {
        printf("Possible notes are :  50, 20, 10, 5, 2, 1");
    }
    else if(20<=amount)
    {
        printf("Possible notes are : 20, 10, 5, 2, 1");
    }
    else if(10<=amount)
    {
        printf("Possible notes are : 10, 5, 2, 1");
    }
    else if(5<=amount)
    {
        printf("Possible notes are :5, 2, 1");
    }
    else if(2<=amount)
    {
         printf("Possible notes is : 2, 1");
    }
    else
    {
        printf("Possible notes is : 1");
    }
    return 0;
}