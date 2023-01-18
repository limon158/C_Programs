#include<stdio.h>
void main(){
   int num1, num2, num3;

   printf("Input three number :");
   scanf("%d, %d, %d", num1, num2, num3);
   printf("Enter three number :");
   scanf("%d%d%d",&num1, &num2,  num3);
   if(num1>num2){
    if(num1>num3)
    {
        printf("The firdt number is largest\n");
    }else{
    printf("The tehird number is largest\n");
    }
   }else if(num2>num3){
   printf("The second number is largest\n");
   }else{
   printf("The  third numbeer is largest among three");
   }

return 0;a
}

