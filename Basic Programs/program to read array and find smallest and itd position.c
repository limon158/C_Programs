/*52. Develop an algorithm to read an array of  lenth 6 and find the smallest
element and its position */  //from w3recource
#include<stdio.h>
int main() {
    int e, i, smallest_value, position;
    printf("Input the lenth of array :" );
    scanf("%d", &e);

    int n[e];
    printf("\nInput the aray element :");
    for(i=0; i<e; i++) {
        scanf("%d", &n[i]);
    }
    smallest_value=n[0];
    position=0;
    for(i=0; i<e; i++) {
        if(smallest_value>n[i]) {
            smallest_value=n[i];
            position=i;
        }
    }
    printf("\nSmallest value :%d", smallest_value);
    printf("\nPosition of the element :%d", position);
    return 0;
}