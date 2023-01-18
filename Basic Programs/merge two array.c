#include<stdio.h>
#define N 100
int main()
{
    int i, j, k, temp;
    //int n1, n2, n3;
    int arr1[2], arr2[3], arr3[6];

   //n3=n1+n2;
    /*printf("Input Number of element of arr1 =");
    scanf("%d", &n1);*/
    printf("\nInput elements of arr1:\n");
    for(i=0; i<3; i++)
    {
        printf("element-[%d]:", i);
        scanf("%d", &arr1[i]);
    }
    printf("\nElements of arr1=\n");
    for(i=0; i<3; i++)
    {
        printf("%d\t", arr1[i]);
    }

    /*printf("\nInput Number of element of arr2 =");
    scanf("%d", &n2);*/
    printf("\nInput elements of arr2:\n");
    for(j=0; j<3; j++)
    {
        printf("element-[%d]:", j);
        scanf("%d", &arr2[j]);
    }
    printf("\nElements of arr2=\n");
    for(j=0; j<3; j++)
    {
        printf("%d\t", arr2[j]);
    }
    //Merging  two array array
    for(i=0; i<3; i++)
    {
        arr3[i]=arr1[i];
    }
    for(j=0; j<3; j++)
    {
        arr3[i]=arr2[j];
        j++;
    }
    //print array 3
    printf("\nElements of arr3=\n");
    for(k=0; k<6; k++);
    {
        printf("%d\t", arr3[k]);
    }
return 0;
}
