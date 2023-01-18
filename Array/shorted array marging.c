#include<stdio.h>
#define N 200
int main()
{
    int i=0, j=0, k=0, l=0, m=0;
    int n1=5, n2=6, n3=7, In, Tn;
    int arr1[N]={1, 2, 3, 4, 5}, arr2[N]={6, 7, 8, 9, 10, 11}, arr3[N]={12, 13, 14, 15, 16, 17, 18},
    arr_I[N], arr_R[N];

    In=n1+n2;
    Tn=In+n3;
    while(i<n1&&j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            arr_I[l]=arr1[i];
            l++;
            i++;
        }
        else if (arr1[i]>arr2[j])
        {
            arr_I[l]=arr2[j];
            l++;
            j++;
        }
    }
    while (i<n1)
    {
        arr_I[l]=arr1[i];
        l++;
        i++;
    }
    while (j<n2)
    {
        arr_I[l]=arr2[j];
        l++;
        j++;
    }
    printf("\nArray_I =\n");
    for(i=0; i<In; i++)
    {
        printf("%d\t", arr_I[i]);
    }
    
    while(k<n3&&l<In)          //step-2
    {
        if(arr3[k]<arr_I[l])
        {
            arr_R[m]=arr3[k];
            m++;
            k++;
        }
        else if (arr3[k]>arr_I[l])
        {
            arr_R[m]=arr_I[l];
            m++;
            l++;
        }
    }
    while (k<n3)
    {
        arr_R[m]=arr3[k];
        m++;
        k++;
    }
    while (l<In)
    {
        arr_R[m]=arr_I[l];
        m++;
        l++;
    }
    printf("\nArray_R =\n");
    for(k=0; k<Tn; k++)
    {
        printf("%d\t", arr_R[k]);
    }
return 0;   
}