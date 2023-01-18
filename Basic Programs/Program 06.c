/*6. Write a C program to compute the perimeter and area of a circle with a
 given radius
 */
#include<stdio.h>
int main() {
    int radious;
    float area, perimeter;
    printf("Input the radious of the circle :");
    scanf("%d", &radious);

    perimeter=2*3.1416*radious;
    printf("\nPerimeter of the circle is : %f inches\n", perimeter);

    area=3.1416*radious*radious;
    printf("Area of the circle is : %f square inches\n", area);
return 0;
}
