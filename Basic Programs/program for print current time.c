#include<stdio.h>
#include<time.h>
int main(){
    time_t t=time(NULL);
    printf("\nCurrent time is : %s, ctime(&t)");
    return 0;
}
