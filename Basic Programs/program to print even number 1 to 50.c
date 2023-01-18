/* Write a c program  prints all  even number between 1 to 50.
*/
#include<stdio.h>
int main() {
    int e;
    printf("Even number between 1 to 100 is :\n");
    for(e=1;e<=100;e++) {
        if(e%2==0) {
            printf("%d,", e);
        }
    }
    return 0;
}