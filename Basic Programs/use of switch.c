/* write a c program that reads a integer between 1 to 10 and defifine  the 
integer.
Input: 5
Output: Five
*/
#include<stdio.h>
int main(){
    int digit;
    printf("Enter a integer between 1 to 10 :");
    scanf("%d", &digit);
    //Now we start switch statement:
    switch(digit) {

        case 1:printf("\nOne\n"); break;
        case 2:printf("Two\n"); break;
        case 3:printf("Three\n"); break;
        case 4:printf("Four\n"); break;
        case 5:printf("Five\n"); break;
        case 6:printf("Six\n"); break;
        case 7:printf("Seven\n"); break;
        case 8:printf("Eigth\n"); break;
        case 9:printf("Nine\n"); break;
        case 10:printf("Ten\n"); break;
        default:printf("Enter a valid Number...Thank you!");
    }
    return 0;
}