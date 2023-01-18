/*Write a programm for  getting sum for two float integer

integer will be taken by user
intiger type must be float type integer
*/

#include<stdio.h>
int main(){
     
     float integer1, integer2, result;

     printf("Input the first float integer :\n");
     scanf("%f", &integer1);

     printf("Input the second integer number:\n");
     scanf("%f", &integer2);

     result= integer1+integer2;

     printf("The sum is :%f\n",result);

   return 0;

}