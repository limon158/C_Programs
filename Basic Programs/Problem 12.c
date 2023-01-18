#include<stdio.h>
int main ()
 {
    int x, y, z, result, max;
    printf("Input the first intiger: \n");
    scanf("%d",&x);
    printf("Input the second intiger: \n");
    scanff("%d",&y);
    printf("Input the second intiger: \n");
    scanf("%d",&z);
    result=(x+y+abs(x-y))/2;
    max=(result+z+abs(result-z))/2;
    printf("Maximum value of three intigers: %d\n",max);
    printf("\n");






 return 0;
 }
