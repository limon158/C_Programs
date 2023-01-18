#include<stdio.h>
#define N 100
int main()
{
    int a[N];
    int i, n, max;
    printf("Input the number of integer wish to store: ");
    scanf("%d", &n);
    printf("Input integerd elements:\n");
    for(i=0; i<n; i++)
    {
        printf("Index[i]:");
        scanf("%d", &a[i]);
    }

    printf("\nThe element of A is:\n");
    for(i=0; i<n; i++)
    {
        printf("[%d]\t", a[i]);
    }
  max = a[0];
  for(i=1; i<n; i++)
  {
    if(max<a[i])
    {
        max=a[i];
    }
  }
printf("%d", max);

return 0;
}