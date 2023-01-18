#include <stdio.h>
int main(){
    float height;
    printf("Enter the height of the persion(cm)");
    scanf("%f",&height);
    if(height<140.0)
        printf("This person is dwarf.");
    else if((height>=140.0)&&(height<160.0))
        printf("This person is medium.");
    else if((height>=160.0)&&(height<180.0))
        printf("This person is tall.");
    else
        printf("This person is abnormal.");


 return 0;
}
