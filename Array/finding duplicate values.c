//write a program to to count total number of duplicate element in the array

#include<stdio.h>
#include<conio.h>

void main()
{
    int array_1[100], array_2[100], array_3[100];
    int i, j;
    int n, mn=1, ctr=0;
    printf("Find total number of duplicate element\n");
    printf("--------------------------------------\n");

    //-------->Input number of array element.

    printf("Input number of array element :");
    scanf("%d", &n);

    //Input elememt values of this array.

    printf("Input values of element :\n");
    for(i=0; i<n; i++)
    {
        printf("element- %d :", i);
        scanf("%d", &array_1[i]);
    }

    //-------->copy elements

    for(i=0; i<n; i++)
    {
        array_2[i]=array_1[i];
        array_3[i]=0;
    }

    //---------->mark the elements are duplicate

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(array_1[i]==array_2[j])
            {
                array_3[j]=mn;
                mn++;
            }

        }
        mn=1;
    }

    //--------->Print the arrays.
    for(i=0; i<n; i++)
    {
        if(array_3[i]==2)
        {
            ctr++;
        }
    }
    printf("\nTotal numbe of duplcate array is : %d \n", ctr);


return 0;
}