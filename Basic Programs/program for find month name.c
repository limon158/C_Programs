/* Write a C program that reads an integer between 1 and 12 and print
 the month of the year in English. 
 Output:
 If i input 8, the program Displsy the 8th month name between 12 month of the 
 year.
 Displayed: August. 
 This program use: switch, case, break, deafult;
 */
#include<stdio.h>
int main() {
    int month_pack;
    printf("Input a number between 1 to 12 to get month name : ");
    scanf("%d", &month_pack);

//this line we ude switch dtatesment:
    switch(month_pack) {
        case 1: printf("\nJanuary\n"); break;
        case 2:printf("February\n"); break;
        case 3:printf("March\n"); break;
        case 4:printf("April\n"); break;
        case 5:printf("May\n"); break;
        case 6:printf("Jun\n"); break;
        case 7:printf("July\n"); break;
        case 8:printf("August\n"); break;
        case 9:printf("September\n"); break;
        case 10:printf("October\n"); break;
        case 11:printf("November\n"); break;
        case 12:printf("December\n"); break;
        deafult:printf("Input a number between 1 to 12\n"); 

    }
    return 0;
}
