/*Program recognize that the input integer even or odd-
if the number is even then displayed "This is even number"
if the number is odd then displayed "This is odd number"
the integer must take from user.

let finish the program-
*/
#include<stdio.h>
int main() {
    int a;
    printf("Input a number : ");
    scanf("%d", &a);

    if(a%2==0){
        printf("\nThis is even number...\n");
    } else {
        printf("\nThis is odd number...\n");
    }
    return 0;
}
