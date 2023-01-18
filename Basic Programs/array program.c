#include<stdio.h>
int main()
{
    int i;
    int array[5];
    for(i=0; i<4; i++)
    {
        printf("index[%d]:", i);
        scanf("%d", &array[i]);
    }
    for(i=0; i<4; i++)
    {
        printf("%d\t", array[i]);
    }
}