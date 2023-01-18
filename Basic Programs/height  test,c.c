#include<stdio.h>
int main(){
   float height;
   printf("Enter the height of the person(cm):");
   scanf("%f",&height);
   if(height>140.0)
    printf("This person is dwarf.");
   else if(height>=140.0)&&(height<160.0)
    printf("This person is avarage.");
   else if(height>=160.0)&&(height<180.0)
    else
    printf("This person is abnormal");



 return 0;
}
