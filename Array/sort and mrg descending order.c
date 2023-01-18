#include<stdio.h>
#define N 100
int main()
{
    int i, j, k, temp;
    int n, n2;
    int arr_1[N], arr_2[N], mrgd_arr[N];
    //Input array size
    printf("Input sizeof arr(1&2):");
    scanf("%d", &n);
    //input element
    printf("\nInput element of arr_1.....\n");
    for(i=0; i<n; i++)
    {
        printf("Element[i]:", i);
        scanf("%d", &arr_1[i]);
    }
    printf("\nInput element of arr_2.....\n");
    for(j=0; j<n; j++)
    {
        printf("Element[j]:", j);
        scanf("%d", &arr_2[j]);
    }
    //print the arrays
    printf("\narr_1=\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t", arr_1[i]);
    }
    printf("\narr_2=\n");
    for(j=0; j<n; j++)
    {
        printf("%d\t", arr_2[j]);
    }
    //merging array
    for(i=0; i<n; i++)
    {
        mrgd_arr[i]=arr_1[i];
    }
    for(j=0; j<n; j++)
    {
        mrgd_arr[i]=arr_2[j];
        i++;
    }
    n2=n*2;
    printf("\nmrgd_arr=\n");
    for(i=0; i<n2; i++)
    {
        printf("%d\t", mrgd_arr[i]);
    }
    //Sorting accending order
    for(i=0; i<n2; i++)
    {
        for(j=i+1; j<n2; j++)
        {
            if(mrgd_arr[j]>mrgd_arr[i])
            {
                temp=mrgd_arr[i];
                mrgd_arr[i]=mrgd_arr[j];
                mrgd_arr[j]=temp;
            }
        }
    }
    printf("\nmrgd_arr=\n");
    for(i=0; i<n2; i++)
    {
        printf("%d\t", mrgd_arr[i]);
    }
    
    
return 0;
}