#include<stdio.h>
#define N 10
int main()
{
    int i, j, k, l, r;
    int first[N], second[N], third[N], fourth[N];
    printf("\number of row: ");
    scanf("%d", &r);
    for(i=0; i<r; i++)
    {
        printf("\nFstE[%d]: ", i);
        scanf("%d", &first[i]);
    }
    for(j=0; j<r; j++)
    {
        printf("\nSecE[%d]: ", j);
        scanf("%d", &second[j]);
    }
    for(k=0; k<r; k++)
    {
        printf("\nThrdE[%d]: ", k);
        scanf("%d", &third[k]);
    }
    for(l=0; l<r; l++)
    {
        printf("\nFrthE[%d]: ",l);
        scanf("%d", &fourth[l]);
    }
    printf("\n");
    for(i=0, j=0, k=0, l=0; i<r, j<r, k<r, l<r; i++, j++, k++, l++)
    {
        printf("%d\t%d\t%d\t%d", first[i], second[j], third[k], fourth[l]);
        printf("\n");
    }
    printf("YOU ARE GREAT LIMON! You perfectly solved the problem");
    return 0;
}