#include<stdio.h>
int main(){
    int pass, x=10;
    while (x!=0)
    {
        printf("\Input the passward: ");
        scanf("%d",&pass);
    if (pass==1234)
    {
        printf("Correct passward");
        x=0;
    }
     else
    {
        printf("Wrong passward, try another");
    }
    printf("\n");
return 0;
}
