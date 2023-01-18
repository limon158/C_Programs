/* Write a c programme to read an amount (integer valule) and break the
amount into smallest possible number of bank notes.

Test data : alwayas be random amount

The possible banknote are: 100, 50, 20, 10,5,2 and 1.
*/



#include<stdio.h>
int main() {

    int amount, total;

    printf("Input the Amount : ");
    scanf("%d",&amount);

    total = (int)amount/100;
    printf("There are: ");
    printf("\n%d Notes of 100.00\n",total);
    
    amount= amount-(total*100);

    total= (int)amount/50;
    printf("%d Notes of 50.00\n,total",total);  //Higher compiler required

    amount= amount-(total*50);

    total= (int)amount/20;
    printf("%d Notes of 20.00\n", total);

    amount= amount-(total*20);

    total=(int)amount/10;
    printf("%d Notes of 10.00\n",total);

    amount= amount-(total*10);

    total= (int)amount/2;
    print("%d Notes of 2.00",total);

    amount= amount-(total*2);

    total= (int)amount/1;
    printf("%d Notes of 1.00\n", total);

  return 0;

 }




// end the programm