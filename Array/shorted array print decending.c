#include<stdio.h>
int main()
{
    int i=0, j=0, k=0;
    int n1=5, n2=5, n3;
    int array_1[100]={2, 5, 8, 9, 15}, array_2[100]={3, 6, 10, 11, 12}, array_3[100];

    n3=n1+n2;
    while(i<n1&&j<n2)
    {
        if(array_1[i]>array_2[j])
        {
            array_3[k]=array_2[j];
            k++;
            j++;
        }
        else if(array_1[i]<array_2[j])
        {
            array_3[k]=array_1[i];
            k++;
            i++;
        }
    }
    while(i<n1)
    {
        array_3[k]=array_1[i];
        k++;
        i++;
    }
    while(j<n2)
    {
        array_3[k]=array_2[j];
        k++;
        j++;
    }

    printf("Array_3 =\n");
    for(i=0; i<n3; i++)
    {
        printf("%d ", array_3[i]);
    }

return 0;
}