/*This is a if-else C programme
It define that is the input number positive or negative*/ 
#include<stdio.h>
main()
{
 int num;
 printf("Input a number : "); 
 scanf("%d",&num);
 if(num>0)
 {
  printf("This is a positive integer\n");
 }
 else // else portion of if statement
 {
  printf(" This is not a positive integer..Try again\n");
 }
}

