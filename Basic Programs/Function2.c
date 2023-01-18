#include<stdio.h>
void myFunction(char name[])
{
    printf("Are you %s\n", name);
}
int main()
{
    myFunction("Alex");
    myFunction("Peter");

return 0;
}
