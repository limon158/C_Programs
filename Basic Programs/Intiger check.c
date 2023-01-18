/* Write a C program that reads an integer and check the specified 
range where it belongs. Print an error message if the number is negative
 and greater than 80.

Lowest Range of the Program is : 0
Highest Range of the Program is: 100

if you  cross the highest range then you see that displayed 
   "Outside the Range.."
*/
 #include<stdio.h>
 int main() {
    int a;
    printf("\nInputt an integer :");
    scanf("%d", &a);

    if(a>0 && a<=20){               //This line have condition
        printf("Range [0-20]\n");
    } else if(a>=21 && a<=40)       //This line have condition also
    {
        printf("Range [21-40]\n");
    } else if(a>=41 && a<=60)      // This line have condition also
    {
        printf("Range [41-60]");} 
        else if(a>=61 && a<=80)     // This line have condition also
    {
        printf("Range [61-80]");
    } else if(a>=81 && a<=100)       // This line have condition also
    {
        printf("Range [81-100]");
    } else {
        printf("Outside the Range...");
    }
    return 0;
}
 