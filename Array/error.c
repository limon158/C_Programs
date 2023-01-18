/*
12. Write a program in C to sort elements of the array in descending order. Go to the editor
Test Data
*/
#include<stdio.h>
#define N 100
int main()
{
    int i, j, n, Array[N];
    printf("Input the size of array : ");
    scanf("%d", &n); 
    //Input element
    printf("Elements for  memory :\n");
    for(i=0; i<n; i++)
    {
        printf("index[i]:", i);
        scanf("%d", &Array[i]);
    }
    printf("Array A is :\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t", Array[i]);
    }
    //Use bubble short

return 0;
}