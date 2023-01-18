/* Write a program to print character 'A' to 'Z' using loop */
#include<stdio.h>
int main()
{
    char var;
    for(var='A'; var<='Z'; var++)
    {
        printf("%c ", var);
    }
    return 0;
}
