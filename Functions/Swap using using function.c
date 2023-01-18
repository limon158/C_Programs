#include<stdio.h>
void swap(int *p, int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
int main()
{
    int n1 = 10, n2 =20;
    printf("Before swap=%d %d", n1, n2);
    swap(&n1, &n2);
    printf("\nAfter swap=%d %d", n1, n2);
    return 0;

}