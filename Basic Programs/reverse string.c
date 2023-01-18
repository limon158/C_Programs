#include<stdio.h>
#define N 100
int main()
{
    char str1[N] = "alastairanupbiswas";
    char str2[N];
    
    int i=0, len=0;
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    printf("Total number of character: %d\n", len);
    int j;
    for(j=0, i=len-1; i>=0; i--, j++)
    {
        str2[j]=str1[i];
    }
    str2[j]='\n';
    printf("\nMy name is= %s\n", str2);

    return 0;
}