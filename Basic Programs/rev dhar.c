#include<stdio.h>
#define N 100
int main()
{
    char str_1[N]="Limon halder";
    char result[N];
    int i=0, lenth=0;
    while(str_1[i]!='\0')
    {
        i++;
        lenth++;
    }
    printf("Lenth of chars= %d\n", lenth);
    int j; 
    for(j=0, i=lenth-1; i>=0; i--, j++)
    {
        result[j]=str_1[i];
    }
    result[j]='\0';
    printf("Reverse order= %s\n", result);
    
    return 0;
}