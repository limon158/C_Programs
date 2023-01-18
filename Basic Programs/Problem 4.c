#include<stdio.h>
//height and width of a rectangle in inches
     int width;
     int height;

     int area;
     int parameter;

 int main()
  {
     height = 7;
     width = 5;

     parameter = 2*(height+width);
     printf("Parameter of the rectangle = %d inches\n\n", parameter);

     area = height*width;

     printf("     Area of the rectangle = %d inches\n", area);



 return 0;

  }
