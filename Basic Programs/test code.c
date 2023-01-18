#include <stdio.h>
int main(){
    float PI, radius, height, surfaceArea, volume;
    printf("Enter radius of the Cylinder\n");
    scanf("%f",&radius);
    printf("Enter the height of the Cyjlinder:\n");
    scanf("%f",&height);

    PI=3.1416;
    surfaceArea = 2*PI*radius*(radius+height);
    volume= PI*radius*radius*height;

        printf("Total area of Cylinder : %0.4f\n",
        surfaceArea);
        printf("Total volume of Cylinder :%0.4f\n",volume);


    return 0;
}
