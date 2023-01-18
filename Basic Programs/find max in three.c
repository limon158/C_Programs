#include<stdio.h>
#include<conio.h>
int main() {
    int a, b, c, max;
    printf("Input a value for a :");
    scanf("%d", &a);
    printf("Input a value for b :");
    scanf("%d", &b);
    printf("Input a value for c :");
    scanf("%d", &c);
     if((a>b) && (a>c))
     {
        printf("Max is a :%d", a);
     }
     else if((b>a) && (b>c))
     {
        printf("Max is b :%d", b);
     }
     else
     {
        printf("Max is c :%d", c);
     }
     return 0;
}