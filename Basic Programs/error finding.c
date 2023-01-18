#include<stdio.h>
#include<math.h>
int main(){
    double P, r, n, C, ic;
    //printf("Enter the priciple " and interest rate:");
    printf("Enter the principle and interest rate");
    scanf("%lf %lf", &P, r);
    //r=r/100)
    r=(r/100);
    printf("Enter the period of time: ");
    scanf("%lf",&n);
    //C=P*pow(1+r)n)
    C = P*pow((1+r)n;
    ic = C-P;
    print("Compound interest+principle: %.3lf and only interest:%2lf\n", &C, ic);

    return 0;
}
