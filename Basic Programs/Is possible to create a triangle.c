/* Write a C program that reads three floating values and check if it
 is possible to make a triangle with them. Also calculate the perimeter 
 of the triangle if the said values are valid

 Theres possible triangle if,
 A+B>C && A+C>B && B+C>A
 If the triangle not   Possible then display:
 "Not possible to create a Triangle..."
*/
#include<stdio.h>
int main() {
    float x,y,z, P;
    printf("Input first number : ");
    scanf("%f", &x);
    printf("Input second number : ");
    scanf("%f", &y);
    printf("Input third number : ");
    scanf("%f", &z);

    if(x<(y+z) && y<(x+z) && z<(x+y))
    {
        P=x+y+z;
        printf("\nParimeter of the Triangle : %.4f", P);
    }
    else
    {
        printf("\nNot possible to create a Triangle...!");
    }
 return 0;

}