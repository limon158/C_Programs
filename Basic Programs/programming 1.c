#include<stdio.h>
int main()
{
    int width, height;

    Printf(" Enter the value of width and of height of a rectangle\n");
    scanf("%d",&width);
    scanf("%d",&height);

    int parameter;
    parameter = 2*(height+width);
    printf("Parameter of the rectangle = %d inch\n", parameter);

    int area;
    area = height*width;
    printf("Area of the rectangle = %d inch\n", area);

  return 0;
}
