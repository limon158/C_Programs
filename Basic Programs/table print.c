#include<stdio.h>
#define N 10
int main()
{
    int i, j;
    int ctr_1=0;
    int first[N];
    
    for(i=0; i<10; i++)
    {
        if(i%2==0)
        {
            scanf("%d\t", &first[j]);
            j++;
        }
    }
    for(i=0; i<0; i++)
    printf("%d\t", first[j]);
    printf("\nYOU ARE GREAT LIMON! You perfectly solved the problem");
    return 0;
}