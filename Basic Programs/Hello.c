#include<stdio.h>
int main(void){
    int j, sum=0;
    printf("The first ten natural number is: \n\n");
    for(j=1; j<=10; j++)
    {

        sum=sum+j;
        printf("%d", j);
    }
    printf("\n The sum is: %d\n", sum);

    return 0;
  }