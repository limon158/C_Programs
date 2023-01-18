/*  Write a C pogram to caalculate the sistance between the two pointd

variable:
     x1,x2,y1,y2
Formula:
     distance=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))

*/
     
#include<stdio.h>
#include<math.h>

int main(){

    float x1,y1,x2,y2 gdistance;  //problem find in the programme
    printf("Input x1:");
    scanf("%f",&x1);
    printf("Input y1:");
    scanf("%f",&y1);N\
    printf("Input x2:");
    scanf("%f",&x2);
    printf("Input y2:");
    scanf("%f",&y2);

    gdistance=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    print("Distance between the said point %.4f",sqrt(distance));

  return 0;
}