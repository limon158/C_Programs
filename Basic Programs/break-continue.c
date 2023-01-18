#include<stdio.h>
int main()
{
    int i=0;
    do{
        printf("%d\t", i);
        i++;
        if(i==5){
            break;
        }
        
    }
    while(i<=10);
}