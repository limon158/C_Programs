#include<stdio.h>
int main()
{
    int x1, x2, y1, y2, D2;

    printf("input the value of x1 :");
    scanf("%d", &x1);
    printf("input the value of x2 :");
     scanf("%d", &x2);
    printf("input the value of y1 :");
     scanf("%d", &y1);
    printf("input the value of y2 :");
     scanf("%d", &y2);

     D2= ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));

     printf("The value of D is : %d square inch", D2);
     
     return 0;
}