/* write a programme that accept three integer and find the maximum 
of three.
*/

//program:

#include<stdio.h>
#include<stdlib.h>

int main(){
    int x,y,z, result,max;
    printf("Input the first intiger :");
    scanf("%d", &x);
    printf("Input the d=second integer :");
    scanf("%d", &y);
    printf("Input the third integer :");
    scanf("%d", &z);

    result=(x+y+abs(x-y))/2;
    max=((result+z+abs(result-z))/2;
    printf("\nMaximum value of threee integers : %d",max);

   return 0;

}