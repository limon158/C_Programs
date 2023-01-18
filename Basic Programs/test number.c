#include<stdio.h>
int main(){
int a, b;
   printf("Enter the value of a:");
   scanf("%d",&a);
   if(a!=0)
    if(a>0)
    b=1;
    else
    b=-1;
    else
    b=0;
   printf("\nThe value of a=%d",a);
   printf("\nThe value of b=%d",b);
   return 0;
}

