/* Write a C program that accepts two item’s weight (floating points' 
values ) and number of purchase (floating points' values) and calculate
 the average value of the items.

 test data:
   weight-item1: 15
   number of item: 5
   weight-item2: 25
   number of item: 4

   */

  //Code:
  #include<stdio.h>
  int main() {
     
     double noi1, w1, noi2, w2, avrg;

     printf("Enter number of item1 : ");
     scanf("%lf", &noi1);
     printf("Enter weight of item1 : ");
     scanf("%lf", &w1);

     printf("Enter number of item2 : ");
     scanf("%lf", &noi2);
     printf("Enter weight of item2 : ");
     scanf("%lf", &w2);

     avrg= ((noi1*w1)+(noi2*w2))/(noi1+noi2);

     printf("Avarage value =%lf\n", avrg);

     return 0;

  }
