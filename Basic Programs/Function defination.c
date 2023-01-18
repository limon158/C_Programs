#include<stdio.h>
int myFunction(int, int);
int main()
{
    int result;
    result = myFunction(5, 3);
    printf("The sum=%d", result);
    return 0;

}
int myFunction(int x, int y)
{
    return x+y;
}
