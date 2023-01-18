#include<stdio.h>
int main() {
    int a;
    printf("Input a number : ");
    scanf("%d", &a);

    if(a%2==0){
        printf("\nThe inputed number is even number");
    } else {
        printf("\nThis is a odd number\n");
    }
    return 0;
}
