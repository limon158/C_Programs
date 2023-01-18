#include<stdio.h>
int main()
{
    int i;
    for(i=0; i<50; i++)
    {
        if(i%2==0)
        {
            printf("%d\t", i);
            continue;
            
        }
        if(i==20)
            break;
        
    }
    return 0;
}