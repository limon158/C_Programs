/*
27. Write a C program that read 5 numbers and counts the number of positive 
numbers and negative numbers
*/
#include <stdio.h>
int main() {
	float numbers[5];
	int j, positive=0, negative=0;
	printf("\nInput the first number: "); 
    scanf("%f", &numbers[0]);
    printf("\nInput the second number: "); 
    scanf("%f", &numbers[1]);
    printf("\nInput the third number: "); 
    scanf("%f", &numbers[2]);
	printf("\nInput the fourth number: "); 
    scanf("%f", &numbers[3]);
    printf("\nInput the fifth number: "); 
    scanf("%f", &numbers[4]);
    for(j=0; j<5; j++)
    {
        if(numbers[j]>0)
        {
            positive++;
        }
        else if (numbers[j]<0)
        {
            negative++;
        }
        
    }
    printf("Number of positive number : %d\n", positive);
    printf("Number of positive number : %d\n", negative);
    return 0;

}
