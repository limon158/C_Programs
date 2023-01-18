#include<stdio.h>
int main(){
  int num=0;
  printf("Enter a number :");
  scanf("%d",&num);
  if(num%20){
    printf("%d is even number");
  }else{
      printf("%d is odd number");
  }
 return 0;
}
